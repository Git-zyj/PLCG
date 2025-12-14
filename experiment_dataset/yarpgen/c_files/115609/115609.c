/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_10 = ((-(((arr_1 [i_0]) ? 869578872 : (arr_0 [i_0] [i_1])))));
                var_11 = (((+-1268739688) == (((arr_3 [i_0 + 2]) ? (arr_2 [i_0 + 2]) : (arr_3 [i_0 + 2])))));
                var_12 = ((-(869578872 - 32767)));
                arr_5 [i_0] = ((-99 ? (arr_3 [i_0]) : (arr_3 [i_0])));
            }
        }
    }
    var_13 = var_5;
    #pragma endscop
}
