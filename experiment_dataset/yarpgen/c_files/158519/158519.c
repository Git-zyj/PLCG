/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= ((var_10 ? -1 : 65535));
    var_19 = (((((((11980664984154150383 ? 255 : -8660943925247017422))) ? (((8660943925247017421 ? 83 : 20975))) : ((29525 ? 32767 : -4764432360441157624))))) ? var_11 : 1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_20 = (max(var_20, var_6));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_21 *= (23245 >= 41575);
                                arr_13 [i_3] = (((!var_17) ? (((94 ? 206 : 6466079089555401255))) : ((min((min(8660943925247017421, 2097151)), (((~(arr_9 [i_0] [i_3] [i_2] [0] [i_4])))))))));
                            }
                        }
                    }
                }
                arr_14 [i_1] [9] [i_0] = -1;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        {
                            arr_21 [i_0] [i_1 - 1] [i_5] [i_5] [0] = 2532639923;
                            var_22 = (min(var_22, (((((((max(var_2, 1))) <= (arr_1 [i_1]))) ? ((((((arr_19 [i_0] [7] [i_5] [i_6]) ? 1 : -29526))) ? 17773221719239779180 : (((-1 ? 2131564960 : 28098))))) : ((((!(arr_6 [i_0] [1]))))))))));
                            arr_22 [i_0] [i_0] [i_5] [i_6] = (-(max((17312257094714868404 * var_7), (arr_2 [7] [i_0] [i_1 - 2]))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
