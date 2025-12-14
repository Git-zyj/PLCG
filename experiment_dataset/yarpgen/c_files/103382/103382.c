/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((var_6 ? var_0 : var_11))) >= ((((!var_10) ? (-701641866 >= 23) : 21355))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 = ((3289240431 ? 24545 : 262143));
                    arr_9 [i_0] [i_0] [i_2] = 255;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_16 -= ((((max(40990, 75))) ? (min((min(var_10, 6)), (((-(arr_7 [i_0] [i_1] [i_2] [10])))))) : ((((1645742560 >= (arr_14 [i_1 + 2] [i_1 - 3])))))));
                                var_17 = ((((((((-(arr_12 [18] [18] [i_2] [i_2] [18] [i_2])))) ? 29472 : var_8))) || -1476201931349873296));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        var_18 = -8;
        var_19 = -3964870649;
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 17;i_8 += 1)
                {
                    {
                        var_20 = (min((((~1067246544) ? var_13 : (((var_9 ? var_0 : -15431))))), (((-61 ? -876624925 : 108)))));
                        arr_25 [i_5] = var_13;
                        var_21 = (min((max((arr_24 [i_8 - 2] [9] [i_8 + 1] [i_8 - 3] [i_8 - 2]), (arr_15 [i_8 - 3]))), (116462684 * var_11)));
                    }
                }
            }
        }
    }
    var_22 = (-876624929 / var_2);
    #pragma endscop
}
