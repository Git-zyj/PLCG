/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_4 ? (((var_7 < var_6) ? ((var_10 ? 17 : var_5)) : ((((!(-9223372036854775807 - 1))))))) : ((var_12 ? -1 : (min(18219266917163555258, 17))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_17 = (max(var_17, (arr_3 [i_1] [i_1])));
                    var_18 = ((+(((arr_6 [i_0] [i_0] [i_0]) - (((min((arr_1 [i_1]), 0))))))));
                    arr_9 [17] [i_2] [i_1] [i_0] = (arr_8 [i_2] [i_1] [1]);
                    arr_10 [i_0] [i_2] [i_2] [i_1] = ((!(((((((arr_0 [i_2] [i_0]) ? var_7 : (arr_2 [i_0] [i_0])))) ? (((((arr_0 [i_0] [i_0]) != 18446744073709551613)))) : (max(18446744073709551604, 14033)))))));
                    var_19 -= max((((arr_1 [i_0]) - (arr_2 [i_0] [i_0]))), ((~(arr_6 [i_0] [15] [i_2]))));
                }
                arr_11 [i_0] [i_0] [i_0] = (max((((1 << (((arr_6 [0] [0] [i_1]) - 970575488))))), (-2147483647 - 1)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                arr_24 [i_3] [i_4] [i_5] [i_5] [i_5] = (arr_17 [i_3] [i_3] [i_5] [i_6]);
                                var_20 = (max(((min((arr_20 [i_5] [1] [i_5] [i_4] [i_3]), (arr_16 [i_3] [i_6] [i_7])))), ((((var_4 && var_4) || ((!(arr_23 [10] [i_6] [5] [i_4] [i_3]))))))));
                            }
                        }
                    }
                }
                var_21 = (min(var_21, (+-32765)));
            }
        }
    }
    #pragma endscop
}
