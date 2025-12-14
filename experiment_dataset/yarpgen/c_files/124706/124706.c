/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -81;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_14 [i_3] [i_1] [i_2] [i_1] = (max(((~(max(-74, (arr_5 [i_1] [1] [i_2]))))), ((max((arr_10 [i_0] [i_0 - 1] [i_0] [i_0]), (arr_11 [i_0]))))));
                            arr_15 [i_0] [i_0 - 2] [i_0 - 2] [i_1] = ((((max((min((arr_12 [i_0] [i_1] [i_1] [i_1] [i_3]), var_1)), var_14))) ? -45 : (min(((~(arr_2 [i_3]))), (-32767 - 1)))));
                            arr_16 [i_0] [i_1] [i_2] = -32745;
                            arr_17 [i_1] [i_1] [i_1] [i_3] = (((arr_0 [i_2]) ? (max((arr_12 [i_3] [i_3 - 1] [i_1] [i_3 + 1] [22]), (min(0, -8309023965148972188)))) : (arr_3 [i_0 + 3])));
                        }
                    }
                }
                arr_18 [i_1] [i_1] [i_1 + 1] = -70;
                arr_19 [i_0] = (min(-16259, -74));
            }
        }
    }
    var_17 = (((var_2 % 69) ? var_1 : 40));
    var_18 = ((var_5 && ((((((~var_14) + 2147483647)) << (((-3728491125432411803 % -36) + 23)))))));
    #pragma endscop
}
