/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_9 >= (max(((7491086878622186964 ? var_5 : 198)), (!var_13))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                var_17 = ((!((min((arr_0 [i_0]), ((-(arr_0 [i_0]))))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_1] [24] [i_3] [i_3] = ((((min(var_10, 1)) << (var_2 - 7962290669616110259))));
                                var_18 = (min((arr_5 [i_2] [i_1 - 1] [i_2]), (arr_9 [i_0] [i_0] [i_3] [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 += (!var_4);
    #pragma endscop
}
