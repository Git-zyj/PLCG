/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_12 = (117 | 3869);
        var_13 = (arr_0 [i_0] [i_0]);
        arr_2 [i_0] = max(-263910068, (min(-32545, ((192 ? 28672 : var_9)))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_14 = ((~(~192)));
                        arr_14 [i_1] [i_3] [i_2] [i_3] [i_2] [i_1] = 3854;
                        arr_15 [i_1] [i_1] [i_1] = (arr_9 [i_2 - 1]);
                        var_15 *= 3859;
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_16 -= ((((((arr_20 [i_3]) && (arr_7 [i_1] [i_1]))))));
                                var_17 ^= ((~(arr_18 [i_3])));
                                arr_22 [i_6] [i_5] [i_3] [i_2] [i_1] = ((-var_7 ? (min((var_6 < -3869), ((0 ? (arr_5 [i_6] [i_6]) : 3869)))) : (74 >= 227)));
                                var_18 = (max(var_18, 93));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 &= (min(((~(var_4 + 1072693248))), -var_11));
    var_20 = (min(var_11, ((-2677794869 ? (max(2760021866, 3869)) : -1))));
    #pragma endscop
}
