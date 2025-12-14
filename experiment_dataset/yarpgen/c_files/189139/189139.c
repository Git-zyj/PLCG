/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_0 - 1] [1] [i_1] = var_1;
                    var_10 = (arr_5 [i_0] [i_1] [i_2]);
                    arr_10 [5] [i_1] [i_1] = (((((arr_3 [i_0 - 1] [i_0 + 2] [i_1]) ? var_2 : 4115615631)) % var_1));
                    var_11 = ((((min(var_1, (arr_2 [i_0] [i_0 - 4])))) ? (arr_3 [i_0] [i_1] [i_2]) : ((30744 ? ((4915 ? (arr_8 [13] [i_1] [i_2]) : 247)) : var_9))));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_12 = var_6;
                        arr_13 [i_1] = (((var_3 + var_2) != ((var_6 * ((var_6 ? var_2 : var_5))))));

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_13 = (min((((!(arr_17 [21] [i_0 - 4] [i_0 + 2] [i_0] [i_1] [21])))), var_3));
                            arr_18 [i_0] [i_1] [i_2] [i_1] [i_3] [i_3] [i_4] = ((min((arr_0 [19]), -292345500250941014)));
                            var_14 = arr_17 [i_0] [i_1] [i_2] [i_3] [i_3] [i_0];
                        }
                        for (int i_5 = 1; i_5 < 21;i_5 += 1)
                        {
                            arr_23 [3] [i_1] [15] = -27;
                            var_15 = ((((min((arr_6 [i_1] [i_3]), (arr_2 [1] [i_1])))) && ((((arr_1 [i_0 - 2]) * (arr_15 [i_3] [i_5 + 1]))))));
                        }
                        arr_24 [i_1] [i_2] [i_3] = (max((((((((arr_5 [1] [i_1] [1]) ? (arr_6 [i_0] [i_0]) : -6840078599616222960)) + 9223372036854775807)) >> ((((179351667 ? (arr_4 [i_1] [i_1]) : var_2)) - 82)))), ((((arr_16 [i_0 + 1] [i_0 + 1] [i_1] [i_3]) ? (!var_9) : ((max(232, 62433))))))));
                        arr_25 [i_0] [i_1] [i_1] [i_1] = ((!((((arr_5 [i_0] [i_1] [i_0]) ? ((((var_5 > (arr_5 [i_0] [i_1] [i_3]))))) : (((arr_2 [2] [2]) ^ var_4)))))));
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        arr_28 [i_0] [i_0] [i_1] [i_6] = 179351664;
                        arr_29 [1] [i_1] [i_1] [i_6] = (~(min(6840078599616222960, var_4)));
                    }
                }
            }
        }
    }
    var_16 = var_4;
    #pragma endscop
}
