/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, (arr_2 [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_15 = (min((((!((max((arr_7 [i_0] [i_0]), (arr_2 [i_0]))))))), (arr_0 [i_0])));
                                var_16 = (((arr_4 [i_4] [i_3] [i_2]) ? (arr_2 [i_0]) : var_11));
                                var_17 = (min(var_17, (arr_10 [i_4 - 2] [i_1] [i_2] [i_1] [i_0])));
                                arr_12 [i_1] [i_0] [i_1] [i_1 - 1] [i_1] [i_1 + 1] [i_1] = (((min(((((arr_1 [i_2]) ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_1 [i_4])))), (min((arr_8 [i_0] [i_2] [i_3] [i_0]), (arr_11 [i_0] [i_1 + 1] [i_2] [i_3] [i_2]))))) != 10385));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 &= (max(var_3, (3032137757763730016 < var_0)));
    var_19 ^= ((!((!((max(var_13, var_12)))))));
    var_20 = (max(((4 ? var_3 : (var_12 - var_2))), (((var_13 ? var_7 : var_9)))));
    #pragma endscop
}
