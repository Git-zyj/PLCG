/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((((-2147483627 + 2147483647) >> 0)))) ? var_9 : (((var_5 ? (var_1 | var_6) : 65535)))));
    var_14 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_15 = (min(var_15, (min(((((((arr_3 [i_0] [i_0]) ? 63 : 0)) << (1 % 31737)))), (min((arr_2 [i_0]), (((!(arr_4 [i_1] [i_1]))))))))));
                var_16 = (((((((65517 ? (arr_4 [i_0] [i_1]) : 33805)) + 2147483647)) >> ((((65517 ? (arr_5 [i_0]) : (arr_3 [i_0] [i_0]))) - 50614)))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_17 = ((((min((((arr_10 [23] [23] [i_2] [i_3]) + (arr_10 [i_0] [i_1] [i_2] [i_3]))), (arr_0 [i_2 - 1])))) && -65535));
                            var_18 *= ((!(((arr_8 [i_0] [i_1] [i_0] [i_0]) || 2))));
                            arr_11 [i_2] [i_1] [i_2 - 1] [i_3] = (max(((((arr_10 [i_0] [i_2 - 1] [i_2] [i_3]) < (arr_10 [i_0] [i_2 - 1] [i_2 - 1] [i_2])))), (max(18, 65534))));
                            arr_12 [i_2] [i_1] [i_2] [i_2 - 1] [i_3] = (max((!65529), ((~((((arr_10 [i_0] [i_1] [i_2] [18]) || 1234979840)))))));
                            var_19 = 23;
                        }
                    }
                }
                var_20 = (((-1508648589 ? ((max((arr_4 [i_0] [i_1]), 65535))) : (((arr_0 [i_0]) ? 3059987455 : (arr_3 [i_0] [15]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 16;i_5 += 1)
        {
            {
                var_21 = (min((min((((arr_4 [i_4] [i_5]) / (arr_5 [i_4]))), ((max((arr_10 [i_5] [i_5] [5] [i_5]), (arr_17 [i_5] [i_5] [i_5])))))), ((((min((arr_5 [i_5]), 0))) ? ((~(arr_4 [i_4] [i_5]))) : (arr_10 [i_5] [i_5 - 1] [i_5 - 1] [i_4])))));
                var_22 = ((((((!(arr_18 [i_4] [i_5]))))) ? (((((17408 ^ (arr_0 [i_5])))) | (((arr_3 [i_4] [i_4]) | (arr_8 [i_5] [24] [i_4] [20]))))) : ((min(63, (max((arr_5 [i_4]), -1666821093)))))));
                var_23 = -1382893556;
            }
        }
    }
    #pragma endscop
}
