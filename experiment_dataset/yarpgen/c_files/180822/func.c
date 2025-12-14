/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180822
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
    var_17 = ((/* implicit */int) var_6);
    var_18 = ((/* implicit */long long int) var_1);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_4 [i_0] [i_1] [i_1]) : (((/* implicit */int) arr_1 [i_1]))));
            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1])))))));
        }
        for (int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            arr_10 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_2] [i_0])) * (((/* implicit */int) arr_3 [i_0]))))) ? (arr_9 [i_2] [i_2]) : (arr_0 [i_0] [i_2])));
            var_20 = ((/* implicit */_Bool) ((unsigned char) var_6));
        }
        var_21 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_0]))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
    {
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [(unsigned char)11] [i_3])) ? (arr_12 [i_3] [i_3]) : (arr_12 [i_3] [i_3])));
        var_22 ^= ((arr_11 [i_3] [i_3]) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_3] [i_3])))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 18; i_4 += 4) /* same iter space */
    {
        arr_16 [6U] [6U] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_15 [i_4]))));
        arr_17 [i_4] = ((/* implicit */long long int) ((unsigned short) arr_12 [(signed char)7] [i_4]));
    }
}
