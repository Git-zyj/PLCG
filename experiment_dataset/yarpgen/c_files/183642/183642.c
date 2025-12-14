/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((((((arr_0 [i_0] [i_1 - 1]) << (3758096384 - 3758096377))) < (arr_1 [i_1 + 1]))) && (arr_5 [i_1 + 2] [i_1] [i_0])));
                arr_7 [i_0] [i_0] = (arr_4 [i_1]);
            }
        }
    }
    var_12 = ((((((var_3 * var_1) == (127 < 18701)))) << (((var_2 && (var_9 + var_8))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            {
                arr_12 [i_2] [11] [i_3 - 1] = (((((((arr_9 [i_2]) / (arr_9 [i_3]))) / (((arr_9 [i_3]) * (arr_11 [i_2] [i_3]))))) * (((arr_10 [i_3 - 1] [i_2]) / (((arr_8 [i_2]) / (arr_8 [11])))))));
                var_13 = (arr_10 [i_3] [i_2]);
            }
        }
    }
    #pragma endscop
}
