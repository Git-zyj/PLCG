/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = var_2;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_14 = (min(var_14, (~24633)));
            var_15 = (min(2012284769469946825, -9079665924188490069));
            arr_5 [i_0] [i_1] = 18446744073709551604;
        }
    }
    var_16 = ((((-((16434459304239604766 ? 1968217886 : 251))))) ? 2326749409 : (min(229, (min(16434459304239604791, var_0)))));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                arr_10 [i_3] [i_2] = -229;
                var_17 = ((~((+(((arr_8 [i_2 - 2] [i_3]) >> (var_5 - 60203)))))));
                arr_11 [i_3] |= -14014206449708116257;
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            arr_18 [i_5] [i_5] = 56;
                            var_18 &= ((var_2 ? (arr_9 [i_2] [i_2 + 3]) : ((-(((!(arr_15 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_4] [i_4 - 2] [i_5]))))))));
                            arr_19 [i_5] [i_3] = (arr_17 [i_2] [i_2 + 1] [i_3] [i_2] [i_5] [i_5]);
                            arr_20 [i_2] [i_2 + 1] [i_3] [i_4] [i_5] [i_5] = (((arr_6 [i_2 + 1]) ? ((205 << (((((arr_7 [i_3]) / 241)) - 20741362224899762)))) : (!240)));
                        }
                    }
                }
                arr_21 [i_3] |= (min((((arr_14 [i_2 - 2] [i_2 + 3] [i_2 - 2]) ? (arr_16 [0] [i_2 + 2] [i_2 - 1] [i_2] [i_2 + 2] [0]) : 16434459304239604791)), ((min((arr_14 [i_2 - 2] [i_3] [i_3]), (arr_6 [i_2 - 2]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            {
                var_19 |= (arr_22 [0]);
                var_20 = (min(var_20, var_12));
            }
        }
    }
    #pragma endscop
}
