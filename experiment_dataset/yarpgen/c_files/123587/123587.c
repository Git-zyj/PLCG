/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_20 = var_9;

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_21 = (max(var_21, ((min((max(var_1, 1)), ((((min(3269783915, -1136479406))) ? (arr_2 [i_0]) : (max(-2036328671, (arr_0 [i_1]))))))))));
            arr_4 [2] = ((~(arr_3 [12] [i_1])));
            var_22 = (min(var_22, 32256));
        }
        var_23 = (min(var_23, 16382));
    }

    for (int i_2 = 1; i_2 < 7;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 8;i_4 += 1)
            {
                {
                    arr_13 [i_2] [i_4] [i_4] = 32256;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_19 [i_2] = 0;
                                var_24 = (max(var_24, ((((4294967284 <= 13712) * ((1 ? 99 : 1025183391)))))));
                                arr_20 [i_3] [7] [i_2] [i_3] = ((min(((4294967295 ? var_12 : -32257)), ((max(-8363, 12))))));
                                var_25 = (max(var_25, 104132217));
                            }
                        }
                    }
                    arr_21 [i_2] [2] [i_4] = (((((((arr_11 [i_2] [i_3]) * 21)) << (((arr_17 [i_2] [7] [i_2 + 3] [i_2] [i_2 + 2]) - 22105)))) <= (max((max(1136479408, 18446744073709551596)), 1))));
                    var_26 = (min(var_26, -1));
                }
            }
        }
        var_27 = (min(var_27, (((((((-16126 ? 244 : (arr_1 [0]))) < (65535 || 0))) ? 297158630 : (1025183404 / -1945637272))))));
    }
    #pragma endscop
}
