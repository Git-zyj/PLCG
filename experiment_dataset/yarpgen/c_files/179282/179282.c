/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((((0 ? var_19 : var_5))) ? (((var_19 ? var_12 : var_5))) : ((var_15 ? var_13 : 127))))) || ((122 > ((831995866 ? 65532 : 9))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_21 = (min(var_21, (((-((~(arr_5 [i_0] [i_0] [i_0]))))))));
                    arr_7 [i_0] = ((var_5 == (((((var_9 ? var_17 : var_15)) <= (var_3 & var_9))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_22 = ((((var_9 ? ((var_15 ? var_15 : var_14)) : ((((!(arr_9 [i_4] [14] [i_2] [i_0] [i_0]))))))) ^ (((var_1 ? var_7 : (arr_12 [i_4 + 1] [i_4] [i_4] [i_4] [i_4] [6]))))));
                                var_23 |= (((((((var_8 ? var_14 : 2147483647))) ? var_18 : var_2)) <= ((((arr_11 [i_1] [i_1] [i_3] [i_3]) ? var_5 : var_4)))));
                                var_24 = var_19;
                                var_25 = (min(var_25, (((~(-2147483647 ^ 7792925903787988016))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_26 = (min(var_26, ((((var_3 ? (var_2 || var_9) : ((var_13 ? 16 : var_5))))))));
                                var_27 &= ((((1462187232 ? (arr_12 [i_0] [i_0] [i_0] [i_0] [i_5] [16]) : ((-1377 ? var_7 : var_3)))) % ((((var_17 <= var_5) ? 3610419016 : (((var_18 ? var_0 : -60))))))));
                                var_28 = 10120188010870840441;
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = (((((var_8 == var_16) && (var_2 != -1120225980))) ? ((((-var_6 <= (var_1 / 65530))))) : (((((var_9 ? var_6 : -4040))) / (max(var_2, var_15))))));
    #pragma endscop
}
