/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] = (((((811328150 < var_0) <= (max(var_11, 1672636731)))) ? (((-(arr_3 [i_0] [7] [i_0])))) : (max(4294967291, 1))));
                var_15 = (max((min(((-(arr_3 [i_0] [i_1] [i_1]))), ((29927 ? var_3 : (arr_0 [i_1]))))), (((arr_0 [i_0]) ? (arr_0 [i_0]) : -1))));
            }
        }
    }
    var_16 = var_12;
    #pragma endscop
}
