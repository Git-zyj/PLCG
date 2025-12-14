/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((~((var_9 ? -4538 : var_1)))) == ((max(275572142961987791, 253)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_12 = -26549;

                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    var_13 = ((~(arr_6 [i_0 - 2] [i_0] [i_0])));
                    var_14 = (max(var_14, ((((arr_6 [i_0 + 1] [4] [i_2 + 2]) * (((max(var_8, 26549)))))))));
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    var_15 = (144 * 1);
                    arr_9 [i_0] [i_1] [12] [i_1] = ((~(((arr_5 [i_0 - 2] [i_0] [i_0 - 1]) * (arr_5 [i_0 - 2] [i_0] [i_0 - 1])))));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((!(arr_0 [i_3])));
                    arr_11 [i_0] = var_8;
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_16 -= (var_7 - var_8);
                            var_17 = (min(var_17, 1536203818814805589));
                            var_18 -= ((((min(var_2, (arr_15 [i_0 + 1] [i_0 + 1] [i_0 + 1])))) ? 275572142961987791 : (arr_14 [i_0] [i_0 + 1] [i_4] [i_0 - 2] [1])));
                        }
                    }
                }
                var_19 = (max(var_19, (arr_16 [i_0 + 1] [2] [i_0] [i_0])));
            }
        }
    }
    #pragma endscop
}
