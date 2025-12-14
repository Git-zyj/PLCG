/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_11 = (max(1537627681, 1));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_1] [i_3] [i_4] [i_4] = ((820023292 * (((-820023291 >= (arr_2 [i_0] [i_1]))))));
                                var_12 |= ((0 ? ((-(((arr_11 [i_1] [i_4 + 1]) << (((arr_5 [i_0] [i_1] [i_0]) + 16)))))) : (1 || -2)));
                                var_13 = ((((arr_13 [i_3] [i_3] [i_2 - 1] [i_0] [i_0]) & -1)));
                            }
                        }
                    }
                }
                var_14 = (max(var_14, (((((((-12 / (arr_11 [i_0] [i_1]))) / (((arr_7 [i_0] [i_0]) ? var_3 : 6)))) > (((((var_3 | (arr_4 [i_1] [i_1] [i_0])))) ? (((arr_7 [i_0] [i_0]) ? var_9 : var_9)) : ((var_7 ? -1 : var_4)))))))));
            }
        }
    }
    var_15 = var_2;
    var_16 &= var_9;
    var_17 = (((((-51 ? 4294967282 : 1))) % (var_8 & var_8)));
    #pragma endscop
}
