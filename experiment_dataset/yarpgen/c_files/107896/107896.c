/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_15 += ((((((var_10 + 2147483647) << (((((arr_3 [i_1 + 1] [i_2]) + 27480)) - 21))))) ? ((((!(arr_3 [i_1 + 2] [i_1]))))) : (min((-9223372036854775807 - 1), 88))));
                    var_16 = ((-((1810028152 % ((min(var_1, 1968760053)))))));
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    var_17 = (min(var_17, ((max((arr_9 [i_1] [i_3] [i_1] [12]), ((((!var_4) <= -var_10))))))));
                    var_18 = (~8388604);
                }
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {

                    for (int i_5 = 1; i_5 < 24;i_5 += 1)
                    {
                        var_19 ^= (min(var_7, var_9));
                        var_20 = ((65527 << (((((var_8 | var_10) + 107)) - 12))));
                    }
                    arr_16 [i_1] [i_1 + 1] [16] [i_4] = 218;
                    arr_17 [i_0] [i_1] = (i_1 % 2 == zero) ? ((((-12 + 2147483647) << (((((arr_14 [i_0] [i_1 + 2] [i_1] [i_4] [i_1]) + 45)) - 16700905138978974902))))) : ((((-12 + 2147483647) << (((((((arr_14 [i_0] [i_1 + 2] [i_1] [i_4] [i_1]) + 45)) - 16700905138978974902)) - 5539512463766876430)))));
                    var_21 = (var_12 / var_1);
                }
                var_22 *= -5774781410719848250;
            }
        }
    }
    var_23 = ((-((((~var_2) == (min(5774781410719848250, var_0)))))));
    var_24 = var_7;
    #pragma endscop
}
