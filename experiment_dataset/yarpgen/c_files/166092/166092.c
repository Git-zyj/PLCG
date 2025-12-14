/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= ((((min(var_11, (max(var_10, var_3))))) && var_10));
    var_15 = var_3;
    var_16 &= ((((-var_7 >= (~var_10))) && var_6));
    var_17 = (((((var_2 ^ (var_0 <= var_8)))) ? ((((var_10 ? var_1 : var_4)))) : var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_18 = (max(var_18, (((~(((((~var_12) + 2147483647)) << (var_10 - 4294967191))))))));
                            var_19 = ((max(11, 151)));
                        }
                    }
                }
                var_20 = ((~((((min(var_8, var_3)) == (((var_2 ? var_13 : var_8))))))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_21 = (min(((min(153, (var_3 == 104)))), (((min(var_6, var_8))))));
                                var_22 ^= ((var_10 + 2147483647) >> (((((min(223, 104)))) - 91)));
                                var_23 = (max(((max(146, 0))), ((var_11 ? (var_1 & var_6) : (var_0 ^ var_10)))));
                                var_24 = (max(var_0, (((((max(var_1, var_0))) > (var_9 - var_8))))));
                                var_25 ^= (min(15692571800679639020, 104));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        {
                            arr_21 [i_7] [17] [i_7] [i_7] = ((104 <= (var_7 * 11658581867705223158)));
                            var_26 += ((~((min((min(var_10, var_8)), var_11)))));

                            for (int i_9 = 0; i_9 < 18;i_9 += 1)
                            {
                                var_27 = (~var_4);
                                arr_24 [i_0] [i_7] = (max((min(var_2, var_3)), (max((min(var_8, var_3)), (var_8 * var_6)))));
                                arr_25 [i_1] [i_1] [12] [i_8] [i_7] = (max((max((((var_11 ? var_1 : var_6))), (min(var_11, var_9)))), (((~(min(32767, 2099133953)))))));
                            }
                            for (int i_10 = 0; i_10 < 18;i_10 += 1)
                            {
                                var_28 = (((((var_6 / (var_3 / var_5)))) ? (7 * var_4) : (4294967283 * 0)));
                                var_29 = (max(var_29, ((((min(((max(var_4, var_7))), (min(var_3, var_5)))) & (((max((104 != 31), (min(var_12, var_13)))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
