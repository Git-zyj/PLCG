/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((~((var_14 ? 3519866355581200814 : 77))))) ? ((((-8940368435092852334 ? var_15 : var_8)) / var_2)) : (~var_1)));
    var_20 = min(((min((!var_1), var_18))), (-14347 + var_9));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_21 = (((arr_1 [i_0]) ? ((-14343 ? (arr_1 [i_0]) : -85)) : var_12));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 17;i_3 += 1)
                {
                    {
                        var_22 = (~-27566);
                        var_23 = ((+((((arr_2 [i_2] [12]) < (arr_7 [17] [i_1]))))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] [i_4] = (min(14347, (min(-87, (14347 + 1)))));
        arr_15 [i_4] [i_4] = (min(((((!var_2) / (((arr_6 [i_4] [i_4] [i_4]) % (arr_4 [i_4] [i_4])))))), -6974160979803110919));
        arr_16 [i_4] = 14330;
        var_24 = ((!(((arr_6 [i_4] [i_4] [i_4]) && (((~(arr_9 [i_4]))))))));
    }
    var_25 = ((var_18 & ((var_0 + (((79 ? var_16 : var_4)))))));
    #pragma endscop
}
