/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_11 = (min(((var_5 ? var_3 : (max((arr_3 [i_0] [i_0 + 3]), var_1)))), ((max(var_0, (((0 << (var_3 - 10776769926005323288)))))))));
                var_12 = ((((min(((min(1, var_10))), ((-(arr_0 [i_0] [i_1])))))) / (((max(1, 1)) ? var_1 : ((65535 ? (arr_1 [i_0 + 1]) : (arr_2 [23])))))));
                var_13 = -1;
            }
        }
    }
    var_14 = (((var_9 ? var_6 : var_4)));
    var_15 = var_0;
    var_16 = ((-((var_7 ? 1 : (-2147483647 - 1)))));
    #pragma endscop
}
