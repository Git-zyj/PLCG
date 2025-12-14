/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((+((var_9 ? (arr_0 [i_0 + 3]) : (arr_2 [i_0 + 3])))));
                var_11 = (arr_5 [i_0] [11]);
                var_12 = (((((arr_4 [i_0 - 1] [i_1] [i_1 - 2]) ? 30476 : (arr_0 [i_0 + 1]))) != (((arr_4 [i_0 + 1] [i_1 + 1] [i_1 - 1]) + (arr_4 [i_0 - 1] [i_0 - 1] [i_1 + 1])))));
                arr_7 [0] [0] = (max((min((min(6994472042935592635, 18003995000266063123)), (((var_3 ^ (arr_4 [7] [i_0] [i_0])))))), 9223372036854775807));
            }
        }
    }
    var_13 = (max(var_13, ((max(18003995000266063123, 11452272030773958981)))));
    #pragma endscop
}
