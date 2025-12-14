/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = (((((((var_4 ? var_11 : (arr_3 [i_0]))) & (!186)))) ? (((min(var_9, (arr_2 [i_1 - 2] [i_1 + 1]))))) : 440642597));
                arr_4 [i_0] [i_1 + 1] [i_0] = ((max((((arr_1 [i_0]) ^ -18)), 200)));
                var_14 = (((4 & (8149496261553128646 <= 484531173))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_11 [i_3] [i_1] [i_1] [i_3] = (((((~(!10858)))) ? (~-1688576248) : ((~(arr_10 [i_0] [i_0] [i_1] [i_2] [i_3])))));
                            var_15 = (max((((var_12 ^ var_8) ? (~186) : ((~(arr_9 [13] [i_3] [i_3] [i_0]))))), (((((min((arr_1 [i_0]), var_4)))) + (arr_9 [i_1 - 2] [i_3] [i_1 + 3] [i_1 - 1])))));
                            var_16 = (-1509648833 ? (((((-350236586 ? 1 : (arr_2 [i_0] [i_0])))) ? ((350236576 << (var_2 - 76))) : (arr_0 [i_0]))) : 6);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 12;i_5 += 1)
        {
            {
                var_17 = (min(((var_3 ? 8862298559246683939 : 1865172882219561428)), 35004));

                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        arr_21 [i_4] [i_4] [i_4] [i_5] = (((arr_13 [i_4 + 2]) ? (arr_13 [i_7]) : var_1));
                        var_18 = (((((var_6 ? var_10 : 32767))) ? ((108 ? var_6 : (arr_17 [i_4 + 2] [i_4 + 2] [i_5]))) : 35004));
                    }
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        var_19 += var_3;
                        arr_25 [i_5] [i_6] [i_5 - 2] [i_5] = var_7;
                    }
                    var_20 = ((172 ? 25443 : 3675723152));
                }
            }
        }
    }
    var_21 = ((((((var_9 >> (var_11 + 487057215)))) ? ((min(var_10, var_0))) : (~var_3))));
    #pragma endscop
}
