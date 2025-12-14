/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;
    var_21 = ((var_17 >= (((~(~var_6))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_22 = var_6;

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_4 [i_0] [i_0] = -var_18;
            var_23 = (min((max(var_18, var_10)), var_2));
            var_24 = (!var_17);
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_25 = var_8;
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_26 = (max(-var_0, var_3));
                            arr_16 [i_0] = var_3;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
