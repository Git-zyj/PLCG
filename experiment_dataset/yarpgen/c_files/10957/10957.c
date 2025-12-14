/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((var_2 - (((((min(89, 210))) != var_7))))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_16 = ((min(13, (((1 ? 19345 : var_5))))));
                                var_17 = ((((max(2055343491, (arr_6 [i_0] [1] [i_0 - 1])))) + 13));
                                var_18 -= (max((24950 / -1), (((max(-1525, (arr_4 [10] [i_1] [i_1] [i_4])))))));
                                var_19 = ((!((!(arr_2 [i_1])))));
                            }
                        }
                    }
                    var_20 &= (!-91562370518674247);
                }
            }
        }
    }
    var_21 = var_9;
    #pragma endscop
}
