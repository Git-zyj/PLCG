/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((var_18 ? var_3 : var_0)) + 7936)) | var_17));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 -= ((-var_13 + (arr_2 [i_0] [i_0])));
        var_21 *= (min((((arr_2 [i_0] [i_0]) ? (((arr_1 [i_0] [i_0]) ^ 89)) : ((max(-29, var_15))))), (arr_1 [i_0] [i_0])));
        arr_3 [4] = (!var_7);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 10;i_2 += 1)
        {
            var_22 = (-8 ? ((var_2 ? (arr_4 [i_1] [i_1]) : (((arr_1 [19] [19]) ? var_10 : var_11)))) : ((((((((arr_5 [i_1]) ? -18061 : 4294967292))) != ((var_11 - (arr_7 [i_1] [i_1] [i_2 - 2]))))))));
            var_23 = var_11;
            arr_8 [i_2] [i_1] [i_1] = (((arr_0 [i_1]) & ((-14 ? 1048575 : 13327983079725968043))));
            arr_9 [i_1] [i_1] [i_1] = ((((((arr_2 [i_2 - 1] [i_2 - 2]) ? (arr_2 [i_2 - 1] [i_2 + 1]) : (arr_2 [i_2 - 2] [i_2 - 3])))) ? (((arr_2 [i_2 + 1] [i_2 - 3]) + var_18)) : ((max((arr_2 [i_2 - 3] [i_2 + 1]), (arr_2 [i_2 - 2] [i_2 + 1]))))));
        }
        arr_10 [i_1] = (arr_5 [i_1]);
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_24 = (min((arr_1 [i_3] [i_3]), (((arr_1 [i_3] [i_3]) | (arr_1 [i_3] [i_3])))));
        arr_14 [i_3] = (min((((var_12 && ((((arr_0 [i_3]) ? (arr_1 [i_3] [i_3]) : var_15)))))), (((arr_12 [i_3]) | var_11))));
        var_25 = (max(var_25, var_15));
        arr_15 [i_3] = ((((min(var_8, (arr_1 [i_3] [i_3])))) <= (arr_1 [i_3] [i_3])));
    }
    var_26 = (min(var_11, ((min(((max(var_3, var_10))), (min(-568810947, var_14)))))));
    var_27 = var_3;
    #pragma endscop
}
