/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-(min((var_12 * var_5), (var_6 % var_12)))));
    var_19 = ((((min((~var_17), ((var_8 ? var_8 : 3072))))) ? (~var_3) : (15589 | 1045106302577806422)));
    var_20 &= var_1;

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_21 = (((((~(var_14 & var_14)))) ? (((arr_1 [i_0]) & (arr_0 [i_0] [i_0]))) : (((((var_0 << (15589 - 15582))) ^ (~-3072))))));
        arr_2 [i_0] [21] = ((255 ? (((((((26786 != (arr_1 [13])))) <= (((!(arr_1 [i_0])))))))) : (min((arr_0 [i_0] [i_0]), ((var_15 ? 18871 : (arr_1 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    var_22 = ((102 >= (((arr_6 [3] [i_2] [i_1]) << (var_15 + 783718508)))));
                    arr_11 [i_3] = 1045106302577806422;
                    var_23 = (((((-3072 ? (((arr_1 [19]) ? 26786 : var_4)) : var_16))) / (min(((~(arr_9 [i_3]))), (((var_6 << (((-26377 + 26404) - 24)))))))));
                    var_24 = (min(-17401637771131745193, 85));
                }
            }
        }
        var_25 &= var_13;
        var_26 *= (((((((((min(-3052, var_13))) + 2147483647)) << (((min((arr_1 [i_1]), var_14)) - 145))))) ? var_13 : ((((arr_0 [8] [i_1]) ? (arr_8 [i_1]) : var_4)))));
        var_27 = (max(var_27, (((((max(var_9, (arr_3 [i_1])))) ? (((38749 * var_13) * (min((arr_1 [i_1]), var_5)))) : (((arr_10 [i_1]) ? ((15589 ? (arr_5 [15]) : 3115530688)) : var_10)))))));
    }
    var_28 = (((var_7 / var_10) ? ((((!var_6) << (var_9 / var_3)))) : (min((((3075 ? 38734 : 4294967295))), (~var_11)))));
    #pragma endscop
}
