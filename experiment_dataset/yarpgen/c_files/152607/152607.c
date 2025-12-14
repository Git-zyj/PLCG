/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(((((min(1, 4096))) ? var_3 : var_10)), (((var_12 || (((var_8 ? var_4 : var_6))))))));
    var_14 = (min(var_14, ((var_6 ? var_6 : -var_7))));
    var_15 |= (var_7 ? ((((!(var_3 < var_5))))) : var_8);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_16 |= -536870911;
                                arr_13 [i_4] [i_4] [i_4] [i_4] [i_4] = ((32 % ((((((-1 + 2147483647) >> (65535 - 65517)))) ? (max(var_11, var_10)) : (((arr_12 [i_0 - 1] [i_1]) ? var_10 : (arr_6 [i_4] [i_0 - 1] [i_0 - 1])))))));
                            }
                        }
                    }
                    var_17 = (((((63 ? var_12 : 1) << (var_6 - 38422)))));
                }
            }
        }
    }

    for (int i_5 = 4; i_5 < 11;i_5 += 1)
    {
        var_18 |= (min(var_6, (((arr_14 [i_5]) | (((arr_16 [i_5] [i_5 - 3]) ^ 30))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        var_19 = var_8;
                        var_20 = ((var_4 ? (~49152) : (((~(arr_4 [10] [i_5 - 2]))))));
                    }

                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        arr_28 [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_5 - 2] |= ((var_1 >= (~2534011810)));
                        arr_29 [i_5] [i_6] [1] [1] [1] [i_9] = ((((~-1147933136) >> (((arr_1 [i_5 - 2]) - 3759173981399733882)))));
                        var_21 |= 0;
                    }
                }
            }
        }
    }
    #pragma endscop
}
