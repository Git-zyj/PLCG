/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= (min(var_17, ((var_7 ? var_19 : (~var_15)))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_21 ^= ((((((((9600341394604885080 ? 2261829968 : var_13))) - var_3))) ? (arr_12 [12]) : (((var_9 * (min((arr_0 [i_2] [i_4]), var_8)))))));
                                var_22 = (min(var_22, ((((((((min((arr_2 [i_1] [i_1] [i_1]), (arr_11 [i_0] [20] [i_2] [i_1] [i_0])))) ? (((((arr_6 [i_0 - 3] [i_1] [i_2] [i_4]) <= var_12)))) : (~var_1)))) ? (((max(var_9, (arr_5 [i_2 + 3] [i_1] [i_2 + 3]))))) : (max(-2261829968, (arr_5 [i_3] [i_1] [i_0]))))))));
                            }
                        }
                    }
                    arr_14 [i_2] [1] [i_2] [i_0] = (min(((var_3 ? (max(var_14, (arr_3 [12] [i_2 + 1]))) : (~48277497))), (arr_8 [i_2] [i_2])));
                }
            }
        }
    }
    var_23 = var_16;
    #pragma endscop
}
