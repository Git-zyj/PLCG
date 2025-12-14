/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_0] [4] [i_0] = ((((max((min(var_1, 118)), (12740445646950361205 <= 1350946756)))) ? (-4626920476630750713 || -1759782173) : ((4294967295 ? (~var_5) : ((-1759782173 % (arr_6 [i_0 - 2] [i_0 - 2] [2] [i_2])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1 + 1] [i_2] [i_1 + 1] [i_0] = (max(var_1, (((var_3 == 60637) & (max(var_10, 4294967290))))));
                                var_15 = var_9;
                                var_16 = 1759782173;
                                var_17 = (((var_1 != 177) >= ((-(arr_8 [i_0] [i_1 - 1] [i_0])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_18 = (((arr_6 [i_0 + 2] [i_0 + 2] [11] [i_6]) <= (((var_9 ? var_0 : var_12)))));
                                var_19 = var_10;
                                arr_18 [i_2] [i_2] [i_5] |= (((((!var_5) >> (var_1 - 5795938816777033011)))) ? ((((var_6 ? var_11 : var_1)) ^ (max(var_1, (arr_16 [i_5] [i_5] [i_5] [9] [i_5]))))) : (-1124341233 & 289262400));
                                var_20 = ((-83797901 <= (min(((var_9 ? var_5 : var_0)), (var_2 && 13)))));
                                arr_19 [2] [i_1] [i_2] [i_5] [i_0] = var_12;
                            }
                        }
                    }
                    arr_20 [i_0] [i_0 + 2] [i_0] [i_2] = (((((var_6 % (arr_9 [i_0] [i_2])))) >> (((min(var_3, (arr_9 [i_0 + 2] [i_0 + 3]))) + 8553715198686499004))));
                    arr_21 [8] [i_1] [i_2] [i_0] = var_9;
                }
            }
        }
    }
    var_21 ^= var_10;
    #pragma endscop
}
