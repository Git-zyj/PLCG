/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((5 * 4) != (((67108863 / 250) * -1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_15 &= 804483858103528800;
                    var_16 = 804483858103528811;
                    var_17 = (min(var_17, 17642260215606022822));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            var_18 = 804483858103528800;
                            var_19 = ((5 && ((((804483858103528775 ^ 5) >> (65535 - 65478))))));
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_3] = (-9223372036854775807 - 1);
                        }
                        arr_16 [i_0] [i_1] [7] [i_3] = 9223372036854775799;
                        arr_17 [i_0] [i_3] [i_3] [i_3] = 4379;
                        var_20 = 17642260215606022816;
                        var_21 = ((971842773934670509 / (((((((-64 + 2147483647) << (4101705770 - 4101705770)))) | (224 ^ 193261526))))));
                    }
                }
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    var_22 = (min(var_22, 804483858103528800));
                    var_23 = -1;
                    var_24 = 83;
                }
                arr_20 [i_0] [7] [7] = (((804483858103528799 == 9223372036854775799) | 172));
                var_25 = (((251 ^ 43509) ^ 804483858103528805));
            }
        }
    }
    var_26 -= (((((9223372036854775781 & 14979671599974573628) - 11)) < 9223372036854775807));
    var_27 = 117;
    #pragma endscop
}
