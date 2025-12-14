/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((max(var_1, 0))));
    var_13 = 6542;
    var_14 = -5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_15 = ((((((arr_6 [i_0] [i_1] [3] [i_3]) ? (arr_6 [15] [i_1] [i_2] [i_3]) : (arr_8 [i_0] [i_0] [i_0])))) ? var_5 : (-1 * 55)));
                            var_16 = 42502;
                            arr_11 [i_2] [i_0] [i_2] [i_0] [i_0] = 0;
                        }
                    }
                }
                var_17 = (i_0 % 2 == 0) ? ((max((arr_1 [i_0]), (((var_3 < (((-638123189 + 2147483647) >> (((arr_7 [i_0] [i_0] [17] [i_0]) + 20045)))))))))) : ((max((arr_1 [i_0]), (((var_3 < (((-638123189 + 2147483647) >> (((((arr_7 [i_0] [i_0] [17] [i_0]) + 20045)) + 9841))))))))));
            }
        }
    }
    var_18 = var_2;
    #pragma endscop
}
