/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_16 |= ((((((var_6 & var_15) ? var_14 : (arr_9 [i_0] [i_1] [i_0] [i_3] [i_4 + 1] [i_4] [i_4])))) || (arr_5 [i_0] [i_0] [i_0] [i_0])));
                                var_17 = (max((((~var_15) ? 0 : (arr_7 [i_1]))), (((!((min(-8951104769144036861, (arr_4 [i_0] [i_0] [i_2])))))))));
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_1] [i_4] = (((arr_7 [i_1]) ? (((!(9765 && 0)))) : (!18446744073709551615)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_18 = (min(-71, (arr_4 [i_0 - 4] [i_0 - 3] [i_0 - 3])));
                            var_19 = ((((min((arr_18 [i_0 - 4] [i_1] [i_0 - 4]), 18446744073709551615))) ? (((~var_12) | (((~(arr_16 [i_0] [i_1] [i_5] [i_6])))))) : ((~(~18446744073709551608)))));
                        }
                    }
                }
                arr_19 [i_1] [9] = (1032179608992732872 / 32752);
                var_20 = (min(var_20, ((((((~(arr_1 [i_0 - 4])))) >= ((6361 ? (((9 << (var_15 + 6440044856915085022)))) : (arr_9 [i_0 - 1] [i_0] [i_0 - 2] [i_0 + 1] [i_0 - 2] [i_1] [i_1]))))))));
            }
        }
    }
    var_21 = var_11;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            {
                var_22 = (min(var_22, ((((max((arr_26 [i_7] [i_7] [i_7]), -3461254853204578603))) ? (min((min(5481424525821091297, 1)), ((((arr_20 [i_7]) >= var_11))))) : (min(var_6, var_0))))));
                arr_27 [i_8] = (min((((-(((arr_26 [i_8] [i_7] [i_7]) ? 12838 : (arr_24 [i_7] [i_7])))))), var_7));
                var_23 -= (((((arr_22 [i_7]) ? 2586 : 17191662940610740148)) < -var_12));
                var_24 = (max(var_24, (((17191662940610740148 ? 59189 : 6452346443229330361)))));
                var_25 = var_14;
            }
        }
    }
    var_26 |= var_1;
    #pragma endscop
}
