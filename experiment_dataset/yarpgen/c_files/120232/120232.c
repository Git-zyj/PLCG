/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, -2842));
    var_14 = (~7);
    var_15 = -28795;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_16 = (((~var_1) ? -21921 : (arr_7 [i_2 + 1] [i_2] [i_2] [i_1])));
                                var_17 |= (max(-28795, ((28794 < (min(var_0, (arr_7 [i_0] [i_2] [i_3] [i_2])))))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = (min((arr_0 [i_4 + 1]), var_5));
                                var_18 = ((((2989 ? ((max(-28797, 4229674235))) : (max(var_9, 62546)))) == (1 < 25368)));
                            }
                        }
                    }
                }
                var_19 = 44;
                arr_18 [i_1] = (max(((31 ? -7958585888983870268 : (max(var_2, 1635436254620493097)))), 65293060));
                var_20 = ((var_3 || ((min((arr_4 [i_0]), (var_5 | 24956))))));
            }
        }
    }
    var_21 = var_6;
    #pragma endscop
}
