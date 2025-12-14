/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_17 = 57344;
        arr_2 [i_0] = (max(var_6, ((-(arr_0 [i_0 - 3])))));
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] &= (min((8192 && var_0), (min(8191, 35912))));
        var_18 = var_15;
        arr_6 [i_1] = ((((min((arr_3 [i_1 - 1]), (arr_1 [i_1 - 1] [i_1 - 1])))) <= 32031));
        arr_7 [i_1] [i_1] = 31582;
        arr_8 [i_1] [i_1] = (min(((51630 ? 36910 : 6519)), 14844));
    }
    for (int i_2 = 3; i_2 < 20;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2 - 2] = var_12;
        var_19 = (max(var_19, 61587));
    }
    var_20 = (max(var_20, ((min(57344, var_5)))));
    #pragma endscop
}
