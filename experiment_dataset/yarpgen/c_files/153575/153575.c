/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~((1 ? -6911924303540963894 : 32963))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_11 = (arr_1 [i_2] [i_2]);
                            var_12 = (min(var_12, ((max(var_0, (arr_8 [13] [1] [1] [9]))))));
                            var_13 = (max(var_13, (arr_9 [i_0] [i_1 + 1] [i_0] [7] [i_0] [11])));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 3; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_18 [14] [i_5 - 1] [i_0] [i_4 - 3] [i_0] [i_1] [i_0] = (((max((arr_0 [i_5 - 1]), var_4)) != (arr_0 [i_6])));
                                arr_19 [i_0] [i_1] [i_4 + 1] [i_5] [i_6] = (min((max(((18446744073709551612 ? 746416336415091973 : (arr_11 [i_0]))), (32732 && 22828))), 147));
                                var_14 = 13221136249311585671;
                                var_15 = var_4;
                            }
                        }
                    }
                }
                var_16 = (min((min((arr_4 [i_0]), var_0)), ((max((-32767 - 1), 1)))));
                var_17 = ((-1 / ((((((var_8 ? var_2 : 18022))) ? 2086415450 : 99)))));
            }
        }
    }
    #pragma endscop
}
