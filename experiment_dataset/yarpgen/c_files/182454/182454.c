/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    var_18 ^= var_5;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_19 = (max(1, (((arr_11 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1]) <= 3972403655))));
                                var_20 = (max(1470528607199195528, ((3972403644 ? 91486020 : 4244871885927875995))));
                                arr_12 [i_0] [i_0] [i_1] [i_3 + 1] [i_3 + 1] [i_0] [4] = (min(1, 3972403669));
                            }
                        }
                    }
                }
                var_21 = (max((min(((39483 ? (arr_10 [i_0] [i_0] [i_1 - 2] [i_1] [i_1] [23] [i_0]) : var_7)), (arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))), ((min(((1 ? 0 : var_15)), (((1 && (arr_4 [i_0])))))))));
                arr_13 [i_0] [i_0] = ((44605 ? ((~(63615 != 1))) : (arr_0 [i_0] [i_1])));
                arr_14 [i_0] [i_1] = ((-(arr_1 [i_0 - 2] [i_0 - 1])));
            }
        }
    }
    #pragma endscop
}
