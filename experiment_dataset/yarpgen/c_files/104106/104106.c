/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 43575;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [0] [i_0] = (((((var_14 ? (43574 >> 24) : var_2))) <= (max(((43571 ? var_11 : 3189319512)), -var_6))));
        arr_3 [i_0] = (min((!var_19), -94));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_21 = ((!(((-85 ? 1648459989 : var_11)))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 8;i_3 += 1)
                {
                    {
                        var_22 &= ((!(!256)));
                        arr_12 [i_0] = var_18;
                        arr_13 [9] [i_0] = ((-23 ? var_12 : (!var_7)));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_4 = 3; i_4 < 11;i_4 += 1)
        {
            arr_17 [i_0] [i_0] = ((85 >> (!9223372036854775807)));
            arr_18 [i_0] [i_0] = ((!4294967295) ? 3189319512 : (126 * var_4));
        }
    }
    #pragma endscop
}
