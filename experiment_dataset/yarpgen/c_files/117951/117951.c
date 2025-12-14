/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((18446744073709551615 > 8388607) > (min(-773118071, var_6))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1] [i_0] [i_1] = (max(5933700663668080410, 61066));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_13 = (max((345685047240017088 >= -773118071), (((arr_2 [i_0 - 2]) && (arr_2 [i_0 - 2])))));
                                var_14 = (arr_2 [i_3]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_15 = (((arr_7 [5] [i_1] [i_1] [i_1 + 2]) << (((8 * 18446744073709551615) - 18446744073709551578))));
                                arr_15 [i_0] [i_1] [i_2] [i_5] [10] [i_2] |= ((((min((~-30001), (arr_14 [i_0 + 2] [i_1] [i_0 + 2] [13] [i_2 + 2])))) ? (min((max(-773118071, -3033671504282173463)), (((var_2 >> (773118091 - 773118068)))))) : ((((50395 / 59936) & var_6)))));
                                var_16 = (!3227251435463104400);
                            }
                        }
                    }
                    var_17 = ((max((max((-9223372036854775807 - 1), (arr_11 [i_0 + 1] [i_1] [i_1] [i_1 + 3]))), ((max(3072, 1970014632))))) ^ ((((29978 >= (((var_1 ? 1 : (arr_3 [i_0] [i_1])))))))));
                    arr_16 [i_0] [i_0 - 1] [i_1] [i_2] = 9223372036854775807;
                }
            }
        }
    }
    var_18 -= ((((max(1737348170, 30168))) < var_9));
    #pragma endscop
}
