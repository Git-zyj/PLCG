/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    var_14 = (((((max(1099851213, 1099851213)))) ? var_4 : (((((-1099851213 ? 0 : 1)) ^ ((15 ? 0 : 1446913456)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1 - 1] |= (((((1 || (-127 - 1)))) / 3));
                arr_6 [9] [i_1] = (((((arr_1 [i_1 - 1]) < var_5)) ? (!13765490870503114009) : (((arr_3 [i_1 + 1] [i_1 - 1]) ? (arr_3 [i_0] [i_1 + 1]) : (arr_3 [i_0] [i_1 - 1])))));
                var_15 = ((!((max(var_7, (arr_3 [i_0] [i_1]))))));
                arr_7 [i_1] [i_1] = var_9;
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_11 [i_2] = (!112);
        arr_12 [i_2] = arr_9 [i_2] [i_2];
    }
    /* LoopNest 3 */
    for (int i_3 = 4; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                {
                    var_16 ^= (((((101 ? ((var_1 ? (arr_8 [i_3]) : -13)) : ((-(arr_15 [4] [i_5])))))) ? ((var_4 ? (0 % 29403) : 4681253203206437614)) : (var_0 / 13765490870503114002)));
                    arr_22 [i_3] [i_4] [i_4] = (((!-1446913429) > (((arr_19 [i_3 + 1] [i_3 + 1] [i_3 + 1]) ? var_9 : 29))));
                    var_17 = (((!((max(57, 9028120674994327252))))));
                    arr_23 [i_3] = (((((2202637415572592380 ? 0 : 1))) ? (min((arr_17 [i_3 - 3] [i_3 + 1]), (-441856925 | -3129595528724986997))) : ((max((arr_14 [i_3 - 4] [i_4]), var_8)))));
                    arr_24 [i_5] = var_5;
                }
            }
        }
    }
    #pragma endscop
}
