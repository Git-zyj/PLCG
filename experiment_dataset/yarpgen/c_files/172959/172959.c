/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0 - 2] [i_0] = ((((((min(1, (arr_1 [i_0] [i_0]))) || ((min(0, (arr_2 [i_0] [7])))))))) - ((-((var_1 ? 3833252865330622092 : 1)))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            arr_9 [i_0] |= 0;
            var_10 = (max(var_10, ((((255 ? 343770039 : 3851783016)) < (arr_0 [i_1 + 2])))));
            var_11 = (!2811);
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_12 [i_0] [i_2] [i_0] = ((((max(121, (arr_2 [i_0] [i_2])))) ? ((((arr_7 [i_0] [i_2] [i_0 + 2]) != var_2))) : (((arr_0 [i_0 - 1]) ? (arr_0 [i_0 + 1]) : var_3))));
            var_12 = (((((((((arr_3 [1]) & var_1))) ? (((var_3 / (arr_11 [i_2] [i_0])))) : (-7477334536515107956 | 1)))) ? (((((var_6 << (((arr_7 [i_0 + 1] [i_0 + 1] [i_2]) + 82))))) ? ((3 ? var_7 : (arr_1 [i_0] [i_2]))) : ((80 ? -1 : (arr_11 [i_2] [i_0]))))) : var_5));
            var_13 = (max(var_13, var_5));
        }
        var_14 = (max(var_14, (max((((arr_5 [i_0 + 2] [i_0 - 2]) >= (arr_5 [i_0 - 2] [i_0 + 1]))), (((arr_10 [i_0]) || 343770024))))));
    }
    var_15 = (max(var_15, ((!((min((~var_3), var_2)))))));
    var_16 = var_1;
    #pragma endscop
}
