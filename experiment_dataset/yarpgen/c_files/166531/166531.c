/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [i_1] = (((((2147483647 % (arr_9 [i_0] [i_0] [i_0] [i_2] [i_0] [i_3])))) % (((5608699362287963427 | 1013916909) ? -8236 : 3281050383))));
                            var_14 = (max(var_14, (((~((~(arr_2 [i_0] [i_1]))))))));
                            arr_12 [i_3] [i_1] [i_1] [i_0] = 2120103642;
                            arr_13 [i_1] [i_1] [i_2] [i_3] = (((3281050368 * -64) ? ((((1013916909 - -1914849402) ? -53 : 63))) : ((((((-2147483647 - 1) ? 1690340601 : 63))) - (((arr_2 [i_0] [i_3]) - 18446744073709551604))))));
                        }
                    }
                }
                var_15 = (((((-56 ? 9876586613783005617 : 2991116945))) ? 7123873562606495381 : (7 * 3281050392)));
                arr_14 [i_1] [i_1] = ((((1013916903 ? 17 : -3407375309641988849)) * 1013916927));
                var_16 = 133;
                var_17 = ((~(((arr_1 [i_0]) - 1690340601))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            {
                var_18 = (((123 ^ 1) ? (0 * 22) : (((-(arr_16 [8] [i_5]))))));
                var_19 = (arr_15 [i_4]);
            }
        }
    }
    #pragma endscop
}
