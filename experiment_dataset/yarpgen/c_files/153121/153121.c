/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 23;i_2 += 1)
            {
                {
                    var_11 = (max((max((((!(arr_2 [i_0])))), 48)), ((~(((!(arr_0 [i_0] [i_0]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_4] = 16870170920904121405;
                                var_12 = ((~(arr_9 [i_2 - 3])));
                                arr_14 [i_0] [i_1] = (arr_7 [i_1] [i_2] [i_1] [i_4]);
                                var_13 = var_5;
                            }
                        }
                    }
                    var_14 ^= ((!((min((max(8191, -234407773)), (min(1, var_9)))))));

                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        var_15 = -var_8;
                        arr_17 [i_1] [i_1] [i_0] [i_0] [i_1] [i_1] = ((arr_10 [i_0] [i_0] [i_0]) - (arr_7 [i_0] [i_1] [i_1] [i_0]));
                    }
                }
            }
        }
    }
    var_16 ^= ((((max((min(var_7, 192)), (((172 >> (var_5 - 1851))))))) ? -1644044929 : var_6));
    #pragma endscop
}
