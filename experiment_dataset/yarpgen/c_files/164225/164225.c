/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_8;
    var_20 |= 2258;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_21 = (-2147483647 - 1);
                            arr_10 [i_0] [i_0] [i_1 - 1] [i_2] [i_3] = 7366376769007710615;
                            arr_11 [17] [17] [i_2] [i_3] |= (((((((2076696633 ? var_5 : var_7))) ? 3125 : (min(var_2, var_1)))) * (arr_0 [i_0])));

                            for (int i_4 = 0; i_4 < 18;i_4 += 1)
                            {
                                var_22 = 2076696633;
                                var_23 = (!var_6);
                                var_24 = ((46278 <= (max(619208824, ((619208824 << (((-5245528544923219584 + 5245528544923219595) - 10))))))));
                                var_25 = (((arr_5 [i_2]) > (-2147483647 - 1)));
                            }
                            arr_14 [12] [i_1 + 1] [i_2] [i_3] = ((((((min((arr_7 [i_0] [i_1] [i_2] [i_2]), 1)) * (-7366376769007710616 <= var_7)))) ? (((((var_10 / var_14) != (max(0, 47397)))))) : (max(0, 2076696633))));
                        }
                    }
                }
                var_26 = (((arr_2 [i_1 - 2]) && -1520726094));
                arr_15 [14] [i_0 - 3] [i_0 - 3] = (min(((min(-280814518, -5245528544923219584))), (-0 + var_13)));
            }
        }
    }
    #pragma endscop
}
