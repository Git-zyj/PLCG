/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_9 > 7);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    arr_6 [i_0 - 1] [i_1] [1] [i_1] = (((min(var_10, (arr_5 [i_1])))) ? (((1 != (((-127 - 1) ? (arr_2 [i_2] [7]) : var_1))))) : (((arr_3 [i_1]) ? ((-103 ? 0 : 0)) : (arr_5 [i_1]))));
                    arr_7 [i_1] [i_1] [12] = (((~32759) > (((((511 ? 115 : -18))) ? 25059 : (arr_0 [i_2] [i_2 + 3])))));
                    var_13 = (max(var_13, ((((arr_1 [i_0 - 1]) | (((((255 ? -16 : 0))) | ((-9 ? 143 : var_4)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_14 = (max(var_14, (((!(arr_3 [22]))))));
                                arr_14 [0] [i_0 - 1] [20] [20] [i_3] [i_4] [0] |= -9;
                                var_15 = ((9 > ((6 ? 1924044066 : 288230358971842560))));
                                var_16 = (min((arr_0 [i_4 + 2] [i_4 + 2]), ((1 ? -23585 : 11))));
                            }
                        }
                    }
                    var_17 = ((((((var_1 > 0) ? -1 : ((((arr_5 [i_1]) || -23566)))))) > (((arr_8 [i_2 + 3] [i_0 + 1] [i_2 + 3] [i_1 - 1] [i_0 + 1]) ? (~0) : (((~(-127 - 1))))))));
                }
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    arr_17 [i_1] [i_1] = 0;
                    var_18 = ((((((arr_1 [i_0]) > var_2)) ? 7 : (arr_16 [i_0 - 1] [i_1 + 1] [i_1 - 1]))));
                }
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        {
                            arr_23 [i_1] [i_6] [i_1] = (18446744073709551613 | 32765);
                            var_19 = ((((8148066900523437543 >> (-1 + 13))) << (((~-8694) - 8688))));
                        }
                    }
                }
                var_20 = (((~1) || ((min(((-32752 ? -6 : (arr_18 [i_1] [i_1]))), ((max((arr_8 [20] [20] [i_1] [i_1 - 1] [1]), (arr_1 [13])))))))));
            }
        }
    }
    var_21 = (!-536870912);
    #pragma endscop
}
