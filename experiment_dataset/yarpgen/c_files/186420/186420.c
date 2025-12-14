/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += 0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (((arr_4 [i_0] [i_1]) ? 0 : (arr_3 [i_1])));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_19 = 26;

                        for (int i_4 = 4; i_4 < 20;i_4 += 1)
                        {
                            var_20 -= var_9;
                            arr_11 [i_4] [i_3] [i_2] [i_3] [i_0] = (!18446744073709551615);
                            var_21 = ((((max((arr_10 [i_4] [i_4] [i_3] [i_4 + 1] [i_4 - 2] [i_4 + 2]), 1))) ? (!118) : (min((arr_5 [i_4 + 1] [i_4 - 3] [i_4 - 1] [i_4 + 3]), (arr_7 [i_4 + 3] [i_4 + 2] [i_4 + 3] [i_4 - 1])))));
                            arr_12 [i_3] [i_3] = (((1 ? -114 : 26)));
                        }
                        var_22 -= (~((1 ? -115 : -12936)));
                    }
                }
            }
        }
    }
    var_23 *= ((((((-118 ? 5596407328951929797 : -12936)))) && var_7));
    var_24 -= ((((-var_5 ? var_6 : ((var_8 ? var_10 : var_8)))) >= var_5));
    #pragma endscop
}
