/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_7));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_11 += ((((var_1 < (arr_3 [i_0])))) ? -0 : ((min((!var_9), var_3))));
                        var_12 = ((((var_6 | 1728663128) ? (((min(var_3, var_0)))) : ((-(arr_9 [i_0] [i_1] [i_1] [i_2] [i_3]))))));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_14 [i_1] = (((arr_6 [i_0] [i_1] [i_2]) ? (arr_10 [i_0] [i_1] [i_2] [i_3] [i_3]) : (arr_3 [i_0])));
                            var_13 = ((1728663128 || (2566304167 != var_8)));
                        }
                        arr_15 [i_3] [i_1] [i_1] [i_0] = (2566304167 == -1728663117);
                    }

                    for (int i_5 = 4; i_5 < 17;i_5 += 1)
                    {
                        var_14 = (~-2566304184);
                        arr_20 [i_5 - 3] [i_2] [i_1] [i_1] [i_0] [i_0] = (2566304168 >> (var_6 - 7045));
                        arr_21 [0] [i_1] [i_1] [i_1] [i_5] = (arr_13 [i_1] [i_2] [i_1] [i_0] [i_0]);

                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            var_15 = (((((((arr_8 [i_5 - 1] [i_5 - 4] [i_5] [i_5 - 3]) + 2147483647)) << (((((arr_8 [i_5 - 4] [i_5 - 3] [i_5] [i_5 - 3]) + 8826)) - 8))))) & (((arr_8 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 4]) ^ 1728663122)));
                            arr_25 [i_0] [i_1] [i_1] = (((arr_24 [i_6 - 1] [i_6 - 1] [i_6]) <= (~var_9)));
                        }
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_16 = (((((~(arr_3 [i_7])))) <= (max(2566304157, (arr_22 [i_7] [i_7] [i_2] [i_1] [i_0])))));

                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            var_17 = (((arr_27 [i_0] [i_1]) * 1728663128));
                            arr_32 [i_0] [i_0] [i_1] [i_2] [i_7] [i_1] = (arr_9 [i_8] [i_1] [i_2] [i_1] [i_0]);
                        }
                        for (int i_9 = 4; i_9 < 15;i_9 += 1)
                        {
                            arr_35 [i_1] [i_1] [i_2] [i_2] [i_7] [i_9] = arr_27 [i_9 - 1] [i_9 - 3];
                            var_18 = var_1;
                        }
                        arr_36 [i_0] [i_1] [i_2] [i_1] = (arr_12 [i_0]);
                    }
                }
            }
        }
        var_19 = (((arr_17 [i_0] [i_0] [i_0]) & (arr_22 [i_0] [i_0] [2] [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 17;i_11 += 1)
            {
                {
                    arr_42 [i_0] [i_10] [i_10] [i_11 + 1] = 1728663128;
                    arr_43 [i_10] [i_10] = (min(1728663111, 2566304185));
                    arr_44 [i_10] [i_10] [i_10] = ((var_0 - (((arr_37 [i_11] [i_10] [i_0]) ? var_7 : (max(var_7, (arr_13 [i_0] [i_10] [i_10] [1] [i_11])))))));
                }
            }
        }
        var_20 = (min(var_20, (~var_6)));
    }
    #pragma endscop
}
