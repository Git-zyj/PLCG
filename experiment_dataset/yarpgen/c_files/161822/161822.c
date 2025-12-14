/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= -172;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] = 186307333;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] [3] [i_1] [3] = ((((127 ? (arr_2 [i_1 + 1] [i_1 - 1] [i_1 + 1]) : (arr_2 [i_1 + 1] [i_1 + 1] [i_1 + 1])))) ? 186307333 : (arr_2 [i_0] [i_1 + 1] [i_0]));
                            var_12 -= ((+((max((arr_1 [i_0] [i_1 - 1]), (arr_0 [i_2]))))));
                            arr_11 [7] [7] [7] [4] = (arr_0 [i_2]);
                            var_13 *= ((-((((0 * 0) == ((min(var_5, (arr_4 [i_0] [i_0])))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_14 = (min(var_14, 1));
                            var_15 = ((0 && 137) << (-28845 + 28854));
                            arr_18 [i_0] [3] [12] [3] = ((!(((-0 ? 1 : var_8)))));
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = ((-(arr_3 [i_1] [1] [i_1])));
                            var_16 = (min(var_16, 1));
                        }
                    }
                }
                arr_20 [i_1] [i_1 + 1] [i_1 + 1] = 0;
            }
        }
    }
    var_17 = ((((((((var_8 ? 9797129 : var_2))) ? ((max(var_8, var_5))) : var_9))) ? var_1 : 1));
    #pragma endscop
}
