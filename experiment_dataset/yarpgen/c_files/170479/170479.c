/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (-117 && 27470);
    var_19 += var_2;

    for (int i_0 = 2; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_20 = (min(var_20, (((!((max((43 * 28779), ((min(28791, var_12)))))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    var_21 = 28779;
                    var_22 = (min(((min(28779, ((1 ? (-2147483647 - 1) : 117))))), ((min(119, 9223372036854775807)))));
                    var_23 = (-117 * 0);
                }
            }
        }
        var_24 *= (max(var_0, (((42 ? (min(var_5, 31697)) : (var_7 > 36757))))));
        arr_9 [i_0] = (max((min(((min(1, 32963))), (var_1 - var_15))), (min((-7652450224760564438 ^ var_0), (-4477044992319203422 || 4477044992319203421)))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_15 [i_3] = ((max(var_16, 167)));
                    var_25 = (((min(0, -7652450224760564430)) - var_8));
                    arr_16 [i_0] [i_3] [i_4] [i_3] = ((((min(1459872386, var_5)) < (((33423360 ? -25267 : 167))))));
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < 17;i_5 += 1) /* same iter space */
    {
        var_26 ^= 32989;
        var_27 = ((max(var_10, 1459872388)));
        var_28 = (min(var_28, ((((25266 ^ -17) ? (!var_8) : (min(((var_5 ? 76 : var_4)), ((38745 ? -36 : var_1)))))))));
        var_29 = (max(var_29, ((min(-100, 0)))));
    }
    #pragma endscop
}
