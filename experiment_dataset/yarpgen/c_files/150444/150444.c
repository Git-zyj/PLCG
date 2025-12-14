/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_2] [i_2] = (((!(arr_5 [i_0 + 1] [i_0 - 3] [i_2]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_11 [1] [i_2] [3] = (((((var_1 ? (((0 / (arr_8 [i_0] [i_1] [i_2] [9] [1])))) : (arr_1 [i_4 - 1])))) * (((arr_9 [i_2]) / ((((arr_7 [i_0] [i_0] [i_2] [i_3] [i_4 - 1]) ? 1 : (arr_5 [i_0] [i_1] [i_2]))))))));
                                arr_12 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] = ((((((arr_10 [i_0] [i_1] [i_4 - 1]) ? (arr_10 [i_0] [i_1] [i_4 - 1]) : 4631203758580619570))) ? ((+(((arr_8 [12] [i_3] [i_2] [i_1] [1]) ? (arr_0 [i_0 - 3]) : 21359)))) : (arr_8 [i_4 - 1] [i_4 - 1] [12] [i_0 + 1] [i_0 + 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (((((((var_9 ? -4306758136715119743 : var_4)) & var_9))) ? (((((((var_11 ? var_6 : var_13))) && var_12)))) : (min(var_7, 13815540315128932045))));
    #pragma endscop
}
