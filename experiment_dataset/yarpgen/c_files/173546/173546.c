/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= (((var_5 / var_9) - ((((!((min(193, var_8)))))))));
    var_11 = var_3;
    var_12 = ((var_8 ? 1 : (((max(-6445425071902329199, var_8)) + ((~(-9223372036854775807 - 1)))))));
    var_13 = (var_1 ? var_7 : (((((62 ? -8 : 193))) ? var_0 : var_8)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] [i_1] = ((max(((var_5 ? var_0 : 13542882954155859821), ((max(61, (arr_2 [i_0]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_14 = var_4;
                                var_15 &= 101;
                                arr_14 [i_0] [i_1] [i_2 + 1] [15] [i_1] = (!6291456);
                                var_16 = (((1608290606297196983 ? 0 : (6348296585535348496 * 12070248078204402447))));
                            }
                        }
                    }
                    var_17 = var_3;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_1] = (((((-6291472 || (arr_15 [i_1] [i_2] [18] [i_1]))) || (arr_16 [i_0] [i_0] [i_0] [i_2] [i_1] [i_6]))));
                                var_18 = (((((((arr_0 [i_6] [i_0]) || (arr_9 [i_1] [i_1] [i_1] [i_1]))) ? (arr_10 [i_6] [i_5] [i_2 + 1] [i_1] [i_0]) : (((arr_12 [5] [5] [i_1] [i_2 - 1] [i_1] [i_6]) << 0)))) * (((!(arr_16 [i_0] [i_0] [i_0] [8] [i_1] [i_0]))))));
                            }
                        }
                    }
                    var_19 = (((((+(((arr_1 [i_0] [i_1]) ? (arr_10 [i_1] [3] [i_2] [i_2] [i_1]) : -127))))) ? 422545137117859896 : 9655999283211719148));
                }
            }
        }
    }
    #pragma endscop
}
