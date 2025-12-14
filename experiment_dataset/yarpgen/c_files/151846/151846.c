/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_18 = (arr_3 [i_0] [10] [i_0 + 1]);
                var_19 = (min(var_19, ((((-(arr_3 [i_0 + 1] [i_0 - 1] [i_0 + 1])))))));
                var_20 = (max(((max(-8962, (arr_1 [i_0])))), ((max(4294967295, ((((arr_1 [i_1]) + (arr_1 [i_0])))))))));
                var_21 = (max((min((min(4294967295, (arr_1 [i_0]))), ((max(var_5, (arr_1 [20])))))), ((max((((-2147483647 - 1) ? var_9 : (arr_2 [i_0]))), ((4294967294 ? (arr_2 [i_0]) : 127)))))));
            }
        }
    }
    var_22 = (max((!114), ((var_5 ? var_15 : ((max(1, 4294967294)))))));
    #pragma endscop
}
