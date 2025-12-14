/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((var_17 << (var_13 + 23303)))) ? (((-(max(var_6, var_9))))) : ((var_16 ? var_12 : (max(var_2, var_3)))));
    var_20 = (+-11235);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_21 -= (((((((((arr_9 [i_0] [i_2 + 1] [0] [i_1 + 2] [i_0] [i_0 + 4]) ? (arr_0 [i_0 + 4]) : var_7))) ? (((11235 ? var_13 : (arr_2 [5])))) : (arr_0 [i_3 + 1])))) ? (arr_4 [i_0] [i_0] [i_2 - 3]) : (-11250 | -11250)));
                            var_22 = (+(((arr_9 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 - 1]) ? (arr_9 [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 1]) : (arr_9 [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 + 1]))));
                        }
                    }
                }
                var_23 = (max(var_23, ((((~var_9) <= (((min(11237, 0)))))))));
                var_24 = (min((((-(arr_7 [i_0 + 3] [i_0 + 1] [i_0] [i_0 - 2])))), -11235));
                var_25 = (max(((+((var_17 ? (arr_4 [4] [4] [i_1 + 1]) : (arr_3 [i_0] [i_1] [i_1]))))), ((min(6, 6)))));
            }
        }
    }
    var_26 = var_11;
    #pragma endscop
}
