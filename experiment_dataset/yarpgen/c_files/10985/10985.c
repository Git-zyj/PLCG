/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((max(((max(var_1, var_2))), (max(11, var_10))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1 - 1] [i_1] = ((var_12 ? ((~(max(var_5, var_3)))) : 36879));
                var_14 = (arr_4 [i_0] [i_1] [i_0]);
                arr_6 [i_0] [i_1 - 1] = (min((((+((var_3 >> (((arr_4 [i_0] [i_0] [i_0]) - 947934276))))))), (min(var_4, ((4294967285 - (arr_2 [7] [i_0])))))));
                var_15 = ((-(max((arr_0 [i_0]), var_6))));
            }
        }
    }
    var_16 = (min((~var_1), (min(var_1, (13820624446771575899 + var_11)))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                var_17 = ((((min((arr_1 [i_3] [1]), (arr_7 [i_3])))) ? (max(var_8, var_1)) : ((min(var_3, 1456978483570078115)))));
                var_18 = var_8;
                arr_11 [i_2] [i_2] [3] = ((min(var_9, (arr_4 [i_2] [i_3] [i_3]))));
            }
        }
    }
    var_19 = (min(var_19, var_11));
    #pragma endscop
}
