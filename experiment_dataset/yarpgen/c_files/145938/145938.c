/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((153779185 / var_4) ? (((((min(48316, 1)))) + (var_9 / -53))) : (((min(var_1, 13297011315862527956)) + ((244 ? 5149732757847023646 : var_8)))));
    var_13 = ((((15294956013911490591 * var_4) ? ((max(var_4, 127))) : var_11)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_14 = (arr_0 [i_0]);
                            var_15 = (arr_1 [i_3]);
                            var_16 ^= (max((max(((((arr_9 [i_0] [i_0] [i_2] [i_3]) && -58075506))), ((40 ? (arr_2 [i_1] [1]) : 10690058)))), (arr_9 [i_0] [i_2] [i_1] [i_0])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_17 = (min(var_17, -149));
                            var_18 -= (((((((arr_2 [13] [i_1]) ? (arr_4 [i_0]) : (arr_1 [i_0])))) && 1)));
                            var_19 = ((((arr_14 [i_0] [i_0] [i_0] [i_0]) ? ((((arr_8 [i_0] [i_4] [i_5]) || 4284277238))) : (((!(arr_15 [i_0] [i_0] [3] [i_5])))))));
                        }
                    }
                }
                var_20 = ((!((((((((arr_0 [i_0]) ^ (arr_14 [i_0] [i_0] [i_1] [i_1]))) + 2147483647)) >> (-10690058 - 4284277223))))));
            }
        }
    }
    #pragma endscop
}
