/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_18 |= -6674369761045606058;
                                var_19 += (((arr_5 [i_0]) < (((((1 ? 6674369761045606063 : 1))) ? -6674369761045606058 : (19299 >= 1)))));
                                var_20 = (min(var_20, ((min((((((max(46237, 1))) >= (((!(arr_7 [i_3] [6] [i_0]))))))), (max((var_15 >= 9051), (min(16713084694336313255, 94)))))))));
                                var_21 = (min(var_21, (((((19299 ? 84 : (max(9047, -6674369761045606057)))) | (95 ^ var_6))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_22 = (min((arr_16 [i_1] [12] [12] [i_6]), (((((((arr_8 [i_0] [i_1] [i_0] [i_1 - 1] [i_5]) >= 16713084694336313257)))) * (max(-95, 1733659379373238360))))));
                                var_23 = (max(19299, (min((min(-6674369761045606050, 9074)), var_13))));
                                var_24 |= 9043;
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = var_14;
    #pragma endscop
}
