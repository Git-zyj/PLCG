/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_6 < (max(var_9, -1598364094))))) <= ((-(var_14 / var_4)))));
    var_17 -= (max((~var_10), (((231146726 ? 231146736 : var_11)))));
    var_18 = (min(var_18, var_12));
    var_19 = -231146737;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_1] = ((~(arr_2 [i_2 - 2] [i_2 + 2] [i_2 - 2])));
                    var_20 = (max(var_20, ((((var_0 / var_0) > (arr_5 [i_0] [i_0 - 2] [i_2 - 2]))))));
                    var_21 = (((arr_4 [i_0 + 1] [i_0] [i_2 + 2]) / (((-1171156303 / (arr_3 [i_0] [i_1]))))));
                    arr_8 [i_0] [i_0 + 1] [i_0] = ((((((var_7 + 2147483647) << (((max(var_1, 15)) - 18446744072216834700))))) > (((((562949953421311 ? (arr_5 [i_0] [i_0 - 1] [i_0 - 3]) : var_14))) * (var_0 - var_9)))));
                }
            }
        }
    }
    #pragma endscop
}
