/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_10 *= (((arr_2 [i_0]) + (((arr_1 [i_1] [i_1]) ? var_4 : var_3))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_13 [i_3] [i_2] [i_1] [i_1] [i_2] [i_0] = ((!((var_0 == ((~(arr_10 [3] [3] [1] [i_2])))))));
                            var_11 = ((!((min((arr_11 [i_0] [i_1] [i_2] [i_3]), 108)))));
                            arr_14 [i_0] [16] [i_2] [i_2] = ((-((((var_3 ^ var_3) || (var_9 ^ var_1))))));
                        }
                    }
                }
                var_12 ^= (!((((!var_4) >> (((((arr_11 [i_0] [i_0] [i_0] [i_1]) ? var_2 : 2030629166)) - 20458))))));
                arr_15 [11] = (~var_7);
                var_13 *= ((97 ? ((((var_6 || (arr_8 [i_1] [i_0] [i_0] [i_0]))))) : (min((arr_4 [i_0] [9] [i_1]), (((arr_8 [i_1] [i_0] [18] [i_1]) % (arr_1 [i_0] [i_0])))))));
            }
        }
    }
    var_14 = 148;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            {
                var_15 = ((((var_9 == var_3) * var_2)));
                var_16 *= -5963159028617068533;
                arr_21 [i_4] [i_4] [11] = var_7;
                var_17 -= var_4;
            }
        }
    }
    #pragma endscop
}
