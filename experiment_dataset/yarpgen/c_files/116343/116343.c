/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_17 = (min(var_17, 18014123631575040));
        arr_2 [i_0] = var_13;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_7 [i_1] [i_2] [i_2] = ((188 ? 619992739 : 175));
            var_18 = (~852646788);

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_19 = var_10;
                arr_10 [0] [0] [i_3] &= ((1589483863 ? ((min(var_0, var_7))) : (3674974549 & var_2)));
                arr_11 [i_1] [i_2] [i_1] = ((var_12 ? (arr_5 [i_1] [i_2] [i_1]) : (max((arr_9 [i_1] [i_1] [13] [i_1]), (arr_8 [i_3] [i_2] [i_1])))));
            }
            var_20 = ((-(arr_6 [i_2] [i_2] [i_2])));
        }
        var_21 = (((~3396319518) ? (min((arr_3 [i_1]), (arr_3 [i_1]))) : ((((arr_6 [i_1] [i_1] [i_1]) ? 15 : ((244 ? 244 : (arr_8 [19] [6] [14]))))))));
        var_22 = (min(var_22, ((((!(arr_3 [i_1]))) ? (arr_3 [i_1]) : var_7))));
        arr_12 [i_1] [i_1] = (arr_6 [i_1] [i_1] [i_1]);
    }
    var_23 = (max(var_23, var_4));
    var_24 &= ((-((var_11 ? var_15 : 619992740))));
    var_25 ^= var_13;
    #pragma endscop
}
