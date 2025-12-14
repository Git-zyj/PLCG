/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = min(32765, (((arr_3 [i_0] [i_0] [i_0]) + (arr_4 [i_0] [i_0]))));
                var_19 = 127;
                arr_6 [i_0] [i_0] = (max(((min((arr_3 [i_0] [12] [i_0]), (arr_3 [i_0] [i_0] [i_0])))), ((32770 ? 127 : (arr_4 [i_0] [i_0])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                var_20 = (arr_8 [i_2]);
                var_21 = ((((((1 ? (arr_9 [i_2]) : (arr_10 [i_3] [i_2])))) ? 32770 : (32770 | 32765))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_22 = ((60721 ? 4219176502226855119 : -2624));
                            arr_18 [i_5] [i_4] [i_3] [i_2] [i_2] [i_2] = (arr_15 [i_5] [i_4] [i_2]);
                            var_23 = ((-(min((arr_14 [i_2] [i_2]), (arr_15 [i_2] [i_3] [i_5])))));
                        }
                    }
                }
                var_24 = (max((((arr_9 [i_2]) << (((arr_16 [i_3] [i_2] [i_2]) - 32999)))), ((180 ? (arr_10 [i_2] [i_2]) : (arr_9 [i_3])))));
            }
        }
    }
    var_25 = ((((((var_17 ? -9160 : var_9)) ^ (var_17 | 18446744073705357312)))));
    var_26 += var_7;
    var_27 = (min(-var_6, var_10));
    #pragma endscop
}
