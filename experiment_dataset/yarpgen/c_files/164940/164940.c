/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_12 = ((var_9 ? (((arr_1 [i_1]) ? (min(var_9, 69)) : var_9)) : var_11));
                var_13 = (arr_3 [4]);
                var_14 += ((-(((((-70 <= (arr_3 [i_1])))) / ((min((arr_0 [8]), var_11)))))));
                arr_4 [i_0] = (max((arr_1 [i_1]), (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_1])))));
            }
        }
    }
    var_15 = var_9;
    var_16 = (((var_7 / (((18446744073709551615 ? 33109 : 8410))))));
    var_17 = var_11;
    #pragma endscop
}
