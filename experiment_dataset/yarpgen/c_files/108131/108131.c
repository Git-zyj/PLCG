/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] = var_3;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_17 = (~48);
                        arr_13 [i_0] = 303;
                    }
                    var_18 = (((((var_1 ? ((var_8 ? 2785414981 : var_1)) : 1))) ? ((((min(1, 0))) ? -21798 : ((max(101, -304))))) : ((~(arr_10 [i_0] [i_1 + 2] [i_1] [i_2 - 1])))));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            {
                                var_19 = ((((((((6970 ? (arr_3 [i_0]) : 1))) ? (arr_7 [i_0] [i_0] [i_0]) : (((!(arr_14 [i_0] [i_0] [i_2] [22]))))))) ? (((((var_10 ? var_4 : (arr_5 [i_0] [i_0])))) ? ((var_2 ? 117440512 : 17135535702471828594)) : (!3798497511))) : (((((min((arr_15 [i_0] [i_1 + 2] [i_1] [i_1]), 0))) ? (~var_7) : (arr_6 [i_0]))))));
                                arr_18 [i_5] [i_0] [i_0] [i_0] [i_0] = (((arr_3 [i_0]) - ((-(arr_3 [i_0])))));
                                var_20 = (!24);
                                var_21 = (((((arr_2 [i_0] [i_5]) ? 1 : 1)) * (arr_6 [i_5])));
                                var_22 = (((!0) ? (arr_3 [i_0]) : (max((~1), (~18446744073709551615)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
