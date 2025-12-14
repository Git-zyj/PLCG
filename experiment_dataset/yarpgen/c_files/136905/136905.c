/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((~(((!(((-(arr_1 [i_2 - 2])))))))));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_12 [i_2 + 1] [i_1] &= (max(-1, ((max((arr_6 [i_0] [i_1] [i_2 + 1] [i_2 - 1]), (arr_9 [i_0] [i_1] [i_2] [i_2 + 1]))))));
                        var_12 -= ((~(((arr_4 [i_2 - 1]) - 12679868811043758258))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_13 = (min(var_13, var_9));

                        for (int i_5 = 1; i_5 < 21;i_5 += 1)
                        {
                            arr_19 [i_2] [i_5] [i_5] = (((arr_9 [i_0] [i_5 + 1] [i_2 - 2] [i_5 + 1]) ? -1 : (arr_9 [i_2] [i_5 + 1] [i_2 - 1] [i_2])));
                            var_14 -= ((var_1 ? -923236791 : var_2));
                            var_15 = -111;
                        }
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            arr_24 [i_0] [0] [i_2 + 1] = (6195570052604293968 || 209);
                            arr_25 [i_1] [i_1] [i_1] [i_4] [i_6] = (arr_3 [i_0] [i_0]);
                        }
                        arr_26 [i_1] [i_1] [i_2] = ((-(47 - -1)));
                    }
                }
                var_16 = (max(var_16, 37));
                var_17 = min((((-1244208147 >= (arr_0 [i_0])))), (arr_10 [i_0] [i_1]));
                var_18 = (max(var_18, ((min(923236779, (arr_17 [i_0] [i_0] [i_0] [i_1]))))));
                arr_27 [i_0] [i_1] = (arr_22 [i_0] [i_0] [i_0] [i_1] [i_0] [21] [i_1]);
            }
        }
    }
    var_19 = (max(var_10, (min((582605737 ^ 3935957720), 1075907305258301387))));
    var_20 = var_3;
    var_21 = (max((max(var_0, (var_7 + -1))), (((3 ? var_10 : var_3)))));
    var_22 = (!var_10);
    #pragma endscop
}
