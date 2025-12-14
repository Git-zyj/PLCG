/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 1821682536743758727;

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [i_1] [i_1] [0] = var_7;
                        var_15 = (max(var_15, (var_8 * var_3)));
                        var_16 = (-2147483647 - 1);
                        var_17 -= (arr_3 [i_0] [i_2] [3]);
                    }
                }
            }
        }
        var_18 &= ((~((((~(arr_1 [i_0]))) & -var_7))));

        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {
            var_19 = (max(var_19, (arr_9 [i_4])));
            var_20 = (max(var_20, ((((((var_5 ? (arr_12 [i_0 + 1] [i_0 + 1] [i_4 + 1]) : (arr_12 [i_0 + 1] [i_0 + 1] [i_4 + 1])))) + (max(var_3, var_7)))))));
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            arr_15 [i_0] [i_0] [i_5] = ((~(arr_5 [i_0 - 2] [i_0 - 3] [i_0])));
            arr_16 [i_0] [i_0] [i_0] = var_9;
            arr_17 [i_0] [i_0] = var_13;
            arr_18 [i_5] = var_13;
            arr_19 [i_0] [i_0] [i_0] = ((((arr_6 [i_0 - 3] [13] [i_5]) ? (1821682536743758715 + var_12) : (((~(arr_3 [i_0] [i_0] [2])))))));
        }
        var_21 = (((~18446744073709551615) ? 1527012068 : (arr_14 [i_0 - 2] [i_0 - 2])));
    }
    var_22 -= var_9;
    #pragma endscop
}
