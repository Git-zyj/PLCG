/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((1386234574 ? var_7 : var_17))) ? var_6 : var_6));
    var_19 = 3532940744;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = (var_9 * 0);
                var_21 ^= (((((-29904 ? 768 : var_7))) ? ((2045871985 ? 3843140540 : -30923)) : ((((arr_0 [9] [i_0 - 1]) >> (-3648986401854919696 + 3648986401854919710))))));
                var_22 = (min(var_22, ((((min((((arr_4 [i_0]) * var_12)), -3648986401854919697)) != (!var_6))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                var_23 = (+(min(((((arr_1 [i_2 - 1]) > 120))), (4826772060880533888 - 0))));
                var_24 = 29897;
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_25 = (~1800011148888980800);
                            var_26 = (var_13 * 178330706);
                            arr_14 [i_5] [i_5] [i_2] = var_12;
                            var_27 = (min(var_27, ((min(((+(((arr_8 [i_4 + 1]) ? 9552 : (arr_7 [i_2]))))), 0)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
