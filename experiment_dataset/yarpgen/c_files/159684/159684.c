/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((min((9652105441583936079 && var_2), 252)), ((min((var_5 || 83), (var_0 || var_0))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_12 = ((((+(((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : -2811115248639552790)))) > ((((min(9223372036854775807, 24576))) ? (((min(24569, 3)))) : (arr_3 [i_1] [i_0])))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_12 [i_1] [i_1] [i_1] [i_2] = (arr_10 [i_2]);

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            arr_16 [i_2] [i_2] = 252;
                            var_13 = (min(var_13, -51));
                            var_14 = ((-40 ? 2166656897 : 233));
                            arr_17 [i_0] [i_0] [i_2] [i_0] [i_0] = (-7154 ? 9652105441583936071 : 14019);
                            var_15 = (arr_6 [i_1 + 1] [i_1 + 3]);
                        }
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_16 += (((arr_9 [i_0]) ? (((arr_4 [i_0] [i_1 + 2] [i_0]) ? (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]) : -2910652343258972520)) : ((43360 ? -2811115248639552790 : -2811115248639552790))));
                            arr_22 [i_0] [i_1 + 1] [i_1 + 1] [i_2] [i_5] [i_3] = (((arr_3 [i_1 + 1] [i_0]) || (arr_3 [i_5] [i_5])));
                            arr_23 [i_5] [i_3] [i_2] [i_3] [i_2] [i_1] [i_0] = (((16 ? -79 : (arr_11 [i_5] [i_5]))) & 207);
                        }
                        var_17 = (arr_1 [i_0] [i_0]);
                        var_18 ^= ((arr_5 [i_3]) ? (arr_3 [i_1 + 1] [i_1 + 2]) : 2147483647);
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_19 = (max(var_19, (-4 + 18446744073709551603)));
                        var_20 = (arr_7 [i_1] [i_1] [i_1 - 2]);
                        var_21 = (6884647515197758303 >= 3942721121);
                        arr_28 [i_2] = ((((2077790723 ? 7442751223079581771 : -7252764737369752909)) >= ((((arr_15 [i_2]) ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_0]))))));
                        var_22 = (min(var_22, (arr_1 [i_0] [i_1 + 2])));
                    }
                    arr_29 [i_0] [i_0] [i_0] [i_2] = (((arr_13 [i_0] [i_0] [i_2] [i_0] [i_0] [i_2]) ? (arr_13 [i_0] [i_1] [i_1] [i_0] [i_1] [i_2]) : (min(70692177, 16224331177849759909))));
                    var_23 = (((((2077790725 / (arr_15 [i_2])))) * (((((min(214255562, -2470))) ? -40 : (min(137438691328, 2077790704)))))));
                }
            }
        }
    }
    var_24 = (min((((min(var_2, var_5)) % (-1741004846 / 113))), var_5));
    #pragma endscop
}
