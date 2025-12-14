/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_19 = (min(var_19, (((var_13 ? (1048448 | var_6) : -1048449)))));
                    var_20 *= var_12;
                    var_21 &= (!var_9);

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            var_22 = (min(var_22, var_17));
                            arr_15 [i_0] [i_1] [i_2] [i_3] [1] [i_0] = 17496;
                            var_23 &= var_14;
                        }
                        var_24 &= var_4;
                    }
                }
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    var_25 = (min(var_13, 184));
                    var_26 = ((3712 ? var_8 : 71));

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_27 = var_17;
                        var_28 = (max(var_28, var_17));
                        var_29 += (((var_10 ? var_10 : var_7)));
                        arr_22 [i_0] |= (((120 || var_4) == var_13));
                    }
                }
                arr_23 [i_0] &= (min(var_1, ((~(~14)))));
                var_30 = ((!(!var_13)));
            }
        }
    }
    var_31 = var_12;
    var_32 = (min(((((max(var_1, 32640))) ? ((18446744073709551610 ? 3 : 45)) : -1440025249)), ((((var_8 < var_6) == (max(19767, var_8)))))));
    var_33 = (max(var_33, var_14));
    #pragma endscop
}
