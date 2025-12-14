/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_7, (((var_7 ? 927822093290039393 : var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_15 = (min(((213 ? 17518921980419512226 : 927822093290039396)), ((max((min(var_5, var_6)), var_3)))));
                var_16 = (max(var_16, ((min(-19, -31795)))));
                var_17 = ((~(max(((var_10 ? var_4 : var_3)), ((var_12 ? (arr_3 [i_1] [12]) : 222))))));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_7 [i_2] [i_2] [i_2] [4] |= (((17518921980419512222 | (5 - 13))));
                    var_18 ^= (!var_11);
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            {
                                arr_18 [4] [i_1] [i_1] [i_0] = ((((((min(var_10, 7))) ? 17518921980419512212 : 4095)) << ((((50 << (-1 + 26))) - 1677721569))));
                                var_19 = (max(521790657, 13));
                            }
                        }
                    }
                    var_20 = 236;
                    var_21 = (((((61880 >> (var_3 - 83)))) ? var_4 : (min(51, var_7))));
                    var_22 = (((((var_3 || var_0) && var_6)) ? (max((arr_13 [i_1] [i_3] [11] [i_1]), (min(7601907000861588178, 28738)))) : (((((max(119, var_0))) ? ((var_11 ? var_11 : var_11)) : var_9)))));
                    var_23 = max((min(1, (arr_9 [i_0] [i_1] [17]))), ((min(((1 ? var_7 : var_4)), ((var_0 ? var_5 : var_6))))));
                }
            }
        }
    }
    #pragma endscop
}
