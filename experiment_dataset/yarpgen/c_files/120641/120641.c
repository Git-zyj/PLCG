/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((7606213099617650081 / 42530) ^ (var_5 / var_15)))) ? var_7 : (0 / 255));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 4; i_2 < 15;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] [i_1] [i_1] = (~var_13);
                    var_21 -= (arr_4 [i_2 + 2] [i_2 - 3] [i_2 - 2]);
                    arr_8 [i_0] [i_1] [i_1] = (((((arr_0 [i_0]) + 2147483647)) >> (18446744073709551606 - 18446744073709551594)));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_22 ^= ((((((!(arr_4 [i_2 - 3] [i_2 - 3] [i_1]))))) >= 14783683226648166849));
                                var_23 &= (-8601024920426923942 ? 53383 : 53367);
                                var_24 = (!7606213099617650069);
                            }
                        }
                    }
                }
                arr_15 [i_0] [i_0] [i_1] &= ((+((var_8 ? (arr_4 [i_0] [i_0] [i_1]) : (arr_4 [i_0] [i_0] [i_0])))));
            }
        }
    }
    #pragma endscop
}
