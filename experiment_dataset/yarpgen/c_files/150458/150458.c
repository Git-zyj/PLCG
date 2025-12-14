/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [1] [i_3] [i_3] [i_4] = ((~(((((2260132903 ? -458324285 : 1))) ? 14521 : ((-3229256974056496427 ? 20 : 57284))))));
                                var_17 = (min(var_17, (((-(max(2754661786455439804, 2047)))))));
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        var_18 *= (min(((((373377020 ? 3553063730 : 10018398085067953904)))), (~23)));
                        var_19 = ((-1 ? 8428345988641597712 : 2047));
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_20 *= ((~(((!(((-2073 ? 1965097165 : 1))))))));
                        arr_23 [i_2] = (min(((1 ? ((8428345988641597711 ? 0 : 10018398085067953904)) : 8428345988641597733)), (~-2048)));
                        var_21 *= (((4467570830351532032 ? 12520 : 6400)));
                    }
                    arr_24 [i_0] [i_1] [8] = (((min(-0, (4130633352 - 39547))) ^ 65522));
                }
            }
        }
    }
    var_22 = (~-8799667443171826976);
    #pragma endscop
}
