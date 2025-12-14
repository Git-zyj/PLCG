/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((min(((var_13 << (11677981454524673989 - 11677981454524673989))), ((4095 ? var_4 : var_6))))) != var_16));

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        var_20 = (max(var_20, (((((((112 && 255) << (2147483647 - 2147483633)))) ^ (arr_0 [i_0 - 2]))))));
        var_21 = (arr_0 [i_0 + 2]);
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 16;i_1 += 1)
    {
        var_22 = var_7;
        var_23 = var_18;
        var_24 = (var_15 == (arr_4 [i_1 + 1]));
        var_25 = var_17;
        arr_5 [i_1] = -1;
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 22;i_4 += 1)
            {
                {
                    arr_14 [i_3] [i_3] = (((((+((((arr_12 [i_3] [i_3] [i_3]) <= (arr_13 [i_2] [20] [10] [20]))))))) ? (((((461752140 ? var_3 : var_1))) ? var_1 : ((var_2 ? (arr_9 [8] [i_2]) : 461752156)))) : ((var_18 | (arr_9 [2] [3])))));
                    var_26 ^= var_13;
                    var_27 = (-2147483633 | 1068683907);
                }
            }
        }
    }
    #pragma endscop
}
