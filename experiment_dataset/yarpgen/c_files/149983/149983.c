/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    var_11 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_12 = ((-(18446744073709551615 - 1)));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 = (min(var_13, (((((1 ? (~1) : 48)) ^ (((((8364762851439579650 ? (arr_8 [i_0] [i_1] [i_2 + 1] [i_2]) : var_2))) ? var_5 : (-30164 ^ 235))))))));
                                var_14 |= ((var_7 ? (min((max(119, 4168467255486399273)), (arr_7 [i_0]))) : 1));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_15 = ((((-1227647559 ? (8364762851439579650 || -8364762851439579650) : ((-6392890858768045298 ? 23576 : 18446744073709551615)))) != (((max(var_4, var_5))))));
                            var_16 = (min(var_16, ((min((max(((148 ? var_4 : (arr_1 [i_5]))), -23590)), (arr_15 [i_0] [i_1] [i_1] [i_6]))))));
                            var_17 = ((!(((var_1 ? (!17171480576) : -8364762851439579638)))));
                            var_18 = (arr_10 [8] [i_1] [i_5] [i_5] [i_6]);
                        }
                    }
                }
                var_19 = (((190 - 88) + (((arr_1 [i_1]) ? -1 : (arr_3 [i_1] [i_0])))));
            }
        }
    }
    #pragma endscop
}
