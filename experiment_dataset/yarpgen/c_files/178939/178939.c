/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((-1 ? -914524168 : -25070));

                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    arr_9 [i_0] = (arr_0 [i_0]);
                    arr_10 [i_2] [i_2 + 1] [i_2 - 2] [i_0] = (arr_0 [i_0]);
                    arr_11 [i_2] [i_0] [i_0] = var_1;
                }
                arr_12 [i_0] = ((30100 ? (arr_4 [i_1 - 3] [i_1 + 2] [i_0]) : (((min(-979072258, -8624)) + 63957))));
                arr_13 [i_1] [i_1 + 2] [i_0] = (((((-30 ? 81 : var_6))) ? (557558219 <= -7) : 172));
            }
        }
    }

    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_16 [i_3] = ((~((610173062 ? (arr_15 [i_3]) : (arr_15 [i_3])))));
        arr_17 [i_3] = (((1597178231 ? 3684794239 : 4294967278)));
    }
    for (int i_4 = 3; i_4 < 10;i_4 += 1)
    {
        arr_21 [i_4 - 2] [i_4] = ((((610173047 > (arr_8 [i_4 - 1] [i_4] [i_4])))));
        arr_22 [6] [1] = 20;
        arr_23 [i_4 - 2] [0] = var_0;
    }
    var_10 = var_4;

    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        arr_26 [i_5] [i_5] = ((min((8160 / var_1), (!254))));
        arr_27 [i_5] = (((min(17573, 1))) ? (~176240183) : (!196));
        arr_28 [i_5] = ((1 >> (8139 - 8119)));
        arr_29 [i_5] = ((arr_24 [i_5]) ? (17556 - var_5) : ((((arr_24 [i_5]) ? (arr_24 [i_5]) : (arr_25 [i_5])))));
    }
    #pragma endscop
}
