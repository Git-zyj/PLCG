/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += var_8;
    var_14 = ((var_8 << (var_9 - 748929728)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_15 = (min((((((1 && (arr_7 [i_0] [i_0] [i_2])))) != 65533)), (((arr_9 [i_0] [i_1] [i_2] [i_0]) || (arr_4 [i_0] [i_0] [i_4 - 1])))));
                                arr_14 [i_0] [22] [i_2] [22] [i_2] = (max((((((min((arr_9 [i_4] [20] [21] [12]), (arr_2 [i_0] [0] [i_2])))) && (arr_3 [18] [i_0])))), (arr_1 [i_0] [i_0])));
                                var_16 += (((arr_9 [i_1] [i_1] [i_3] [i_1]) && ((((((arr_0 [i_4 - 1] [i_0]) << (65529 - 65474))) >> (((arr_1 [17] [i_1]) - 30642)))))));
                            }
                        }
                    }
                }
                var_17 += (65512 == 2);
                arr_15 [i_0] = ((10 * (arr_9 [i_0] [10] [i_0] [5])));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {
                            arr_22 [i_0] [i_1] [i_0] [i_0] = (((-2147483647 - 1) & 7094865625871433955));
                            var_18 += (arr_17 [22] [22] [i_5]);
                        }
                    }
                }
            }
        }
    }
    var_19 = var_1;
    #pragma endscop
}
