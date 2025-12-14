/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 = (((((-2305843009213693952 ? var_9 : (((1 * (arr_6 [i_0] [i_0] [i_0] [i_0]))))))) ? 9223372036854775787 : ((((8896107906683936314 <= 18446744073709551602) ? 32763 : 1)))));
                    arr_7 [i_2] = (((max(1, 1))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_20 -= ((((((((arr_2 [i_0] [i_0] [i_0]) ? 1 : 1))) ? ((1 ? 9005000231485440 : 0)) : 1)) >> (83 - 66)));
                                arr_12 [i_1] [i_1] [i_4] [i_1] = ((~(arr_9 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 1])));
                                var_21 = ((7986599618894098328 ? 1 : 1));
                                arr_13 [i_0] [i_4] = (((((((((arr_11 [i_4] [i_4] [i_4] [i_4] [i_4]) ? 1 : 1))) ? 1 : 96))) & (((var_3 ? 4294967295 : 1)))));
                            }
                        }
                    }
                    arr_14 [i_2] = ((0 ? (((max(0, 1)))) : (((((min(1, (arr_1 [i_0]))))) & var_9))));
                }
            }
        }
    }
    var_22 = (min(var_22, (!-50)));
    var_23 = -76;
    #pragma endscop
}
