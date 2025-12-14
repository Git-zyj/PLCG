/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0 + 2] = (arr_0 [i_0 - 1] [i_0 - 1]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_11 = (max((((((32505856 ? (-127 - 1) : 45))) ? (max(-2147483644, 18446744073709551611)) : (((max(24474, (arr_1 [i_0 + 1]))))))), ((((((((arr_3 [i_0] [i_0]) != (arr_4 [i_3]))))) > ((24477 + (arr_9 [1] [1]))))))));
                            arr_12 [9] [9] [i_2] [i_3] = (((~((10140475819116091954 ? 56994704 : var_0)))));
                        }
                    }
                }
                var_12 *= var_10;
            }
        }
    }
    var_13 = (max((((((1446683114 ? -127 : var_3))) ? 7430587001363016793 : ((-9223372036854775796 ? var_6 : 7430587001363016793)))), (((3024219377 ? 1 : 1)))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 12;i_5 += 1)
        {
            {
                arr_19 [i_4] [i_5] = ((2504617536991352836 ? var_6 : (arr_15 [i_5])));
                arr_20 [i_5] [i_5] [i_5] = ((((((((min(57, (arr_16 [i_4] [1]))))) + var_8))) ? (((1270747933 ? 216 : 0))) : (((~10) ? ((64597 + (arr_17 [1] [i_5] [i_5]))) : (-99 + -102)))));
            }
        }
    }
    var_14 = (min(var_14, ((((1 ^ var_6) >> (((1 && (!var_3)))))))));
    #pragma endscop
}
