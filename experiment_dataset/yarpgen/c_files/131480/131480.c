/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 10;i_4 += 1)
                            {
                                var_19 = (((((((0 + (arr_10 [i_0] [i_1] [i_2] [i_3] [2] [0] [7]))) + (var_6 == 916791465)))) ? (((-2147483647 - 1) ? (arr_6 [i_1] [7] [7]) : (arr_2 [i_0]))) : (((((arr_12 [i_0] [i_0] [i_0]) <= var_9))))));
                                var_20 = ((+((((((arr_3 [i_0]) ? (arr_9 [i_0] [i_1] [9] [3]) : (arr_8 [9] [i_4] [0] [i_4] [i_4] [i_4])))) / 288230376149614592))));
                            }
                            var_21 = ((var_6 ? (arr_3 [i_2]) : ((((~var_7) == var_6)))));
                            var_22 = max((((arr_6 [i_1] [i_1] [3]) ? (max(var_5, -1885)) : (arr_5 [i_0] [i_0]))), var_1);
                            var_23 = (min(((~(arr_11 [i_0] [i_1] [i_2] [i_1] [i_0]))), (((~((((arr_12 [1] [i_1] [i_0]) || (arr_3 [i_0])))))))));
                        }
                    }
                }
                var_24 = (min(var_24, ((max(((((~47) * ((((-2147483647 - 1) >= (arr_8 [i_0] [i_0] [i_0] [i_1] [3] [i_1]))))))), (((min((arr_11 [i_0] [i_0] [i_0] [i_1] [i_1]), (arr_5 [i_0] [i_0]))) << ((-47 / (arr_3 [i_0]))))))))));
            }
        }
    }
    var_25 *= var_14;
    #pragma endscop
}
