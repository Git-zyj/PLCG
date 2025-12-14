/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((1 == (max(1, 9223372036854775807))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_21 &= (min((((arr_3 [i_0]) | (arr_4 [i_0]))), (((((max((arr_1 [3]), (arr_2 [13] [11])))) & ((max(1, 25599))))))));
                var_22 = (arr_1 [i_1]);
            }
        }
    }
    var_23 = var_1;
    var_24 += min(var_10, var_10);
    #pragma endscop
}
