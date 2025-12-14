/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 11;
    var_16 = (min(65535, var_10));
    var_17 = ((~(~var_7)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] |= ((arr_3 [i_0] [i_0]) >= (((arr_1 [i_0]) ? (var_14 + 630189505) : (((var_9 ? 9223372036854775807 : (arr_4 [i_0] [i_1])))))));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_18 = (var_14 >= var_14);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_1] [i_1] [i_0] = 1712921452;
                                var_19 *= (((((1813185051 + ((~(arr_8 [i_2] [i_3] [i_0] [i_2] [i_0])))))) || (~223)));
                                var_20 ^= (max(((((~var_14) && var_6))), (~var_10)));
                                var_21 = (((((min(var_11, 33)) | (33 >= 18446744073709551613))) >= ((max(var_6, -4957269508488335599)))));
                                arr_14 [i_1] = var_13;
                            }
                        }
                    }
                    var_22 = (max(var_22, ((((var_13 % (0 | var_10)))))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    arr_17 [i_1] [i_1] = 1;
                    arr_18 [i_0] [i_0] [i_5] [i_0] &= (arr_7 [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
