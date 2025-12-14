/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147771
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) * (((((((/* implicit */long long int) (-2147483647 - 1))) / (2602382237012499572LL))) * (((/* implicit */long long int) (-(((/* implicit */int) var_5))))))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (-2147483647 - 1)))))) == ((-(((/* implicit */int) var_6)))))))));
                    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((long long int) ((((/* implicit */_Bool) 4311820250375245282LL)) || (((/* implicit */_Bool) 4311820250375245267LL))))))));
                    arr_6 [i_1] [i_2] = ((/* implicit */unsigned short) 2147483625);
                    arr_7 [i_0] [i_2] = ((/* implicit */_Bool) (-(var_9)));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_3 = 3; i_3 < 20; i_3 += 1) 
        {
            var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_4)) + (var_0)))) ? (((/* implicit */unsigned long long int) ((1360604558U) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (var_6)))))))) : (var_0))))));
            var_14 = ((/* implicit */unsigned char) (+(((var_9) - (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
            var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) max(((_Bool)1), (((((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */long long int) 1735865529U)))) < (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))))))))));
        }
    }
    /* LoopSeq 2 */
    for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        var_16 = ((/* implicit */short) min(((-(((/* implicit */int) var_2)))), (((314554382) / (((/* implicit */int) var_1))))));
        arr_12 [i_4] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_2))));
        var_17 *= ((/* implicit */short) var_2);
        var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_5))));
    }
    for (long long int i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        var_19 = ((/* implicit */unsigned short) (-((-(3862621892528923891LL)))));
        var_20 = ((/* implicit */long long int) ((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)22))) : (65536ULL)));
    }
}
