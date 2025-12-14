/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -6932254898779435865;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    var_16 += ((-5462191018430137276 ? (!6652288779339834451) : (((!var_11) >> ((((~(arr_2 [2]))) + 682750921))))));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        arr_11 [i_0] [i_2] [4] |= var_1;
                        var_17 += var_0;
                    }
                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {

                        for (int i_5 = 1; i_5 < 20;i_5 += 1)
                        {
                            var_18 = (max(var_18, ((((arr_2 [4]) - ((max(4087121341740204728, 13274340823459832919))))))));
                            var_19 += (+-10789506661226154640);
                        }
                        var_20 = (min(var_20, (((((max((arr_6 [20]), 5462191018430137275))) ? ((var_2 ? (var_4 * var_7) : (var_1 ^ 26138))) : (86 * var_11))))));
                    }
                    var_21 = (((((-(14557 || 2016394753)))) ? 4087121341740204728 : ((((!(((14359622731969346887 ? (arr_3 [16]) : var_12)))))))));
                }
            }
        }
    }
    var_22 = (max(((max((~var_3), var_12))), var_4));
    #pragma endscop
}
