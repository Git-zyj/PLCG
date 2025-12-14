/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0 + 2] = ((((max(148, (arr_0 [i_0 - 1])))) ? ((((var_12 * 19) == (max((arr_1 [i_0 + 1] [6]), 7898))))) : ((105 ? 59287 : 58491))));
        arr_3 [i_0] = ((~(~var_10)));
        var_14 += (((var_2 * -1584091954) != (arr_0 [i_0])));
        var_15 = ((((!(arr_1 [i_0 + 1] [i_0 - 2]))) ? var_8 : ((((max(137, 3))) ? (arr_0 [i_0]) : ((-(arr_0 [1])))))));
        arr_4 [i_0 - 1] [i_0] = ((((max((arr_1 [i_0] [i_0 + 2]), -35))) ? (((arr_1 [6] [i_0 - 2]) & (arr_1 [i_0] [i_0 + 2]))) : (((arr_1 [i_0] [i_0 - 2]) ? (arr_1 [i_0 + 2] [i_0 - 2]) : (arr_1 [i_0] [i_0 + 1])))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_16 += (arr_7 [i_1] [1]);
            arr_9 [i_1] [i_1] [i_2] = var_0;
        }
        var_17 += (arr_6 [i_1] [1]);
        arr_10 [7] = ((-(max((arr_6 [i_1] [7]), (120 != 1)))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_18 |= (-(min(((max(7196898072255814138, 2147483643))), (min(var_12, 1)))));
        var_19 = (arr_12 [i_3]);
        var_20 += (max((max(var_8, (arr_12 [i_3]))), (arr_12 [i_3])));
    }
    var_21 = var_8;
    var_22 = -5410308498716643546;
    #pragma endscop
}
