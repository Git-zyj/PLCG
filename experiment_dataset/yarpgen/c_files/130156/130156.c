/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (0 <= -84);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (((((max(0, 102))) ? (max(16035178568080836510, 16035178568080836510)) : (49793 || 83))))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_21 &= var_4;
                                var_22 = (((0 ? 65535 : (max((arr_5 [i_0]), 83)))));
                                var_23 = (min(var_23, ((((~2971624889) % (((arr_10 [i_0] [i_4 - 1]) << (((arr_10 [i_0] [i_4 + 1]) - 9127651773114059193)))))))));
                                var_24 += (min(1, 84));
                                var_25 = (min(var_25, ((min(((-(arr_3 [i_2 - 3] [i_2 - 2] [i_4 - 1]))), ((((min(var_5, 27299))) * ((var_12 ? 111 : (arr_9 [i_0] [i_0]))))))))));
                            }
                        }
                    }
                }
                arr_14 [i_1] = (max(24992, 2134891592));
            }
        }
    }
    var_26 = (min(var_26, (!var_15)));
    #pragma endscop
}
