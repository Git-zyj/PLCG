/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((((216 ? 128 : var_8))) ? (var_4 & var_3) : (~var_13)))) ? (((~var_7) ? var_12 : ((var_10 ? 13055899692748909136 : var_13)))) : var_11));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_19 += ((((((arr_4 [i_2] [i_1] [i_1]) % var_12))) ? ((((!((min(127, (arr_11 [i_0] [i_1] [i_2] [18])))))))) : (((128 * 123) ? (arr_7 [i_2] [i_1]) : 13055899692748909121))));
                                var_20 = (min(var_20, var_12));
                            }
                        }
                    }
                    var_21 += (arr_6 [i_2] [i_2] [i_2]);
                    arr_12 [i_0] [i_0] [i_2] |= ((((-(arr_11 [i_0] [i_1] [i_2] [i_2]))) >= ((min((arr_11 [i_0] [i_0] [i_2] [i_1]), (arr_11 [i_0] [i_0] [i_2] [i_0]))))));
                }
            }
        }
    }
    #pragma endscop
}
