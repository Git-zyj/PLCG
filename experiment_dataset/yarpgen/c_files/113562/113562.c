/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (((~(max(var_14, var_10)))))));
    var_19 = (min((min(var_4, 10118002838100159963)), (((((max(35662, var_0))) ? -65535 : var_2)))));
    var_20 = (max(var_20, ((((((202 & var_9) << (((var_4 * var_4) - 12994089116515460064)))) * (!var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((!((var_3 != (arr_2 [i_0] [i_1])))));
                arr_7 [i_1] [i_0] [i_1] = ((!((((arr_5 [i_0 - 1] [i_1]) * (arr_1 [7]))))));
                var_21 = max((((!((min(-158010818, var_14)))))), (arr_0 [i_1 - 2]));
                arr_8 [i_1] [i_1 - 2] = (((max((arr_4 [i_1 - 1] [i_0 - 1]), (max((arr_0 [i_1 - 2]), var_6)))) * var_8));
                arr_9 [i_1] [i_1 - 1] [i_1 + 1] = (min(var_8, (max((((arr_3 [i_1]) ? 58 : (arr_2 [6] [i_1]))), (var_7 > var_3)))));
            }
        }
    }
    #pragma endscop
}
