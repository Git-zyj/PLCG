/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12210
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) var_17))));
                var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_9))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) (_Bool)1))))))));
                        arr_9 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (~((~(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)29))))))));
                    }
                    var_22 -= ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_15))))));
                }
                arr_10 [i_0] |= ((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) > (var_12)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) (!((_Bool)1)))) > (((/* implicit */int) (!(((/* implicit */_Bool) -1))))))))));
    /* LoopSeq 2 */
    for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
    {
        var_24 -= ((/* implicit */short) (-(((((long long int) (_Bool)0)) ^ (((/* implicit */long long int) ((int) var_17)))))));
        var_25 = ((/* implicit */_Bool) (~((+(((var_7) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-29)))))))));
    }
    for (long long int i_5 = 0; i_5 < 13; i_5 += 2) 
    {
        var_26 = ((((/* implicit */_Bool) (((+((-9223372036854775807LL - 1LL)))) ^ (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_13))))))) ? (var_17) : (((/* implicit */long long int) (~(var_5)))));
        /* LoopSeq 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_27 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
            var_28 &= ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_8))))) > (max((var_5), (((/* implicit */unsigned int) -1)))))))));
            arr_21 [i_6] [i_6] [i_6] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_18)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) == (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_4)) : ((-9223372036854775807LL - 1LL)))))))));
            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) 12LL))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 4) 
        {
            arr_25 [i_5] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) var_4))) == (((/* implicit */int) ((signed char) ((unsigned short) 9223372036854775807LL))))));
            arr_26 [i_5] [i_5] [i_5] = ((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned short) ((unsigned char) max(((unsigned char)0), (((/* implicit */unsigned char) var_8))))))));
            var_30 = ((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1));
            arr_27 [(signed char)5] [(signed char)5] [(signed char)5] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) var_8))))), (1048575ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (signed char)61))))));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_31 &= ((/* implicit */unsigned char) var_10);
            var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) var_8))));
            arr_31 [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((-(((/* implicit */int) (unsigned char)0))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : ((+(576425567931334656ULL)))));
        }
        arr_32 [i_5] [i_5] = (~((((-(var_4))) - (((/* implicit */unsigned int) (-(((/* implicit */int) var_6))))))));
    }
    var_33 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) (-(var_4)))) : (((((/* implicit */long long int) ((/* implicit */int) var_8))) - (var_2)))))) ? (var_4) : (((/* implicit */unsigned int) ((int) (_Bool)1))));
}
