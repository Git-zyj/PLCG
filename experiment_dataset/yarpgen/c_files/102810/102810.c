/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] &= (((min((max(-2407845119472873427, 1040384)), 4064)) / ((((1040384 ? 991789935 : -16751))))));
                var_18 = (max(var_18, 1));
                var_19 = (min(var_19, ((((4857747310144420488 ? 568958793 : (((max(1, 26265))))))))));
                arr_5 [i_0] = (((((max(1, 232)))) ? (max(4065, -121)) : (((1 ? 1 : 41668)))));
            }
        }
    }
    var_20 |= ((((4293926912 ? 56 : 23867))));

    /* vectorizable */
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        arr_9 [i_2] = 181207201;
        arr_10 [i_2] = 149;
        var_21 = 1;
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
    {
        var_22 = 1;
        var_23 = (min(18234431153066244382, (((((39037 ? 100 : -396425093))) ? 4163685266 : (max(137, 3726008496))))));
        arr_15 [2] &= (max(568958793, 79));
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
    {
        var_24 = (max(var_24, ((((((9223372036854775807 ? 115 : 1040376)) & (42658 <= 137)))))));
        var_25 = (max((((860981312 ? (max(1, -616087872)) : ((max(156, 30935)))))), ((1267516792 ? -3527936606218183145 : 152))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 4; i_6 < 9;i_6 += 1)
        {
            var_26 = 87;
            arr_25 [i_5] = 1493526234;
            var_27 -= 1040384;
        }
        arr_26 [i_5] = ((568958793 ? 0 : 18446744073709551615));
    }
    var_28 = (max(905166446, (max(((max(568958788, 42659))), ((87 ? 13677257431541531201 : 65045))))));
    var_29 = var_6;
    #pragma endscop
}
