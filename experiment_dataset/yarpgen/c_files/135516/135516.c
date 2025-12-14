/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;
    var_16 = (max((max(((158 ? var_13 : var_0)), ((98 ? 124 : 31965)))), ((((max(31953, 0))) ? -155 : ((121 ? 1286962585 : var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0 + 1] [i_0] [i_0] = (max(var_2, ((max(124, (max(158, -125)))))));
                                arr_14 [i_4 - 1] [i_3] [i_2] [i_1] [i_0] [i_0] = (max(((+((124 << (((-82 + 112) - 11)))))), -59927));
                            }
                        }
                    }
                    arr_15 [10] [i_2] [i_2] [i_2] = (33571 <= ((max((arr_8 [i_0 + 1]), (arr_8 [i_0 + 1])))));
                    arr_16 [i_0 - 1] [i_0 - 1] = ((-(((18446744073709551609 == (113 % -2123803030))))));
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 21;i_7 += 1)
                            {
                                arr_27 [i_0] [9] [9] [i_6] [i_7] = 84;
                                var_17 = ((-(arr_2 [1] [i_0 - 2] [i_0 - 2])));
                                arr_28 [i_0] [i_0] [i_1 - 1] [i_5] [i_6] [i_6] [i_6] = 33554;
                            }
                            var_18 -= (((((((1872531452672530961 ? var_7 : 0)) & (arr_26 [i_0 + 1] [i_6] [i_0 + 1])))) ? 124 : -124));
                        }
                    }
                }
                arr_29 [0] = 112;
            }
        }
    }
    #pragma endscop
}
