/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [9] [6] [i_2] = ((~(((((var_15 ? var_16 : var_1)) > (((646167905098537736 ? -646167905098537736 : 15))))))));

                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        arr_13 [i_0] [i_0] [0] [1] [3] &= ((((arr_12 [i_1 + 1] [i_1 + 1]) || var_14)) ? 12177448154565497497 : ((1 ? var_5 : 517989947481935279)));
                        var_17 ^= (((((7395955224102577773 ? -9 : -646167905098537711))) ? ((((((var_10 ? var_11 : 448))) ? (min(-6946, (arr_6 [0] [10]))) : ((8368012261552537414 ? -1445150463674647576 : -12410))))) : (59798 + var_1)));
                        var_18 |= (((min((12419 != 11050788849606973842), 9223372036854775805)) == 0));
                    }
                    arr_14 [0] [i_1] [i_2] &= (((((~(507904 & -8309223262070174424)))) ? (((arr_0 [i_0 - 1]) * 0)) : (((((arr_1 [i_2]) / var_16)) << (3251717873 - 3251717821)))));
                    var_19 &= (((((((1560780001 ? 0 : var_10))) >= (((arr_11 [i_0]) | var_3)))) ? var_8 : var_7));
                }
            }
        }
    }
    var_20 = (((var_16 <= 148) <= (((((12043 ? var_9 : -8368012261552537432))) ? (((var_1 ? var_12 : 3251717892))) : var_3))));
    #pragma endscop
}
