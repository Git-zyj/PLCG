/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= ((~((17767325616873715887 ? 43600 : 3390862701469461131))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 = (max(var_17, (((!(((arr_1 [4] [i_0]) != 18)))))));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_18 &= ((~(arr_0 [i_3] [i_3])));
                        var_19 = (((((51668 >> (var_11 - 22665)))) ? (max(var_15, (arr_8 [i_0] [3] [3] [16] [16] [17]))) : (((var_5 ? ((((arr_2 [i_2 + 1] [i_2 + 1]) && (arr_9 [13] [13] [i_2 - 1] [i_3])))) : ((var_1 ? var_5 : var_3)))))));
                    }
                }
            }
            var_20 |= ((((((((var_14 ? 15687307837659389905 : 36))) ? 164 : ((36737 ? 2759436236050161710 : -8987925424311899806))))) ? var_9 : (min(var_5, ((var_13 ? var_15 : (arr_5 [i_1])))))));
            var_21 = (min(var_21, (!15687307837659389928)));
        }
    }
    var_22 = 13239672330073676725;
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                arr_15 [i_4] = var_15;
                var_23 += (!var_13);
                var_24 = 2147483647;
            }
        }
    }
    #pragma endscop
}
