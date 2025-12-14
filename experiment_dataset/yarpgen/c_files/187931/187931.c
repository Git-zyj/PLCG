/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_1] = (min(((-((var_1 ? var_3 : 2558494790212892962)))), ((max((min(var_10, var_9)), ((-5 * (arr_5 [i_1] [i_1] [i_1]))))))));
                var_16 = ((((((arr_1 [11]) - ((-(arr_0 [i_0])))))) ? ((~(arr_3 [i_1]))) : (((!(arr_5 [i_1] [i_0] [1]))))));
                var_17 *= 1;
            }
        }
    }
    var_18 = var_1;
    #pragma endscop
}
