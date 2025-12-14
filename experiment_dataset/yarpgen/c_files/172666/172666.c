/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = ((-113 ? (((0 ? 2168047898 : -4344183303226289076))) : (arr_3 [i_1] [i_1])));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_13 ^= (min((arr_8 [0] [i_3] [i_2 - 1] [1] [0]), (min((arr_6 [12] [i_0 + 3] [i_0 + 3] [12]), ((((arr_7 [i_4] [i_1] [8] [i_3]) || (arr_9 [8] [i_1] [i_2 - 1] [i_3] [i_4] [i_4]))))))));
                                arr_11 [8] [0] [i_2] [i_0] [i_4] = ((((min(var_0, (arr_3 [12] [12]))) % (((arr_10 [i_0] [i_0 + 3] [i_0 + 3] [i_0] [i_0 + 3]) << var_1)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = ((-(((((107 ? -113 : 1))) ? (!-1) : var_2))));
    /* LoopNest 2 */
    for (int i_5 = 4; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            {
                var_15 = (1 % 1323578197);
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 18;i_8 += 1)
                    {
                        {
                            arr_22 [i_5] [i_7] [15] = ((((((arr_12 [6]) || (arr_21 [10] [10] [i_5 - 1] [i_5 - 1] [1]))) && ((min((arr_13 [i_5 - 1] [i_5 - 1]), var_9))))));
                            var_16 = 1;
                        }
                    }
                }
            }
        }
    }
    var_17 ^= (min(var_5, -1));
    #pragma endscop
}
