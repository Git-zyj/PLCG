/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = (min(var_13, ((((((arr_3 [i_1]) ? 0 : var_4)) >> (((~-12081003679722093283) - 12081003679722093252)))))));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_8 [i_0] [2] [i_0] [17] = (min(((((arr_4 [8] [i_2] [21]) == (arr_4 [19] [i_0] [i_0])))), (min(0, (-2147483647 - 1)))));
                    var_14 = (((~(arr_6 [i_0] [i_1] [i_1] [i_2]))));
                    var_15 -= ((-(max((~132), ((min(var_5, (arr_3 [i_0]))))))));
                }
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    var_16 = ((~(arr_5 [i_3] [i_1] [i_0])));
                    var_17 = (min(var_17, ((((-(arr_9 [i_0] [i_0] [i_0])))))));
                    var_18 = (max(var_18, (((-var_6 ? (((((arr_7 [i_0] [i_0] [i_3]) == (arr_7 [i_3] [8] [8]))))) : ((var_1 ? -1233306911 : (39775 + var_2))))))));
                    var_19 = 202739262;
                }
                var_20 = var_2;
            }
        }
    }
    var_21 = (min(((var_8 ? (~var_3) : (max(var_1, var_12)))), var_11));
    #pragma endscop
}
