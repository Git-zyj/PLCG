/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_11 = 1;
                                var_12 = (min((arr_4 [i_2] [i_2]), var_9));
                            }
                        }
                    }
                }
                arr_13 [i_1] [i_1] [i_1] = var_6;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        {
                            arr_20 [i_1] [i_1] = (arr_8 [i_1] [i_5] [i_0] [i_5] [i_1] [i_1]);
                            arr_21 [i_0] [i_0] [i_0] [i_1] = (arr_4 [i_0] [i_6]);
                            arr_22 [i_6] [i_6] [i_6] [i_6] [i_1] = 723960172;
                            arr_23 [i_1] [i_1] [i_1] = 146;
                        }
                    }
                }
                var_13 = (((((var_10 ? (((arr_3 [i_0] [i_0]) ? (arr_17 [i_0] [i_0]) : var_3)) : var_7))) ? ((((var_9 || (~var_4))))) : ((((max(6440136555989863285, -127))) ? (arr_6 [i_0] [i_1] [i_1] [i_1]) : (arr_17 [i_1] [i_0])))));
                arr_24 [i_1] [i_1] = (((((var_2 + (-2147483647 - 1)))) || var_10));
            }
        }
    }
    var_14 = var_2;
    #pragma endscop
}
