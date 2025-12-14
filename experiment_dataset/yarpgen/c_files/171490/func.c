/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171490
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
    for (long long int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_0 - 1]))))) ? (arr_0 [i_0 - 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))));
                var_21 = var_9;
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) >> (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0 + 3] [i_0 + 3] [i_0 + 3])) <= (((/* implicit */int) var_5)))))));
                var_23 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_11))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) ((((((/* implicit */_Bool) -2179281698661738114LL)) ? (arr_5 [0ULL] [0ULL] [6ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 2]))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_13)))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned long long int) var_3);
        var_24 = ((/* implicit */unsigned short) var_12);
        var_25 = var_7;
    }
    for (signed char i_3 = 3; i_3 < 20; i_3 += 3) 
    {
        arr_14 [i_3 - 1] [i_3 - 1] &= ((/* implicit */int) ((unsigned long long int) arr_13 [i_3 + 1]));
        var_26 = ((/* implicit */_Bool) 255);
    }
}
