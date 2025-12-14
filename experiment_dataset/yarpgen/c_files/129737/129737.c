/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((!((max((max(10166388425406189890, 151)), -1)))));
    var_19 = (((((~((var_16 << (var_9 - 5362292501805864851)))))) > (((((var_14 ? var_11 : var_15))) * (var_13 / var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = var_11;
                var_21 = (((31578 || -1758944193) ? (max(((min((arr_2 [i_0] [i_0 - 1]), (arr_0 [i_0])))), (arr_4 [i_1 - 3] [i_0]))) : ((((!119) ? var_2 : (!153))))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        arr_7 [i_2] = ((((min((arr_6 [i_2] [i_2]), (~var_7)))) || ((((arr_6 [i_2] [i_2 - 1]) / (arr_6 [i_2] [i_2 - 1]))))));
        arr_8 [i_2] [i_2] = (max(0, -28575));
        var_22 = (!-3);
    }
    #pragma endscop
}
