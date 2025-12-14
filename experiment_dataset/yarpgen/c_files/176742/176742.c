/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_11 [i_1 - 1] [i_3] [i_2] [i_2] = (((((arr_5 [i_0]) ^ ((((arr_4 [i_0]) > var_9))))) >= ((((!var_11) || ((max(var_6, var_4))))))));
                        arr_12 [i_0] [i_1] [i_2] [i_3] = (~-136);
                        arr_13 [i_2] [i_2] [i_2] = (13455631334807293346 * 1534957193);
                        var_20 = ((var_14 ^ ((var_13 / (((2147483647 ? var_18 : var_5)))))));
                        arr_14 [i_0 + 1] [i_2] [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((((min(2147483647, -417288004))) ? (min((var_17 | var_6), ((min(1, var_5))))) : (((arr_6 [i_1] [i_1 + 1] [i_2 - 1]) / 1186893390))));
                    }
                }
            }
        }
        var_21 = ((((79 || (arr_7 [i_0] [i_0])))));
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_22 = (((arr_0 [i_4]) % (arr_0 [i_4])));
        var_23 = (min(var_23, (((((((arr_5 [i_4]) ? var_11 : ((((arr_7 [i_4] [i_4]) ? 0 : (arr_7 [i_4] [i_4]))))))) ? ((((max(var_11, (arr_2 [i_4])))) ? ((var_15 ? var_14 : 246)) : -var_9)) : (~var_17))))));
        var_24 &= (min((!-var_7), ((-var_17 | (!var_5)))));
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 18;i_5 += 1)
    {
        arr_21 [i_5] = 2145386496;
        var_25 = var_3;
        var_26 *= (!var_10);

        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            arr_25 [i_5] [i_5] |= (arr_23 [i_6] [i_5 + 3]);
            var_27 *= ((!(!var_8)));
            arr_26 [i_5 - 1] [i_6] = (((arr_22 [i_6] [i_6]) < (-2147483647 - 1)));
        }
        var_28 = (max(var_28, ((((255 - var_15) ? ((((var_17 || (arr_19 [i_5]))))) : (arr_23 [i_5 + 3] [i_5 + 1]))))));
    }
    var_29 ^= var_19;
    #pragma endscop
}
