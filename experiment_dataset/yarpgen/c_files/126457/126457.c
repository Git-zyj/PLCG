/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_9 % -var_10);
    var_18 = (var_4 != -9223372036854775798);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = (((((arr_1 [i_0] [i_1]) ? ((var_4 ? (arr_3 [7] [9] [i_0]) : var_12)) : (((var_2 ? (arr_0 [i_0]) : (arr_1 [i_0] [i_1])))))) <= (((((var_15 ? var_8 : (arr_0 [i_1]))))))));
                arr_4 [10] [i_1] [10] = ((((max(6743355659252278478, ((32742 ? 10512801164273832699 : 30106))))) ? ((((((arr_3 [12] [9] [9]) & 9223372036854775791))) ^ (arr_3 [9] [i_0] [i_1]))) : ((((arr_2 [i_1]) ^ ((~(arr_3 [i_0] [15] [i_1]))))))));
            }
        }
    }
    var_20 = var_2;
    var_21 = (var_3 != var_2);
    #pragma endscop
}
