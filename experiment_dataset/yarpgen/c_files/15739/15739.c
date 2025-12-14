/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_4 ? var_4 : var_18));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_20 += 1;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 14;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            arr_14 [i_0] = ((!(((65535 ? ((954408223 ? (arr_6 [i_0]) : 17553604847758202473)) : var_3)))));
                            arr_15 [i_4] [i_3] [i_3] [i_2] [i_2] [i_1] [i_0] = (((-893139225951349149 ? var_10 : 893139225951349143)));
                        }
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_21 = ((((min((~1), ((17553604847758202473 ? 65535 : 2656586146))))) ? (min(((65513 ? var_13 : var_18)), 65529)) : (~var_13)));
                            var_22 = (max(var_22, (~17553604847758202473)));
                            var_23 *= ((!((((((arr_5 [i_5] [i_5]) && 2654868100)) ? ((((arr_18 [i_5] [i_3] [i_3] [i_2] [i_1] [i_0]) - var_8))) : 11385139458821648614)))));
                            var_24 = 8;
                            var_25 = (min(var_25, var_13));
                        }
                        var_26 = (min(var_26, (((arr_3 [i_0 - 1] [i_0 - 1]) / -954408219))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
