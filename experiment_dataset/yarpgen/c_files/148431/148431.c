/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_2] [i_2] [i_2] = (arr_3 [i_0] [i_0] [i_0]);

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            var_19 += ((((16 ? (!33) : (((var_7 <= (arr_1 [i_3])))))) < -627));
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_2] [i_3] = ((((-var_12 ? ((((arr_0 [i_0]) + 205))) : var_9)) / (((((var_16 ? 43 : 124))) - -7875574842139686931))));
                            arr_16 [i_4] [i_2] [i_2] [i_2] [i_1] [i_2] [i_0] = -28;
                            var_20 = ((~((71 ? 3798660314728689016 : 38423))));
                            arr_17 [i_4] [i_4] [i_2] [i_2] [i_1] [i_0] = var_16;
                        }
                        var_21 &= ((((max(6, 127))) || (!1)));
                    }
                    var_22 = -121;
                }
            }
        }
    }
    var_23 = (max(var_23, (((((((((var_9 ? 6400125536131832005 : 65526))) ? (11880374375425119777 - 63) : var_9))) ? ((max(var_14, (min(-31165, var_0))))) : ((min(124, (min(var_0, var_4))))))))));
    var_24 -= ((((max((4294967295 >= 1), var_9))) % 8746201480653873612));
    #pragma endscop
}
