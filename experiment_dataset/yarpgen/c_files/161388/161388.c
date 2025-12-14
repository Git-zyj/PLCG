/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_10 = min(((~((~(arr_0 [i_0] [i_0]))))), (((136902082560 * (((min(92, 0))))))));
        var_11 = (min(var_11, ((min((arr_1 [22] [22]), (var_4 % var_1))))));
        arr_2 [i_0] [12] &= (((((max(var_0, var_9)))) ? (((38212 ? 1 : -119))) : (((min(var_9, (arr_0 [i_0 + 1] [2]))) << (min(1, 1584092460))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_12 = 3029484468;
        var_13 = (min(-1, ((-(arr_0 [i_1] [i_1])))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        var_14 = (arr_8 [i_2]);
        var_15 = (arr_0 [i_2] [i_2]);
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        var_16 = (arr_0 [i_3] [i_3]);
        arr_12 [i_3] = (max(((-(arr_0 [i_3] [i_3 - 1]))), (var_0 || var_8)));
        var_17 = (min(((((-1370616272662039646 || var_0) ? var_0 : -var_4))), -var_5));
        var_18 = (min(855023764, (arr_11 [i_3])));
    }
    var_19 ^= var_1;
    #pragma endscop
}
