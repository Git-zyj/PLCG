/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182101
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
    var_19 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (signed char)119)), (max((min((((/* implicit */unsigned long long int) var_8)), (18446744073709551612ULL))), (((/* implicit */unsigned long long int) ((var_13) ? (-59678804358328258LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-28056))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1 + 1] [(_Bool)1] &= ((/* implicit */short) (~(((/* implicit */int) arr_2 [i_1]))));
                    var_20 ^= ((/* implicit */unsigned long long int) ((arr_5 [i_0 - 2] [i_1] [(_Bool)1] [(signed char)0]) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3642467490U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))) : (3661288133U)));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_7 [i_0 + 2] [i_0 - 1]))));
        var_22 += ((/* implicit */_Bool) var_2);
        arr_9 [i_0 + 2] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)-24043)) : (((/* implicit */int) var_1)))))));
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(-4935006801950762674LL)))) ? (2597168250624601764ULL) : (((/* implicit */unsigned long long int) arr_10 [(short)11]))));
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) 8673494887444212761ULL))));
    }
}
