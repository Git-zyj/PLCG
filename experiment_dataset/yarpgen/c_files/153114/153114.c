/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_10 = ((~(!2740127111)));
        arr_4 [i_0] = (max((-1 > 2017857739), (arr_0 [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_1] [i_2] [14] &= (((~7491513334132192702) ? ((2068712757 ? 0 : 65535)) : 14));
                        arr_13 [10] [i_1] [i_1] [i_0] = (max((((((1 ? -23111 : var_3))) * (max((arr_5 [i_1] [i_1]), (arr_9 [i_1] [i_3] [i_2] [i_1] [i_0] [i_1]))))), var_5));
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_1] = (((arr_8 [i_0 + 1] [i_0]) / -12639));
                    }
                }
            }
        }
        arr_15 [i_0] = (max((max((arr_7 [i_0 - 1] [i_0 + 1] [i_0]), (arr_3 [i_0 - 1]))), (((4294967295 ? 12149 : -12639)))));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    var_11 = ((+(((((~19248) + 2147483647)) >> (min(var_6, 0))))));
                    arr_25 [i_4] [i_5] [i_4] = (arr_21 [i_4] [i_4]);
                }
            }
        }
        var_12 = max(((18446744073709551611 & (arr_16 [i_4]))), ((var_4 ^ (arr_16 [i_4]))));
        arr_26 [i_4] = (((arr_19 [i_4] [4]) > ((((~(arr_20 [i_4] [i_4])))))));
    }
    var_13 = (min(12626, 17897263868541241930));
    var_14 = var_6;
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                {
                    arr_35 [5] [i_9] [1] [1] = ((((min(((2068712762 << (12626 - 12626))), (var_1 && 4294967295)))) ? var_8 : (min((arr_10 [i_7] [i_8] [i_8] [i_9] [i_9]), ((var_2 ? (arr_16 [15]) : 1091014456))))));
                    var_15 = ((((max(31, 9223372036854775807))) ? var_6 : (var_7 * var_4)));
                }
            }
        }
    }
    var_16 = var_0;
    #pragma endscop
}
