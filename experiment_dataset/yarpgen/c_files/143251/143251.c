/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_11 |= (2364849855 | 27);
        var_12 ^= (((-2147483647 - 1) & ((~(arr_1 [i_0 + 4])))));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_13 = ((0 ? -10 : (-127 - 1)));
        var_14 = (arr_2 [20] [20]);
        var_15 = (((((((min(4194303, 2))) ? (arr_3 [i_1] [9]) : (arr_2 [17] [14])))) && (arr_2 [i_1] [i_1 + 1])));
        var_16 = (min((12873140294308391377 - 854220605), (arr_0 [i_1])));
    }
    var_17 = var_5;
    #pragma endscop
}
