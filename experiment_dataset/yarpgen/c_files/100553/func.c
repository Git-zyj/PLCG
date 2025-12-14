/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100553
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
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) var_7)) ? ((-(var_5))) : (((/* implicit */long long int) ((/* implicit */int) ((var_8) != (((/* implicit */int) var_6))))))))))));
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (max(((~(((/* implicit */int) (unsigned short)1186)))), (((((/* implicit */_Bool) var_4)) ? (2115985686) : (((/* implicit */int) (unsigned char)0)))))) : ((~(((((/* implicit */int) var_0)) | (((/* implicit */int) var_11))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */int) var_6)) | (((/* implicit */int) (unsigned short)11)))), (((/* implicit */int) (!(((/* implicit */_Bool) 13648579950124490497ULL)))))))) ? ((-(arr_8 [i_0 - 1] [i_0]))) : (((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_4 [i_2] [i_0] [i_0]))) <= ((-(arr_8 [i_0] [i_1]))))))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */long long int) (~((~(((((/* implicit */_Bool) (unsigned char)0)) ? (var_7) : (((/* implicit */int) (unsigned char)248))))))));
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((2115985683) | (((/* implicit */int) (unsigned short)64356)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_3 = 3; i_3 < 13; i_3 += 4) 
    {
        arr_15 [i_3] [i_3 + 2] = ((/* implicit */int) ((var_5) <= (((/* implicit */long long int) ((/* implicit */int) ((var_5) >= (((/* implicit */long long int) var_3))))))));
        arr_16 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((short) var_7))) ? (((/* implicit */long long int) ((((/* implicit */int) var_6)) | (var_3)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) arr_4 [i_3] [i_3] [i_3 - 1])) : (var_4)))));
        var_16 = ((/* implicit */unsigned int) var_9);
        var_17 = ((((/* implicit */_Bool) (~(-642765362)))) ? (var_7) : (((((/* implicit */int) arr_13 [i_3])) & (var_7))));
    }
}
