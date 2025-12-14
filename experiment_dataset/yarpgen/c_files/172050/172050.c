/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += (var_15 >> (((~308914036) - 3986053236)));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (arr_1 [i_0]);
        arr_5 [1] = (((var_13 - var_0) ? var_3 : ((~(arr_1 [i_0])))));

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            var_18 = ((!(arr_2 [i_0] [i_1])));
            arr_8 [i_0] [i_1] = ((+-308914051) < var_12);
        }
        for (int i_2 = 3; i_2 < 17;i_2 += 1)
        {
            var_19 = var_4;
            arr_11 [i_2] [i_2] = (((((arr_9 [i_2] [i_2]) - (arr_9 [i_0] [i_2])))) ? ((189 ? 1385079207918028237 : ((((arr_10 [i_0] [i_2] [i_2 + 2]) - 1))))) : (((((var_15 ? var_1 : var_6)) >> (((arr_0 [i_0]) ? (arr_1 [i_0]) : var_4))))));
            arr_12 [i_2] [i_2] = (((arr_3 [i_0] [i_0]) != (arr_9 [i_2 - 2] [i_2])));
        }
        var_20 &= ((~((((arr_7 [i_0] [i_0] [i_0]) || (arr_10 [i_0] [i_0] [i_0]))))));
        arr_13 [i_0] = var_3;
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_21 = var_5;
        var_22 = (!599091196);
    }
    #pragma endscop
}
