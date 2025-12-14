/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(134215680, -1002290003));
    var_20 = (max(var_20, (((~(((((var_5 ? var_9 : 1))) ? (!1364062770705071282) : ((((-127 - 1) == 235))))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_9 [8] [i_1] [i_2] = -var_3;
                    var_21 = ((-10 ? (!var_2) : (~-1)));
                }
            }
        }
        var_22 += 1877047613;
        var_23 = (!804344949);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    var_24 = (min(var_24, 24003));
                    var_25 *= ((~((51186 ? 1 : 56))));
                    var_26 = ((var_6 ? 40408 : (arr_2 [i_0] [i_3])));
                    var_27 = (arr_0 [i_0]);
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        arr_16 [i_5] [9] = (((((arr_14 [i_5 - 1] [i_5 - 1]) && (var_12 <= 16889))) ? ((14174123149122947424 ? -18612 : (0 & var_2))) : (((arr_15 [i_5 - 1] [i_5 + 1]) ? (arr_15 [i_5 + 1] [i_5 - 1]) : (arr_15 [i_5 + 1] [i_5 - 1])))));
        var_28 = ((~(((arr_14 [i_5 - 1] [i_5 - 1]) ? (arr_14 [i_5 - 1] [17]) : (arr_15 [i_5 - 1] [i_5])))));
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    {
                        arr_24 [i_5] [i_6] [i_6] [i_6] = 9223372036854775807;
                        var_29 = (((-2147483647 - 1) ? 1080863910568919040 : (min(var_1, (min((arr_14 [i_6] [10]), var_0))))));
                    }
                }
            }
        }
    }
    var_30 = 33554176;
    #pragma endscop
}
