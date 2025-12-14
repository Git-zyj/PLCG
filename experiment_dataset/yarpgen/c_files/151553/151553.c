/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (-32760 ^ 1);
    var_14 = ((~((var_12 ? (min(var_5, var_4)) : (((1 ? 1 : var_11)))))));
    var_15 = (-1 ? (~-6294157291732208883) : ((-(max(var_6, var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_16 &= -19355;
                            var_17 = (max(var_17, (~var_2)));
                        }
                    }
                }
                var_18 = (max(((min(1, (arr_0 [i_1 + 1] [1])))), -19347));
                arr_11 [13] [5] = ((-((((arr_7 [i_1 - 2] [i_0] [i_0]) && (arr_7 [i_1 + 2] [i_0] [10]))))));
            }
        }
    }
    #pragma endscop
}
