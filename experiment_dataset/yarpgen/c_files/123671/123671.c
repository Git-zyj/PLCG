/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = (((((24796 & (arr_2 [i_1 + 2])))) == (-1369088011 ^ 1490869245623580313)));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_13 = (min((((1369088010 - (arr_14 [i_0] [i_1] [i_2] [i_4] [i_2 + 1])))), ((((max(var_4, (arr_10 [i_4] [i_1] [i_4] [i_4])))) - 13383616278455563355))));
                                var_14 ^= var_10;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            var_15 = (max((((arr_3 [i_1] [i_1] [i_1]) - (arr_3 [i_1] [i_1 - 1] [i_1]))), ((-(~-269614619)))));
                            var_16 -= ((8692 ? 19098 : 1369088010));
                            var_17 = ((!((min(3256116069, 8702)))));
                            var_18 = (((-(arr_8 [i_1] [i_1 + 1] [i_1 - 1] [i_1]))));
                            arr_22 [i_1] [i_1] [i_5] [i_1] = ((((var_0 ? var_8 : 7676479824661084490)) == 450182272));
                        }
                    }
                }
            }
        }
    }
    var_19 = (((((var_9 & 8688) ? var_4 : var_9))) & (((~var_6) ? (~var_8) : var_7)));
    var_20 = var_10;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 22;i_8 += 1)
        {
            {
                var_21 = (~((~(arr_27 [i_7] [i_8 + 1]))));
                var_22 = (((((~(arr_24 [i_8 - 1] [i_8 - 1])))) ? ((((!(arr_27 [i_8 + 1] [i_8 - 1]))))) : (min(0, (arr_23 [i_7])))));
            }
        }
    }
    #pragma endscop
}
