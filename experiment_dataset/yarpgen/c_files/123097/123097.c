/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((var_16 ? ((var_17 ? var_8 : var_14)) : (var_0 & var_11))), (min(var_6, (min(-2255485000614750272, var_12))))));
    var_19 &= (var_13 && var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_20 &= (min(((((arr_7 [12]) ? -38 : (26259 >= 17146314752)))), (((((136365211648 ? 0 : 17952011739215430737))) ? (((max(153, (arr_0 [i_0] [i_0]))))) : ((8188 ? 528195791 : (arr_2 [7] [i_1])))))));
                            var_21 = (arr_1 [i_0]);
                        }
                    }
                }
                var_22 *= ((((min(0, ((7 && (arr_10 [11])))))) >> (((((arr_6 [i_1] [i_1] [i_1]) ? -117 : (27812 << 1))) + 131))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_23 = ((0 ? 3766771504 : 0));
                                var_24 *= (max(-75, (arr_7 [i_6 + 3])));
                                var_25 *= (min(((((((arr_5 [i_5]) | -111))) ? (arr_19 [10] [11] [i_6]) : 10465354653765812742)), ((((((arr_13 [i_0] [7] [i_4]) ^ (arr_0 [i_5] [i_6 + 3]))) ^ ((6041747263776018669 ? (arr_2 [i_0] [i_1]) : -113)))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        {
                            var_26 = ((((((0 * 10465354653765812734) | (-127 - 1)))) ? 0 : 112));
                            var_27 = (arr_11 [i_0] [4] [i_8] [i_0]);
                            var_28 = ((((((17952011739215430749 ? -2 : (arr_6 [i_0] [i_0] [i_8])))) & (((arr_8 [i_8] [7] [i_8]) >> (-2 + 34))))));
                        }
                    }
                }
                var_29 = (((((((-6175247829663215456 ? (arr_3 [i_0] [i_1]) : (arr_18 [1] [i_1] [i_1])))) ? (arr_20 [i_1] [i_1] [i_0] [i_0] [i_0]) : (min((arr_25 [i_0] [i_0]), (arr_24 [8])))))) & (((((arr_17 [i_0] [i_0]) && (arr_12 [i_1] [i_0] [i_0] [i_0]))) ? (((-1726600638 ? (arr_10 [i_0]) : (arr_3 [i_0] [i_1])))) : 494732334494120862)));
            }
        }
    }
    #pragma endscop
}
