/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((min(((min(7092, 207))), ((((max(var_8, 49))) ? ((min(var_14, var_10))) : var_14)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_21 = (max(var_21, ((min((arr_5 [i_1] [i_2] [i_0]), (~-72))))));
                    var_22 = (((169 == 48) != (arr_3 [i_0])));
                    arr_8 [i_0] [i_1] [i_2] [i_2] = (var_14 / 191);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            {
                var_23 = (((((arr_12 [i_3] [i_3] [i_3]) ? (arr_13 [i_4] [i_3]) : 3367679260972380773)) == ((((var_19 != (arr_10 [i_3])))))));
                var_24 = (arr_9 [i_3]);
            }
        }
    }
    var_25 -= var_16;
    #pragma endscop
}
