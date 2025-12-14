/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (((var_0 ? ((var_15 + ((max(var_7, 1101594127))))) : (var_14 + var_0))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_19 = ((((((max(var_8, 1698488215))) ? ((1975063184 ? 1073740800 : 3398633694)) : 3398633694)) >> (-1 + 11)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_20 = -1698488211;
                        var_21 ^= (max((((3413391583 ? 66060288 : 97))), ((((arr_4 [1] [i_0] [i_2]) ? -65 : -1698488192)))));
                        var_22 ^= ((252 == (((~var_5) ? -9355 : (((arr_11 [i_0]) ? 101 : 2047))))));
                        arr_13 [i_3] [i_1] [i_1] [i_3] = var_8;
                        arr_14 [i_0] [13] [i_0] [i_0] [i_1] = (((arr_3 [10]) < (min(((min((arr_8 [i_2 - 1] [i_2 - 1]), var_11))), var_4))));
                    }
                }
            }
        }
        arr_15 [i_0] [i_0] = (max((((arr_7 [i_0] [i_0]) ? (arr_7 [i_0] [i_0]) : (arr_7 [i_0] [i_0]))), (((arr_7 [i_0] [i_0]) ? (arr_7 [i_0] [i_0]) : (arr_7 [i_0] [i_0])))));
        var_23 = (max(((((arr_11 [i_0]) ? 252 : (arr_11 [i_0])))), var_4));
    }
    var_24 = (~((max(1778514135, var_6))));
    var_25 = ((((((var_12 ? 314354740 : -1842001465))) ? 66 : var_12)));
    #pragma endscop
}
