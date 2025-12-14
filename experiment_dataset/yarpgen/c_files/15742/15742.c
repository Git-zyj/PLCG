/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_19 ^= ((((min(-16658, ((var_14 ? 23950 : 0))))) ? (!var_7) : (var_15 / 7)));
                var_20 = (min(var_20, (((((!(0 / 4294967285))) ? (min(((4127403194773030590 ? (arr_4 [8] [i_1] [i_1 - 1]) : var_11)), (arr_2 [i_0] [i_1 - 2]))) : (((4127403194773030590 ? 1973029631 : (34993 ^ -1973029625)))))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_21 = ((((((arr_7 [2] [i_2]) % (arr_7 [i_2] [i_2])))) ? (~15920) : (min((min(0, 2305843009213693888)), (arr_7 [21] [i_2])))));
        arr_9 [i_2] [i_2] = (((((min(var_8, var_6)) ? var_4 : var_0))));
    }
    var_22 = var_15;
    var_23 = ((!((!(~var_6)))));
    #pragma endscop
}
