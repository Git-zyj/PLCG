/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (min(var_10, ((((max(var_9, var_1))) ? -11615 : 107))));
                arr_6 [i_0] = ((!(((((((arr_4 [i_0]) / 236771758))) ? (7693 | 41) : (1 >= 55))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_13 = (arr_2 [i_2]);
                            var_14 = ((0 ? (arr_10 [i_3] [i_2 - 2] [i_2] [i_0]) : (2485289662677434360 | 31619)));
                        }
                    }
                }
                var_15 = 24;
            }
        }
    }
    var_16 = 753014460;
    var_17 = (((~55) % var_9));
    var_18 = (!var_3);
    var_19 = (max(((min(3459899626, 2271572225))), 1));
    #pragma endscop
}
