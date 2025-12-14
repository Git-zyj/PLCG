/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~var_6);
    var_12 = ((((((255 ? var_0 : 0)) * (576458553280167936 && var_9))) < var_2));
    var_13 = (min((~var_10), 250));
    var_14 -= var_9;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = min((((!((min((arr_4 [i_0] [i_1 - 2]), 18446744073709551615)))))), var_0);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_16 = (arr_6 [i_2] [i_3]);
                            var_17 = (min(var_17, ((max((((max((arr_5 [i_3] [i_1] [i_2]), -1355)) / (arr_10 [i_1]))), ((((((!(arr_9 [i_0] [i_2] [i_3])))) >= (arr_12 [i_0] [4] [i_2] [i_3])))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
