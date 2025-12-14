/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] [1] = ((10144514109747305369 ? 63 : 148));
                arr_5 [5] = ((arr_2 [i_0] [7] [i_1]) || (arr_0 [i_0] [0]));
                arr_6 [1] [i_1] [i_1] = 1;
            }
        }
    }
    var_10 = 2967575330;
    var_11 = (((~10080182432046573710) ? 69 : (((((max(var_6, var_9))) ? (max(891934437, -891934426)) : ((max(var_3, var_2))))))));
    #pragma endscop
}
