/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_9 / var_6);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_12 = (((~(max(2, var_6)))));
                    var_13 = ((min(3, (41 * 18446744073709551613))));
                    arr_6 [i_0] [4] [i_1] = (max(((135 ? var_6 : (min(var_8, (arr_4 [i_1]))))), (min(16356009775283460789, 55798))));
                    var_14 = (max((((min(var_4, (arr_3 [i_0] [i_1] [i_0]))))), (min(var_3, var_6))));
                    arr_7 [3] [i_0] [i_1] [i_1] = var_4;
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        {
                            var_15 ^= ((((var_4 ? -116 : 135))));
                            var_16 ^= (((min(5575497610036379683, 3))) ? 55818 : ((max(var_4, 31058))));
                        }
                    }
                }
                var_17 = (min(var_10, (min(((max(133, var_10))), ((216 ? -5140511684726602209 : (-32767 - 1)))))));

                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    var_18 *= min(((1 * (arr_14 [i_0] [i_1] [i_0] [2]))), 16382);
                    var_19 ^= (arr_10 [i_0] [i_0] [i_0] [i_1] [i_5]);
                    var_20 = (max(((4294967295 / ((var_0 ? var_10 : 21)))), var_10));
                }
            }
        }
    }
    #pragma endscop
}
