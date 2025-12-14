/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((min(1, (min(12, 18446744073709551614)))))));
    var_12 = ((max(var_6, var_7)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0] [13] [20] = (min(((((arr_2 [i_0] [i_1] [i_0]) ? (arr_2 [i_0] [i_1] [i_0]) : (arr_2 [i_1] [21] [i_1])))), var_3));
                var_13 = (min(var_13, (((((((((var_1 ? var_8 : 18446744073709551614))) ? (max(var_0, (arr_0 [6]))) : (arr_1 [22])))) ? (((73819527299139126 ? ((~(arr_3 [6] [6]))) : (arr_2 [14] [23] [23])))) : (((max(var_8, 18446744073709551601)) ^ var_9)))))));
            }
        }
    }
    var_14 = (var_0 || var_10);
    #pragma endscop
}
