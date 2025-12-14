/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128662
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
    var_20 = ((/* implicit */unsigned char) var_16);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] &= ((var_17) - (((var_17) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 3]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            arr_5 [(_Bool)0] [i_1] [i_1] = ((/* implicit */unsigned char) (+(arr_1 [i_1] [i_0 - 1])));
            var_21 = (+(((/* implicit */int) arr_3 [i_0 + 3] [i_0 + 2] [i_0 - 1])));
            var_22 = ((/* implicit */short) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) arr_3 [i_0] [i_0 + 2] [i_0 + 2]))));
        }
    }
    for (unsigned int i_2 = 3; i_2 < 13; i_2 += 1) 
    {
        arr_8 [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_2] [i_2]))));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-4474)) == (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -5777456078180880167LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33464))) : (-1LL)))))))));
        arr_9 [i_2] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) * (max((var_17), (((/* implicit */unsigned long long int) 5777456078180880171LL)))))));
    }
    for (unsigned short i_3 = 1; i_3 < 17; i_3 += 4) 
    {
        var_24 = ((/* implicit */unsigned short) var_11);
        arr_13 [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) (unsigned short)1598)))));
    }
}
