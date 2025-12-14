/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= ((min(var_0, (((var_3 ? var_1 : var_0))))));
    var_13 = (max(var_13, var_3));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((+(((var_10 <= var_6) ? ((((arr_1 [i_0]) <= 0))) : (~1)))));
                var_14 = (arr_1 [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_15 |= ((-(arr_0 [4])));
                            var_16 = ((((-(arr_1 [i_0 + 1]))) / (min((arr_1 [i_3]), var_9))));
                            arr_13 [4] [4] [i_2] |= var_5;
                            var_17 = ((-(~var_0)));
                        }
                    }
                }
                var_18 = 3221225472;
            }
        }
    }
    var_19 *= ((((~(72057044282114048 == var_9))) / ((((min(var_11, -86))) ? (var_2 << var_4) : var_2))));
    #pragma endscop
}
