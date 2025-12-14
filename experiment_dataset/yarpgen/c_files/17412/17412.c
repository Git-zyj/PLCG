/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 26927;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 = (((((max(var_14, (arr_0 [i_0] [i_0]))))) ? (arr_0 [i_0] [i_0]) : (min((~var_1), (arr_0 [i_0] [i_0])))));
        var_19 = (max(var_19, ((((((!(arr_1 [i_0] [i_0])))) * (!26927))))));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        arr_5 [0] = (min((!var_0), 26927));
        var_20 += (max(((-var_6 ? (((var_15 + 2147483647) >> (38609 - 38585))) : (arr_4 [i_1 - 1]))), var_8));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_21 = (min(var_21, ((min((((arr_2 [i_3]) & (arr_2 [i_3]))), ((~(arr_2 [i_2]))))))));
                arr_11 [i_2] [0] [i_2] &= ((((((!32767) ? (((var_13 ? var_2 : 38609))) : (arr_6 [i_2] [6])))) && (((-((~(arr_7 [i_2]))))))));
                var_22 += min((~var_8), var_10);
            }
        }
    }
    var_23 = (max((((var_0 + var_0) - 288230376151711744)), 38609));
    #pragma endscop
}
