/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 = (~65535);
                    var_18 = 0;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_19 *= 65535;
                                var_20 = (max(var_20, var_3));
                                arr_14 [i_0] [i_1] [i_1] = ((0 % (((65535 != ((124 ? 65535 : 65522)))))));
                                var_21 ^= (min((!-113), (-5194 / 104)));
                                var_22 = ((((var_1 == ((var_12 ? var_13 : 124)))) && (((-20 & ((var_3 ? var_11 : 15)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_19 [i_1] [i_1] [i_1] [i_1] [i_6] = var_5;
                                var_23 = (~120);
                                var_24 = ((((min(65535, 65507))) ? (((255 ? var_2 : var_7))) : 4294967286));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = ((~(!var_3)));
    var_26 = (((((136 ? ((var_11 ? 124 : var_3)) : -var_12))) ? var_10 : 12399245784312202566));
    #pragma endscop
}
