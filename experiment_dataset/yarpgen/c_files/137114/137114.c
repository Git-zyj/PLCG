/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(((-((max(var_10, var_2))))), var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_12 -= ((min(((~(arr_0 [i_1 + 1] [i_0])), ((~(arr_1 [i_0])))))));
                arr_4 [3] [i_1] [i_1] = (((arr_2 [i_1 - 1] [i_1 - 1]) - var_5));
                arr_5 [i_0] = ((((-(arr_1 [i_1 + 1]))) - ((min((arr_0 [i_1 + 1] [i_1 + 1]), var_6)))));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_12 [i_3] [i_2] [i_1] [i_1] [17] |= 4887156593399070116;
                        var_13 = (max(var_13, ((((((var_0 != (arr_0 [i_1] [i_3]))) ? ((-(arr_9 [i_3] [i_0] [i_0]))) : (((arr_1 [i_3]) ? var_0 : var_6))))))));
                        arr_13 [i_0] [i_2] [i_1] [i_0] = (((((-(1 != 17606546289908559640)))) ? ((((var_9 || var_1) <= (840197783800991994 >= 17606546289908559615)))) : var_2));
                    }
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        var_14 = (max(var_14, (!var_8)));
                        var_15 = (max(var_15, var_10));
                        arr_17 [4] [i_4] [i_2] [i_2] = (min(((1 ? (-2466224063277707604 > 7682) : 1)), ((min(var_2, var_6)))));
                    }
                    arr_18 [i_0] [i_1] [i_1] [i_2] = ((((((((var_4 ? var_8 : var_10))) ? (1 && 1514945430) : (var_4 + var_5)))) ? (max(-var_6, var_6)) : (max(-var_10, ((var_8 ? var_8 : (arr_2 [i_0] [6])))))));
                    var_16 -= ((!(((-var_6 ? var_3 : ((var_4 ? var_7 : var_9)))))));
                }
            }
        }
    }
    #pragma endscop
}
