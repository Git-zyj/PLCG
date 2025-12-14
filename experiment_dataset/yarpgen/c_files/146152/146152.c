/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_13 *= (((arr_0 [i_4 + 4] [i_4 + 3]) | ((var_7 ? (max((arr_5 [i_0]), var_0)) : var_4))));
                                var_14 = ((-(min(((3111447379004382156 ? 2105991165364420118 : var_11)), var_10))));
                            }
                        }
                    }
                    var_15 -= (min((((var_3 ^ 2105991165364420118) ? 16340752908345131508 : (((arr_8 [i_0] [i_0] [14] [i_0] [12] [i_0]) >> (var_0 + 5669354934387725689))))), (2105991165364420089 + 0)));
                }
            }
        }
    }
    var_16 &= (((max(((min(1118768262, var_2))), var_5)) == -2105991165364420116));
    #pragma endscop
}
