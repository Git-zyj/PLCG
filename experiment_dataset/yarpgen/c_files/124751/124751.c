/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_16 = 21994;
                                var_17 = max(0, (((9199861417584380388 ? var_1 : -21994))));
                            }
                        }
                    }
                    var_18 += (min((((arr_7 [i_0] [i_0] [i_0] [i_0]) ? 2368109575919897530 : var_11)), ((max((arr_5 [i_0] [i_0] [i_0]), (1 || var_3))))));
                    arr_13 [i_0] [i_1] [i_2] [i_2] = ((16078634497789654085 >> (21993 - 21982)));
                    var_19 = 18446744073709551615;
                }
            }
        }
    }
    var_20 = (((((((min(61294, var_13))) ? (max(0, -127)) : ((2429748689 ? var_11 : var_4))))) ? var_15 : ((((((var_7 ? -10 : 18446744073709551615)) != -20000))))));
    #pragma endscop
}
