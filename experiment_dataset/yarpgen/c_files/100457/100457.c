/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (148 == var_12)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_9 [i_0 - 1] [0] [i_2] [i_2] = (1025378053825903972 < 21383);
                    arr_10 [i_0] [i_1] [i_2] [i_0] = ((!(((~(arr_3 [i_0] [i_1] [1]))))));
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    var_14 = ((((((21383 ^ var_1) + ((23611 << (((arr_3 [i_0] [i_1] [i_3]) - 6360292834693429229))))))) ? -var_11 : 1));
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 9;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 9;i_5 += 1)
                        {
                            {
                                arr_17 [i_5] [i_4] [i_4] [i_3] [4] [i_0 - 1] [i_0 - 1] = (min(((102 ? (max(var_12, var_1)) : (arr_4 [i_1] [5] [i_1]))), (((-((0 ? var_0 : 3066380309)))))));
                                arr_18 [10] [i_1] [i_4] = ((0 && 18446744073709551615) > (((29256 > 21383) ? 102 : (16777088 | -696561977))));
                            }
                        }
                    }
                }
                arr_19 [i_1] [i_0] [i_0] &= (((arr_13 [i_0 - 1] [i_0] [i_1]) ? (max((arr_7 [i_0 - 2] [i_1] [i_1] [i_1]), (arr_5 [i_0] [i_1] [i_1]))) : (((((arr_14 [i_1] [i_1] [1] [i_0] [i_1]) < (arr_4 [i_0 - 1] [6] [i_1])))))));
                var_15 = (min(var_12, (((((44153 >> (274877904896 - 274877904867))) <= 154)))));
            }
        }
    }
    var_16 |= var_8;
    #pragma endscop
}
