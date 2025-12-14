/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!((min((max(var_0, var_1)), ((-32 ? var_0 : var_10)))))));
    var_15 = ((var_0 ? var_10 : ((~((5097 ? 11930188827641828578 : var_8))))));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = var_8;

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = (((max(var_5, var_1)) / (((arr_1 [i_0]) ? var_5 : var_7))));
            arr_6 [i_0 - 1] [i_0] [i_0] = (((12454820486291484054 ? (((((arr_3 [i_0] [i_1]) > var_13)))) : var_12)));
            arr_7 [i_0] [5] [i_0] = (arr_3 [i_0] [i_1]);
            arr_8 [i_0] = var_10;
        }
        for (int i_2 = 2; i_2 < 15;i_2 += 1) /* same iter space */
        {
            arr_12 [i_0] [i_0] [i_0] = ((min(((min(39437, 1)), var_12))));
            arr_13 [i_0] [i_0] [i_0] = var_8;
        }
        for (int i_3 = 2; i_3 < 15;i_3 += 1) /* same iter space */
        {
            arr_17 [10] [i_0 - 1] [i_0] = ((-(~9050)));
            arr_18 [i_0] [i_0] = (min(var_10, -661326618));
            arr_19 [i_0] = max((min(var_5, ((var_0 ? var_2 : var_0)))), (~var_10));
            arr_20 [i_0] [i_3] [i_3] = (min(((var_12 ? var_3 : var_12)), ((max(var_13, (((var_11 ? var_10 : (arr_14 [i_0])))))))));
        }
        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    {
                        arr_27 [i_0] [i_0] = var_0;
                        arr_28 [i_0] [i_0] [i_5] [i_5] [4] [14] = ((26129 ? 81 : 23641));
                        arr_29 [i_0] [i_4 - 1] [i_0] [i_6] = (((((!var_7) ? var_13 : ((((arr_26 [2] [i_4] [i_4 + 3] [i_4] [i_6]) ? var_6 : var_10)))))) ? -var_7 : (min((min(var_6, var_2)), (((var_8 ? (arr_0 [i_0]) : var_7))))));
                        arr_30 [i_0] [i_0] [i_5] [i_0] = var_2;
                    }
                }
            }
            arr_31 [i_0] [i_4] = (max((((!11370309858600628737) ? (min(9050, 0)) : -var_1)), var_3));
        }
    }
    var_16 = ((7566364976613034847 ? 16128 : -3699752448706766226));
    var_17 = (+-1);
    #pragma endscop
}
