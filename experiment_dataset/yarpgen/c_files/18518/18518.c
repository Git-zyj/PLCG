/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 22651;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_11 = var_9;

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_9 [15] [i_2] [i_1] [i_2] = (((((~((~(arr_5 [17] [i_1] [i_2])))))) ? (!var_4) : (((!(((42885 ? 42885 : 10217129520464638857))))))));
                    var_12 = (((((~(((arr_0 [i_1]) - 42865))))) ? (42885 * 4071) : 2682890959));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_13 = (((!var_1) > 966713845946067929));
                        arr_13 [i_3] [i_2] [i_2] [i_0] = (var_0 - var_3);
                        arr_14 [i_2] [i_3] [i_2] [i_3] = (var_4 >= -2009740044);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_17 [i_0] [1] [i_2] [i_4] [i_0] = (!var_5);
                        arr_18 [i_2] [i_1] [i_2] [i_4] = 16633;
                        var_14 *= (arr_5 [i_0] [i_0] [i_0]);
                    }
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_15 = (max((~137438691328), (((var_5 ? (arr_7 [i_2] [i_1]) : (arr_3 [i_1 - 1]))))));
                        arr_21 [i_2] [i_2] [i_0] [i_2] = var_5;
                    }
                    arr_22 [i_0] [6] [i_2] [i_2] = (((arr_10 [1] [i_1] [1] [i_2] [i_2]) > (arr_12 [i_2] [i_1] [i_0] [i_2])));
                    var_16 += ((~(min(((0 << (4294967277 - 4294967248))), ((var_3 ? (arr_19 [3] [3]) : 1701563991))))));
                }
                arr_23 [i_0] = (((var_1 >= var_9) ? (!var_3) : 12271246684717239318));
            }
        }
    }
    var_17 = (!var_2);
    #pragma endscop
}
