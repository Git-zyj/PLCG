/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151783
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
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        var_19 = ((((/* implicit */_Bool) arr_0 [i_0 + 3] [i_0 - 1])) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) arr_1 [i_0 + 2])) : (arr_0 [(short)19] [i_0 + 3]))) : (max((arr_0 [i_0 + 2] [i_0 + 1]), (arr_0 [i_0] [i_0 + 3]))));
        var_20 = ((/* implicit */int) ((arr_0 [i_0] [i_0]) - (((/* implicit */unsigned long long int) ((((/* implicit */int) var_18)) * (-1073741824))))));
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_21 = ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) var_2)) : (-8386598725940724465LL));
        var_22 ^= ((/* implicit */unsigned short) ((((-8386598725940724465LL) + (9223372036854775807LL))) >> (((arr_2 [i_1]) - (897350256U)))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 2; i_2 < 9; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                {
                    arr_12 [i_1] = ((/* implicit */short) ((((/* implicit */int) min((((((/* implicit */int) arr_11 [i_1])) >= (((/* implicit */int) arr_4 [i_1])))), (((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_0 [i_1] [i_3]))))))) ^ (((/* implicit */int) arr_5 [i_1] [i_1]))));
                    arr_13 [i_1] [i_1] = ((/* implicit */signed char) var_18);
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 23; i_4 += 3) 
    {
        var_23 = ((/* implicit */short) ((((-8386598725940724485LL) + (9223372036854775807LL))) << (((((/* implicit */int) arr_15 [i_4])) - (124)))));
        arr_16 [i_4] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) -2147483641)) ? (-8386598725940724465LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)44)))))));
    }
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) ^ (var_2)));
}
