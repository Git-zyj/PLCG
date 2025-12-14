/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 = (max(((max(1696929337, (max(3221225472, 1))))), (1619498299502185364 * -8296)));
                    arr_10 [i_0] [i_0] [i_0] [8] |= (((((27832 ? 27832 : 1)) * (((arr_2 [i_0]) ? var_0 : (arr_6 [i_0] [i_0]))))) <= (((var_11 && (var_1 & 5497380286448119476)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 12;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_13 *= arr_21 [i_3] [i_4] [i_6] [i_7];
                                arr_25 [i_5] = (((~(arr_17 [i_5] [i_5 + 1] [i_5] [i_5 + 1]))));
                            }
                        }
                    }
                }
                var_14 = ((-(arr_20 [i_3] [i_4] [i_4] [i_3 - 1])));
                var_15 = (max(var_15, ((max((((((((arr_8 [i_3] [14] [i_3] [i_4 - 2]) | (arr_13 [i_3] [i_4] [i_3])))) <= (max((arr_6 [i_3] [i_4]), -5497380286448119485))))), 14301)))));
            }
        }
    }
    #pragma endscop
}
