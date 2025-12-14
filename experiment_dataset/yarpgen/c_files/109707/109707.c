/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        var_14 = (((((arr_2 [i_0]) || var_8)) ? (((!(arr_1 [i_0] [i_0 - 1])))) : var_11));
        var_15 = (((4161536 || var_0) ? (((~(arr_1 [i_0 - 1] [i_0 - 1])))) : (((max(4063232, var_6)) ^ (var_5 == var_2)))));
        var_16 = (((((0 | ((4063230 ? var_4 : 89))))) ? ((28547 ? 4290904063 : 4294967273)) : (((((arr_0 [i_0 - 2]) != var_1))))));
    }
    for (int i_1 = 4; i_1 < 20;i_1 += 1)
    {
        var_17 = 1;

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_18 = var_4;
            var_19 = (max(var_19, (((255 ? 14 : (((arr_4 [i_1] [i_1 - 2]) ? (max(4294967273, (arr_6 [i_1] [i_1]))) : (((var_9 ? (arr_6 [i_2] [i_1]) : (arr_3 [i_1 - 1] [i_2])))))))))));
            arr_9 [i_1 - 1] [i_1] [i_2] = (((var_8 / -956658398) ? (arr_4 [i_1 - 4] [i_1 - 2]) : var_2));
            var_20 = (((!var_2) ? (((!(arr_8 [i_1] [i_2] [i_1 + 1])))) : 111));
        }
    }
    var_21 = ((1792 ? 14 : 4063230));
    #pragma endscop
}
