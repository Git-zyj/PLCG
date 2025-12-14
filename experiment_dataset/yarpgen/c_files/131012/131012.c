/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= ((((!6) ? var_9 : (((-2645180729194866665 + 9223372036854775807) >> (var_4 + 68))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (((arr_4 [i_0 + 3] [i_1 + 2]) - (((arr_5 [i_0 + 3] [i_0] [i_1 + 2]) ? (arr_1 [i_0]) : 0))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_13 [i_3] [i_1 + 1] [i_1] [i_0] = (max(115, 13044418194010849669));
                            var_11 = (((((-22129 ? 2489657242269247560 : (((5402325879698701946 ? 16384 : 1)))))) ? (arr_7 [i_0 + 1] [i_0 + 1] [0]) : (min((((arr_5 [i_0] [i_0] [i_2]) + 0)), -17158))));
                            arr_14 [i_0] [i_0] = ((((min(var_8, (arr_9 [i_3 + 2] [i_2] [i_1 - 1] [i_0] [i_0 + 1] [i_0])))) ? 4398038122496 : (((6451052336092028629 ? 22129 : (arr_3 [i_0] [i_1 + 2]))))));
                            var_12 = (min(var_12, (((max(((-31351 ? (arr_4 [i_0] [i_1 + 2]) : var_0)), ((var_4 ? 0 : 1)))) * ((((~var_7) <= ((3059426513 ? 52180750 : 117)))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 8;i_5 += 1)
                    {
                        {
                            arr_22 [i_0] = ((((((var_3 ? 62 : var_2))) ? (((arr_11 [7] [i_1] [5] [i_5]) ? var_5 : 1)) : ((min(1, 0))))));
                            arr_23 [i_0 - 1] [4] |= ((13044418194010849669 ? 22128 : 31841));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 11;i_7 += 1)
                    {
                        {
                            arr_30 [i_1] [i_0] = ((((min((arr_20 [i_0]), (((-(-127 - 1))))))) ? (((var_3 ? (arr_0 [i_0 - 1]) : var_0))) : (~18446739675671429119)));
                            var_13 = (min(((-27113 ? ((0 ? var_3 : 1)) : ((-(arr_21 [i_7]))))), ((var_7 ? (arr_3 [i_1 + 1] [i_7]) : ((min(var_8, (arr_5 [i_0 + 3] [i_0] [i_7 - 1]))))))));
                            arr_31 [8] [i_1] [i_0] [i_7] [7] = min(((~(arr_8 [i_1 + 2]))), ((var_2 ? ((0 ? var_7 : 7554)) : (!6451052336092028629))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
