/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_3 != ((min(var_14, var_4)))));
    var_18 = var_2;

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_2 [21] = ((8441662040790045682 / ((((arr_0 [i_0]) >> 0)))));
        var_19 ^= (min(((~(var_14 || var_13))), ((((((arr_0 [8]) ? var_5 : var_11))) ? (arr_1 [8]) : var_16))));
        var_20 = (min(var_20, (((1 ? ((((arr_1 [i_0]) * var_0))) : (max((var_3 && 136902082560), (arr_0 [i_0]))))))));
        arr_3 [i_0] [i_0] = ((((arr_1 [i_0]) / (arr_1 [i_0]))) >> (((((((var_6 ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (((arr_0 [0]) + -1170891412)) : (((arr_0 [i_0]) ? (arr_1 [19]) : 199)))) + 1060041120)));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] &= (arr_1 [i_1]);
        var_21 *= ((-((var_10 ? ((((arr_1 [17]) | var_4))) : var_12))));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = (((((var_14 + 2147483647) << ((((74 ? (arr_0 [i_2]) : (arr_1 [19]))) - 110850320)))) / var_3));
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 22;i_4 += 1)
            {
                {
                    var_22 = (min(var_22, ((-(arr_8 [i_3] [i_4 + 3])))));
                    arr_16 [i_3] [i_3] [i_2] [12] = ((!((!(arr_0 [i_2])))));
                    var_23 = (max(var_23, var_3));
                    var_24 = (((arr_10 [1]) ? (((((var_9 >> (((arr_12 [i_2]) - 3910697578))))) ? 1 : var_16)) : ((((arr_11 [i_2] [i_3 - 3]) ? 1170891412 : (((5 > (arr_8 [19] [3])))))))));
                    var_25 -= (((((((arr_10 [i_3]) * 0)))) ? (!var_0) : var_7));
                }
            }
        }
        var_26 = 1;
        var_27 = -var_7;
    }
    var_28 = 1170891398;
    #pragma endscop
}
