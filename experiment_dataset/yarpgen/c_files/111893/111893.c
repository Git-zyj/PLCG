/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= (!-35);
    var_15 += (((((83 ? 45 : var_13))) && 32763));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (var_7 > 40)));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_17 &= (~187);
                                var_18 = (+(((arr_6 [i_1 - 1] [i_3] [i_3 - 2]) ? 1 : (arr_7 [i_1 - 2] [i_3] [i_2 - 2] [i_4] [i_4] [i_4]))));
                                var_19 = (((arr_3 [i_1 + 1] [i_1 + 1] [i_2 - 2]) ? (((arr_3 [i_0] [i_1 - 1] [i_1]) ? (~-40) : (1 & var_2))) : ((((!(~var_5)))))));
                                var_20 = (((1 - 94) / (((arr_8 [9] [i_2 - 2] [i_4] [i_3]) ? (arr_8 [5] [i_2 + 1] [i_4] [i_3]) : (arr_8 [i_0] [i_2 + 1] [i_2 + 1] [i_3])))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        {
                            var_21 -= ((~(((-25660 || 0) - 12825912696523620212))));
                            var_22 *= ((!(!4017409448724938877)));
                        }
                    }
                }
                var_23 = var_0;
            }
        }
    }
    #pragma endscop
}
