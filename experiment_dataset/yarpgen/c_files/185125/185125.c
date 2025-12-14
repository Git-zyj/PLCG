/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_5 != (max(var_11, var_10))));
    var_14 |= (~17592186044415);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_15 += ((((((arr_10 [2] [i_1] [i_1] [12]) && (arr_7 [i_3 + 1] [i_1 - 1] [i_0 - 1] [6])))) >> (((arr_10 [8] [i_2] [6] [8]) - 1531030871))));
                            var_16 -= (max((arr_4 [i_0]), (((arr_9 [i_3] [i_2] [i_1] [i_0]) ? 17592186044415 : (arr_7 [i_0 - 3] [i_0 + 1] [i_1 - 1] [1])))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    var_17 = (min(var_17, (-768091447 / -61)));
                    var_18 += (arr_2 [i_1 + 1] [i_0 + 1]);
                }
                for (int i_5 = 1; i_5 < 13;i_5 += 1)
                {
                    var_19 = (max(18446726481523507200, 48515));
                    arr_18 [i_1] [i_0] = ((((-563408737 * (((((arr_11 [i_0] [i_0] [i_0]) > var_3))))))) / var_10);
                }
            }
        }
    }
    #pragma endscop
}
