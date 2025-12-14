/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= (min(var_8, ((min(-2663116257, (((11432506642014123745 ? var_6 : var_9))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((!(arr_4 [i_0])));
                arr_6 [i_0] [i_1] = ((-((-(arr_3 [i_0] [i_1])))));
                arr_7 [i_0] [i_0] = var_13;

                for (int i_2 = 1; i_2 < 6;i_2 += 1)
                {
                    arr_10 [i_0] [i_0] &= (arr_0 [i_0] [i_1 - 2]);
                    arr_11 [i_0] [i_1 + 1] [i_2] |= ((((!(arr_1 [i_1 - 1] [i_1 + 1])))));
                    arr_12 [0] [i_1] [i_2] [i_2] = (max((((arr_3 [i_0] [i_0]) ? (var_13 * 11432506642014123748) : var_3)), 8796093022207));
                    arr_13 [i_0] [i_0] [i_0] [i_2] = ((!(((58 ? var_2 : (arr_3 [i_1 - 3] [i_2 + 1]))))));
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    arr_17 [5] [i_1] [i_3] [i_0] = (max((!var_4), (((min(2953191770, 11432506642014123745)) >= (((min(var_6, 64573))))))));
                    arr_18 [i_0] [i_1 - 1] = (min(((min((-1 <= 8637459994059715926), (max(980, (arr_14 [i_0])))))), (((arr_14 [i_1 + 1]) ? (((arr_16 [i_0] [i_0] [i_1] [i_3]) ? var_11 : (arr_2 [i_1]))) : (arr_9 [i_3])))));
                    arr_19 [i_0] [i_1] [i_3] = (max((((arr_1 [i_0] [i_1]) ? (!3410493375) : (((arr_9 [i_3]) ? var_6 : 2199023255552)))), (((((min((arr_1 [i_0] [i_3]), (arr_8 [i_3] [i_3])))) ? var_11 : 1)))));
                }
                for (int i_4 = 1; i_4 < 6;i_4 += 1)
                {
                    arr_23 [i_4] [i_1] = var_12;
                    arr_24 [i_0] [i_0] [i_4] [i_4] = (((((((49535 ? (arr_22 [i_0] [i_4] [i_1] [i_4]) : 58))) - (max(var_1, var_11)))) - (((((arr_0 [i_0] [i_1 + 1]) >= (arr_0 [i_0] [i_1 + 1])))))));
                    var_15 += (min((((var_5 ? (!0) : (max(234361898, var_10))))), 2199023255552));
                    var_16 = var_11;
                }
                for (int i_5 = 1; i_5 < 8;i_5 += 1)
                {
                    arr_28 [i_0] [i_5] [i_5] = ((2147483647 >= 1) > -var_10);
                    arr_29 [i_0] [i_5] [i_5] = (max((min((~17291862819876523432), var_0)), (arr_9 [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
