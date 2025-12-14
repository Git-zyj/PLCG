/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_11 = 17;
        arr_2 [i_0] = (min((((arr_0 [i_0]) ? (arr_0 [i_0]) : 10)), (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            {
                arr_9 [i_1] [i_2] [i_2] = ((((((arr_6 [i_1 - 1]) - (4294967264 <= 221)))) ? (((arr_4 [i_1 - 1]) ? 2319904265 : (((((arr_3 [i_1]) < (arr_8 [i_1]))))))) : ((min(-96, (((arr_7 [i_1] [1]) ? 103 : 123)))))));
                arr_10 [i_1] [i_2] = -32755;
            }
        }
    }
    var_12 = ((((min((min(var_2, var_1)), var_2))) ? -123 : var_6));
    var_13 ^= var_9;
    #pragma endscop
}
