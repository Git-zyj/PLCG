/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    var_17 = (arr_3 [i_1] [i_1]);
                    arr_8 [i_2] [i_0] [i_2] = (min((((151617858 + -1006692266306431645) ? (((arr_4 [i_0] [i_0] [i_0]) * (arr_5 [i_0] [i_1] [i_0]))) : -var_7)), ((var_9 ? (arr_5 [i_0] [i_2 + 1] [2]) : (arr_5 [i_0] [i_2 + 1] [i_2])))));
                    var_18 = (((~var_13) - ((min(var_0, (arr_5 [i_0] [i_1] [i_2 + 1]))))));
                    arr_9 [i_2] [i_0] [i_0] = (((((var_0 ? (~18446744073709551615) : (!-28365)))) ? (min(3367135378, 1866434144)) : (((var_12 ^ ((~(arr_2 [i_0]))))))));
                }
                var_19 = (((arr_3 [i_0 - 4] [i_1]) >= (((!(arr_6 [i_0 + 1] [i_0 - 1]))))));
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                arr_17 [i_0] [i_0] = (max(var_13, (((!(((16961 << (3500211814 - 3500211809)))))))));
                                var_20 = ((((var_4 ? var_1 : ((~(arr_6 [i_5] [i_3]))))) > (arr_15 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0 - 4])));
                                var_21 = ((((var_11 >= var_12) > (var_14 <= 3751945296))));
                                var_22 = (max(2150351420093163260, ((var_9 ? (arr_16 [i_0 + 1] [i_0] [12] [i_3] [i_3] [i_4] [i_5]) : (arr_13 [i_0] [12] [i_0 + 2] [i_0])))));
                                arr_18 [i_0] [i_1] [i_3] [i_4] [14] = (max(((!(arr_16 [i_0] [i_0] [i_0 - 4] [i_0] [i_0 - 3] [i_4] [i_0]))), ((!(((5359289082012483320 / (arr_0 [i_0] [i_0]))))))));
                            }
                        }
                    }
                }
                var_23 = (~2480092811);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 23;i_8 += 1)
            {
                {
                    var_24 = (~var_9);
                    arr_26 [i_6] [i_7] [i_6] = max(((min((arr_19 [i_6] [i_8 - 1]), var_3))), ((262143 ? (arr_24 [i_8 - 1] [i_8 - 1] [i_8 + 1]) : 3751945296)));
                }
            }
        }
    }
    #pragma endscop
}
