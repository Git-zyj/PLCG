/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 8;i_1 += 1) /* same iter space */
        {
            var_17 = var_13;
            var_18 = ((-((-(~var_0)))));
        }
        for (int i_2 = 1; i_2 < 8;i_2 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 9;i_5 += 1)
                    {
                        {
                            var_19 = 65532;
                            var_20 = 5;
                        }
                    }
                }
            }
            var_21 = (max(var_21, ((min(8684, (~1560397432))))));
            var_22 += ((-8687 ? -20468 : ((var_15 - (arr_17 [i_0] [i_0] [i_0] [i_2 - 1])))));
        }
        for (int i_6 = 1; i_6 < 8;i_6 += 1) /* same iter space */
        {
            var_23 = (min(var_23, (((~(6694 != 9223372036854775807))))));
            var_24 = var_15;
        }
        var_25 = (((((((0 ? var_3 : var_1))) ? (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]) : var_5))) ? var_14 : (var_0 + var_5));

        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            var_26 = ((8684 ? (min(4294967295, -1)) : 1));
            var_27 = (var_0 - 9);
        }
    }
    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        var_28 += var_3;
        var_29 = ((((((arr_26 [i_8]) >= (arr_26 [i_8])))) & (arr_23 [i_8] [i_8])));
    }
    var_30 = var_6;
    var_31 = (max(var_31, (((-(-122813331 + var_4))))));
    var_32 = -217133263;
    #pragma endscop
}
