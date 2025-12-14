/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100517
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
    var_10 -= ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-101)) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)0)) | (2147483647)))))))));
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        var_11 &= ((((/* implicit */_Bool) 1467986764U)) ? (((arr_1 [i_0] [(signed char)16]) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [6])) << (((636113995044142675ULL) - (636113995044142663ULL)))))) : (max((((/* implicit */unsigned long long int) arr_1 [i_0] [(signed char)16])), (var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [4]))));
        var_12 = ((/* implicit */long long int) (~(((/* implicit */int) (short)-1))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        var_13 = ((/* implicit */unsigned char) arr_2 [i_1]);
        var_14 = ((/* implicit */unsigned char) arr_2 [i_1]);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_15 |= ((/* implicit */unsigned int) (+(min((((/* implicit */unsigned long long int) arr_2 [i_2])), (arr_3 [i_2])))));
        var_16 = ((/* implicit */_Bool) var_4);
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_6 [i_2])), (var_2))))));
            /* LoopSeq 1 */
            for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                var_18 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_5 [i_2] [i_2]))))));
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) var_6))));
                var_20 = ((/* implicit */unsigned int) (((-((+(((/* implicit */int) var_8)))))) | (((((/* implicit */int) arr_8 [i_2])) + ((+(((/* implicit */int) var_8))))))));
                var_21 = ((/* implicit */long long int) arr_3 [i_2]);
            }
        }
        var_22 = (~((-(((/* implicit */int) min((((/* implicit */unsigned char) var_9)), (arr_5 [i_2] [i_2])))))));
    }
}
