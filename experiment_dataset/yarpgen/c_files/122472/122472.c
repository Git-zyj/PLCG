/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((~var_12) ? ((var_7 >> (var_1 - 1986563870))) : (((-30 + 2147483647) >> (4294967295 - 4294967265))))) >> (var_19 - 16131)));
    var_21 ^= ((((((2 >> (var_17 - 27118)))) ? ((var_15 >> (var_18 + 103))) : (!0))) >> (var_19 - 16121));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_22 = var_9;
                                var_23 -= ((((~(arr_2 [i_2 - 1]))) >> (((((arr_2 [i_2 + 1]) ? var_11 : (arr_2 [i_2 + 1]))) - 6378902559676897731))));
                                var_24 *= (((((min(((max((arr_3 [i_0] [i_2]), (arr_3 [i_0] [i_3])))), (arr_7 [i_2 - 1]))) + 9223372036854775807)) >> ((((-3492919856165504972 ? var_15 : (arr_9 [4] [i_3] [i_0] [i_1] [i_0]))) - 45347))));
                                var_25 = (max(var_25, ((((((!(arr_9 [i_0] [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1])))) >> (((10882 ^ var_9) - 28379)))))));
                            }
                        }
                    }
                    var_26 = (((((arr_6 [i_0] [i_1] [i_2 - 1]) ? var_7 : ((((var_14 + 2147483647) >> (((arr_9 [i_0] [i_0] [i_0] [i_1] [10]) - 12244148217468754213))))))) >> (((!(-2147483647 - 1))))));
                    var_27 = var_2;
                    var_28 ^= ((arr_5 [i_0] [i_1]) & (((arr_9 [i_2 + 1] [i_2 + 1] [i_2] [i_2] [i_2 - 1]) ? (arr_9 [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2]) : (arr_9 [i_2 + 1] [i_2 + 1] [i_2] [i_2] [6]))));
                }
            }
        }
    }
    #pragma endscop
}
