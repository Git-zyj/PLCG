/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (+-3);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_19 ^= (arr_7 [i_0] [i_0] [i_2]);
                            var_20 ^= ((var_1 ? var_12 : (((56170 ? ((((!(arr_2 [i_0]))))) : (min(72057044282114048, 72057044282114050)))))));
                            var_21 = ((var_17 < ((var_10 ? (arr_2 [i_2]) : (((min(var_9, (arr_8 [7] [1] [i_2] [i_2] [i_2])))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            arr_13 [i_4] = (((((arr_11 [i_4] [i_1] [i_4 + 1] [i_5]) ? (min(var_11, (arr_7 [i_5] [18] [i_0]))) : (arr_6 [i_0] [i_4] [i_4 + 1])))) ? (arr_6 [i_0] [i_4] [i_4 + 1]) : ((((min(var_7, (arr_8 [i_0] [i_1] [i_4 - 1] [i_4] [i_5])))) ^ (!8369558609151275336))));
                            arr_14 [i_5] [i_4] [i_4 - 2] [i_4] [i_0] = (i_4 % 2 == 0) ? (((+(((((((~2147483647) + 2147483647)) + 2147483647)) >> (((arr_11 [i_4] [i_4] [i_4] [i_5]) - 23865))))))) : (((+(((((((~2147483647) + 2147483647)) + 2147483647)) >> (((((arr_11 [i_4] [i_4] [i_4] [i_5]) - 23865)) - 13009)))))));
                            var_22 += ((!((((arr_4 [i_0] [i_4 + 1] [i_5]) ? ((1577354734 ^ (arr_1 [i_0]))) : (((100 ? 0 : 103))))))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_4] = var_17;
                            var_23 |= ((135 ? 3610121584 : -5323927717449435110));
                        }
                    }
                }
                arr_16 [i_0] [i_1] = (((((max((arr_7 [i_0] [i_0] [i_0]), var_14))) && (var_2 && var_6))) || ((max(4278190080, (3 || var_16)))));
            }
        }
    }
    #pragma endscop
}
