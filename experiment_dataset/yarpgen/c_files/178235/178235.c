/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((var_5 ? (var_6 && -9223372036854775795) : var_4)));
    var_11 &= 9025982549601024997;
    var_12 -= (max(((var_7 ? ((min(var_9, var_4))) : (min(18446744073709551611, var_8)))), -1));
    var_13 = ((((((17215049359583116902 | var_3) ? (var_6 | var_1) : ((var_7 ? var_9 : var_6))))) ? -9 : var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_14 -= ((((((var_1 >> (var_1 - 131509915)))) ? 4078 : ((-(arr_0 [i_0] [i_0]))))));
                arr_6 [i_0] [i_0] [i_0] = (min(140, 3357682067));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, (arr_8 [i_2] [i_1 - 2] [i_2] [i_3 - 3])));
                                var_16 = ((((arr_12 [i_0] [i_0]) && (var_8 <= 12050557141480856282))));
                                var_17 += (-((((!var_7) && (-1 == var_8)))));
                                arr_14 [i_0] = (((((((arr_13 [i_0]) ^ var_0))) ? (var_8 > 0) : (arr_13 [i_0]))));
                            }
                        }
                    }
                }
                var_18 *= (-50 ? 0 : 3391935646);
                var_19 = (((((min(var_8, 1)))) ? ((-((var_7 ? (arr_5 [i_0]) : var_6)))) : ((1 ? 152 : -62))));
            }
        }
    }
    #pragma endscop
}
