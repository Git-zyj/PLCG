/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0 + 1] [i_0 + 1] = (-32767 - 1);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
        {
            arr_8 [i_1] [7] [9] = 288089638663356416;
            arr_9 [i_0] [i_1] = ((!(((1901707362 ? 1901707362 : (arr_5 [i_1] [i_1] [i_1]))))));
            arr_10 [i_1] [i_1] = (((arr_1 [12] [i_1]) ? ((((!(arr_0 [i_0 + 1]))))) : 1901707341));
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_3 = 4; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        {
                            arr_20 [1] [3] [i_3] [i_4] [i_4] = ((-(((-240174185 && 27483) + (max((arr_1 [0] [i_0]), 1901707350))))));
                            var_11 -= 1251835569297263515;
                            arr_21 [i_0] [8] [i_4] = 1443820924;
                            arr_22 [i_4] [i_2] [i_2] [i_4 + 1] = (arr_1 [i_0] [16]);
                        }
                    }
                }
            }
            var_12 = (max(2393259933, ((((((arr_6 [1]) || -27484)) ? (min((arr_18 [i_2] [2] [2] [i_0]), (arr_0 [i_0]))) : (arr_2 [i_0 + 2]))))));
            var_13 = (max(var_13, (min((((arr_2 [i_0 + 1]) ? (arr_0 [1]) : 4095)), (!0)))));
            var_14 = var_5;
        }
        var_15 = ((((max((arr_0 [5]), (arr_0 [i_0])))) && (((((2058888502 ? (arr_6 [4]) : (arr_14 [i_0] [i_0 - 1] [i_0]))) & (((arr_7 [i_0] [i_0] [i_0]) ? (arr_15 [i_0]) : -10)))))));
    }
    var_16 = (((~var_9) ? (((((min(-27483, 27454))) ? (~1443769066) : 1901707357))) : (((~var_5) ? var_10 : ((var_10 ? 18184 : var_7))))));
    #pragma endscop
}
