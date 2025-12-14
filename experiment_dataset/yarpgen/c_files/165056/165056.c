/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 &= ((min(-580453358, (arr_0 [i_0] [i_0]))));
        arr_3 [i_0] = -32755;
        var_17 = ((~(arr_0 [i_0] [8])));
    }
    var_18 = 32728;
    var_19 = var_8;
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            {
                var_20 |= ((((max(-32755, -32759))) ? (((32738 ^ ((max((arr_5 [i_1]), var_8)))))) : ((((25 ? (arr_7 [i_1 + 2] [i_2]) : (arr_4 [i_1] [i_2]))) | (((var_5 ? 32738 : 32738)))))));
                var_21 ^= (min(((max((arr_7 [i_1 + 1] [i_1 + 1]), (min(32738, 9267014))))), ((((((arr_7 [i_1 + 2] [i_2]) ? (arr_7 [i_1] [14]) : (arr_6 [i_2] [i_2] [i_1 + 1])))) ? (arr_6 [i_1 + 2] [i_2] [i_2]) : (arr_4 [i_1 + 2] [i_1 - 1])))));
                var_22 = (min(var_22, (((((max(7, (arr_4 [i_1 + 2] [i_1 + 2])))) & ((-9267039 ^ (arr_4 [i_1 + 1] [i_1 + 1]))))))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_23 |= ((((-32737 >= ((13 | (arr_11 [15] [i_2] [3]))))) ? (((arr_7 [i_3] [14]) ? (arr_11 [i_1 + 1] [i_1 + 2] [4]) : (((32767 == (arr_8 [i_2])))))) : (((arr_9 [i_1] [i_2] [i_3] [i_4]) | 32760))));
                            var_24 = ((var_10 ? (arr_11 [i_1 + 2] [i_1 + 1] [i_1 - 1]) : (((((21838 << (32765 - 32756))) < var_15)))));
                            var_25 += (min(((~(arr_9 [i_1] [i_1 + 1] [i_1] [i_1]))), (((32738 | 108456461) | (-83 ^ var_6)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
