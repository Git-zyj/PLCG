/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [8] [8] [8] [i_2] = (arr_5 [i_0] [i_0 + 1] [i_0] [i_0 - 2]);
                    var_19 = (((((arr_2 [i_0 - 2]) << 1)) != 0));
                    arr_8 [i_0 - 2] = (((((((arr_1 [i_0 + 1] [i_0 - 2]) + 2147483647)) << (((-32752 + 32778) - 26)))) + (((arr_1 [i_0 + 1] [i_0 - 2]) ? (arr_1 [i_0 - 2] [i_0 + 1]) : (arr_1 [i_0 + 1] [i_0 - 1])))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 7;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 9;i_5 += 1)
            {
                {
                    var_20 = (arr_3 [i_4] [i_5 - 1]);
                    var_21 = -65534;
                    arr_20 [i_3] [i_4] [i_5] = (max((max(var_18, (107 > -1))), (((+(((arr_3 [i_3] [i_4 - 1]) ? var_17 : var_3)))))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 8;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_22 = (~var_10);
                                var_23 -= ((((max((arr_16 [i_4 + 3] [i_6 + 1] [i_5 + 1]), 1))) != ((max((((-1 != (arr_10 [i_5 + 1])))), var_14)))));
                                var_24 = ((-(((!((((arr_25 [i_6 + 1] [i_7]) ? var_12 : (arr_23 [i_3])))))))));
                                var_25 = (max(var_25, (var_4 > var_3)));
                            }
                        }
                    }
                    var_26 = (max(((4 ? 23 : (-2147483647 - 1))), (((((min(0, var_3))) != (arr_2 [i_4 + 3]))))));
                }
            }
        }
    }
    #pragma endscop
}
