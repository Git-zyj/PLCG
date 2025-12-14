/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_4 >> (var_10 - 2744020977));
    var_14 = ((!var_10) ? ((0 ? var_10 : (var_12 == var_2))) : (((((!var_2) || (~var_6))))));
    var_15 = max(var_9, var_7);

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_16 = (min(1203960994, ((~(arr_0 [i_0 - 2])))));
        var_17 = (((arr_1 [i_0 + 2] [i_0 + 1]) <= (min((arr_1 [i_0 + 2] [i_0 + 2]), (arr_1 [i_0 - 1] [i_0 + 1])))));
        arr_2 [i_0] = var_4;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (max(var_4, (max(var_4, var_3))));
        arr_6 [17] = (((arr_4 [i_1] [i_1]) || (arr_4 [i_1] [i_1])));
        var_18 = ((!(arr_1 [i_1] [5])));
        arr_7 [i_1] = var_7;
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_19 = var_11;
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 19;i_4 += 1)
            {
                {
                    var_20 |= min(((0 + (arr_13 [9] [2]))), ((((var_4 ? var_6 : var_11)) * (var_3 - 1192845495))));
                    var_21 = ((-(!var_5)));
                    arr_18 [i_4] [i_3 - 2] [i_2] [i_2] &= (max((arr_14 [i_3 + 1] [i_3 - 2] [i_4 - 1] [i_4 - 1]), (((arr_16 [i_4]) & 8191))));
                }
            }
        }
        arr_19 [i_2] |= (((max(((var_10 ? var_9 : var_3)), -0)) == ((((var_9 >= (~2096128)))))));
    }
    var_22 = (var_5 + var_0);
    #pragma endscop
}
