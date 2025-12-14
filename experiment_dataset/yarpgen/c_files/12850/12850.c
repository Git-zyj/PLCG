/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_19 |= (min((((!(((arr_1 [i_2] [i_2]) == -10))))), (((((var_17 ? var_1 : (arr_5 [i_0 + 2])))) ? (arr_3 [i_1 - 1]) : (arr_6 [i_3 + 3] [i_3 - 1] [i_3 + 3] [8])))));
                            var_20 = (max(var_20, (((((((arr_7 [3] [i_1 - 1] [i_0] [i_1] [i_2]) ? -14 : var_17)) * (((arr_6 [i_0] [6] [9] [1]) >> (var_1 + 17272)))))))));
                        }
                    }
                }
                var_21 = (arr_3 [i_0]);
                var_22 ^= var_6;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            {
                var_23 = ((~(((((arr_10 [0]) + 2147483647)) >> ((~(arr_9 [i_4])))))));
                var_24 = var_12;
            }
        }
    }

    for (int i_6 = 4; i_6 < 20;i_6 += 1)
    {
        var_25 &= ((var_7 ? 18 : (arr_16 [i_6 + 3] [i_6])));
        var_26 += -564085249;
        var_27 = (((((arr_14 [i_6]) && 5)) ? ((((!var_13) >= ((-9 ? -15 : 5912157769584405772))))) : ((~(arr_14 [i_6])))));
    }
    var_28 = (((((-12 ? var_8 : 16419))) ? 3397051048 : -3));
    #pragma endscop
}
