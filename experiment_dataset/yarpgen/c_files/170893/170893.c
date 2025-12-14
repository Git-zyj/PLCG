/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_10 / var_0);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_16 = ((106 ? 3815387768 : 4109470955));
                var_17 = (max(((3815387765 ? var_1 : var_3)), (((!var_7) % (~var_3)))));
                var_18 = 18446744073709551603;

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_19 = (max(var_19, (((arr_6 [i_0 + 1]) ? (arr_3 [i_0] [i_1] [i_0]) : (((arr_7 [i_0 - 4]) ? (arr_7 [i_0 + 2]) : (arr_7 [i_0 - 2])))))));
                    var_20 = (max((((arr_1 [i_0 - 1] [i_0 - 2]) % 3815387754)), (((arr_2 [i_0 + 1]) ? (arr_1 [i_0 - 2] [i_0 - 3]) : (arr_2 [i_0 - 3])))));
                }
            }
        }
    }
    var_21 = var_12;
    var_22 = var_5;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            {
                arr_15 [i_3] = ((((arr_9 [i_3] [i_4]) ? (((arr_12 [i_4]) & 479579508)) : 1)));
                arr_16 [i_3] [i_4] [i_4] = (min((-1 >= 4294967295), (((arr_13 [i_3] [i_3] [i_3]) >> 9))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        {
                            var_23 = ((!(arr_20 [i_6] [4] [i_4] [i_3] [i_3])));
                            arr_21 [i_6] [i_3] [i_5] [i_3] [i_3] = ((!(arr_11 [i_3])));
                        }
                    }
                }
                var_24 *= (max((((!(15705 * 43186)))), (arr_19 [i_3] [i_3] [i_3] [i_3] [20])));
            }
        }
    }
    #pragma endscop
}
