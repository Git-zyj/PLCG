/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = ((3817665710 ? (((((2999884615 ? var_10 : 2876515258))) ? (max(4294967295, 3213431872)) : ((var_12 ? 4 : 1418452052)))) : 2688762170));
                    var_17 = (max(3213431872, 1418452038));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1] [i_1] [i_3] [i_0] = ((((-(arr_5 [i_3] [i_3 + 2] [i_3] [i_1])))) ? (!-31883) : (max(-32532, (arr_6 [i_1] [i_3 + 4] [i_3 + 2] [i_1]))));
                                var_18 = (min(var_18, (max(57344, ((-(min(var_12, (arr_4 [i_4])))))))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {

        for (int i_6 = 1; i_6 < 12;i_6 += 1)
        {
            var_19 = min(((-(min(2700515424, 4077664104)))), var_11);
            var_20 = (max(var_20, (arr_10 [i_6] [i_6] [i_6] [i_5])));
        }
        var_21 = (62159 ? -32532 : 1418452037);
        var_22 = (max((min((arr_10 [i_5] [i_5] [i_5] [i_5]), var_14)), (((536739840 ? 0 : (arr_10 [i_5] [i_5] [i_5] [i_5]))))));
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                {
                    var_23 = var_1;
                    var_24 = (((max((arr_17 [i_8] [i_7] [3]), ((var_0 ? var_7 : 57344))))) ? (min(var_14, -2876515259)) : (max(((7168 ? (arr_0 [i_8] [i_7]) : (arr_9 [i_7 + 2] [i_5]))), 2876515236)));
                    var_25 &= ((3655769235 <= (!-2318821090)));
                    arr_24 [i_7] [i_7 - 1] [i_7] = (2319004087 ? ((3647663482 ? 3576904120 : -12124)) : (min(4020294722, (arr_22 [i_7] [i_7]))));

                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        var_26 = (((((((((arr_23 [i_5] [i_7] [i_7]) ? (arr_18 [7]) : var_1))) ^ (max(1081535423, 3618689570))))) ? (((~var_11) + (max(0, 3678735563)))) : (arr_1 [i_7])));
                        var_27 -= var_6;
                        arr_27 [i_9] [i_7] [i_7] [2] = ((((min(3007616300, 9758))) ? ((((var_7 <= 384) <= 1032898910))) : ((((((max(-20997, -31353)))) > (min(var_11, 2591108412)))))));
                    }
                    /* vectorizable */
                    for (int i_10 = 3; i_10 < 10;i_10 += 1)
                    {
                        var_28 = (((arr_23 [11] [i_7 + 1] [i_7]) ? (((-24490 ? var_11 : 43))) : ((-(arr_2 [i_7])))));
                        var_29 = 1032898904;
                        var_30 = 1436;
                        var_31 = 18230;
                    }
                }
            }
        }
    }
    var_32 &= max(((((min(2304989648, 1578895437))) ? ((var_15 ? -10047 : 1594451871)) : var_2)), (max(((3262068398 ? 13052 : 3576904120)), (min(644173795, 3650793506)))));
    #pragma endscop
}
