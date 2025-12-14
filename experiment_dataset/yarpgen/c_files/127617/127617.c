/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((-((max((1 > 9223372036854775807), (!var_3)))))))));
    var_12 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_13 = ((9223372036854775800 ? 2147483627 : 1526840876));
                            arr_9 [i_1] = (arr_2 [i_0]);
                        }
                    }
                }
                arr_10 [i_1] [i_0] [19] = ((((((~var_9) != (min((arr_6 [i_0] [i_0] [i_1 + 3]), var_8))))) << (((-919813570 != (-2147483647 - 1))))));
                var_14 = ((-(((var_3 > (arr_5 [i_0] [i_1]))))));
                var_15 -= var_3;
                var_16 = ((arr_1 [i_0] [i_0]) << ((((((~(((arr_5 [i_1] [i_1]) + (arr_7 [i_0] [i_1] [i_0] [i_0]))))) + 17)) - 13)));
            }
        }
    }
    var_17 = var_3;
    var_18 -= var_4;
    #pragma endscop
}
