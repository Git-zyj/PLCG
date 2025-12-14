/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_18 *= (((((var_14 + 27530) + (arr_5 [i_0] [i_1 + 2] [4] [i_2]))) | ((15694 ? -27592 : -15021))));
                    var_19 = ((!(((((((arr_0 [i_1 - 3] [i_1 - 3]) + -27592))) ? 3764 : var_11)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 7;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            {
                var_20 |= ((!((min(32767, 3764)))));
                var_21 -= ((-(var_11 == -1337)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            {
                var_22 = ((!(~var_9)));
                var_23 = ((((min(25832, 7624))) ? ((var_7 ? (arr_9 [i_5]) : ((max(-6056, var_9))))) : ((((max(var_4, (arr_3 [i_5])))) ? (15682 > -30995) : var_6))));
            }
        }
    }
    var_24 = ((((((-16113 ? -15021 : var_6)))) & ((max(-15265, 8047)))));
    var_25 = ((-(((8047 > -5349) / var_7))));
    #pragma endscop
}
