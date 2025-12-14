/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((((!var_7) > (var_6 && var_0))))));
    var_16 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [16] |= var_13;
                var_17 += ((1 ? (!62) : ((-32763 ? 1 : 63))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 13;i_4 += 1)
            {
                {
                    arr_16 [i_2] [5] [i_3] [i_3] = ((((var_3 & (-32755 <= 1))) << (((((((var_11 ? 1 : var_4))) ? var_11 : var_2)) - 18108))));
                    var_18 = (~-63);
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_19 = (((0 - -63) ? (var_14 ^ 63) : (var_1 & var_5)));
                                arr_24 [i_3] [i_3] [i_3] [i_3] [i_3] = (((((255 ? -32745 : var_9))) ? var_4 : (var_5 <= var_4)));
                                arr_25 [i_3] [10] = (min((-32754 - 255), var_4));
                                arr_26 [i_5] [i_3] [i_5] [i_5] [i_6] = (max(var_9, (min(((-32751 ? var_12 : -32743)), ((max(var_3, var_8)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
