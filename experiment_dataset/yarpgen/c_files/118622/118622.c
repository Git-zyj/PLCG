/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_18 = (min(var_18, ((max((((((var_17 ? (arr_9 [1] [i_1] [i_2]) : var_4))) || ((min(var_2, var_5))))), (((var_0 > -2699215360689660493) > (22 && 33))))))));
                                arr_14 [i_4] [i_1] [i_1] [i_1] [i_0] = (((((((min((arr_6 [i_4] [2] [2] [i_0]), var_15))) ? ((~(arr_4 [i_4] [i_4] [i_4]))) : ((min(var_3, (arr_2 [8]))))))) & (((!var_16) + ((var_13 << (((arr_1 [i_1]) + 863876678))))))));
                            }
                        }
                    }
                }
                arr_15 [i_1] [i_1] = (((((1 >= (1 % 2280213483)))) - ((((var_14 >= -51) <= (((arr_11 [i_1] [i_1] [i_0] [i_0] [i_0]) ? 18 : 51)))))));
                arr_16 [i_0] [i_1] = ((((((((min(-1619415454, 722750786))) || (((var_11 ? 169 : -51))))))) - (var_2 & var_15)));
                arr_17 [i_1] [i_1] [i_1] = (max((((max((arr_5 [i_0] [i_0]), var_13)) & (((min(11400, var_12)))))), (((((((arr_8 [i_0] [4] [i_1]) < var_5))) & ((-(arr_4 [i_0] [i_1] [i_1]))))))));
                arr_18 [i_1] = ((+((((((arr_3 [5] [2]) / 7))) ? var_1 : (-939650532 / var_10)))));
            }
        }
    }
    var_19 ^= (((((((-1619415449 ? 52159 : 732182572)) * ((976900405 ? 71 : 169))))) ? ((-3716948107 ? (var_8 && var_6) : var_13)) : (max((2726479887 || var_6), (~var_13)))));
    var_20 = ((-((((max(var_16, var_1))) ? -var_13 : (((var_6 ? var_16 : var_10)))))));
    #pragma endscop
}
