/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    var_20 = (max(var_20, ((min(((((min(var_18, 161))) ? var_8 : var_16)), (max(var_1, (((158 ? 6388482008894372892 : 94))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = (min((min((arr_2 [i_0]), (max(var_15, (arr_7 [i_0] [i_1] [i_2]))))), (((arr_2 [i_0]) ? ((max((arr_3 [i_0]), 158))) : ((var_9 ? (arr_3 [i_0]) : (arr_0 [i_0])))))));
                    var_21 = (arr_3 [i_0]);
                    arr_10 [9] [i_1] [i_0] = (max((min(-5197954122595246894, 9473512969008252848)), (min(var_16, 5197954122595246873))));
                }
            }
        }
    }
    var_22 ^= (max(var_14, (((((min(var_0, var_6))) ? var_4 : 152)))));
    #pragma endscop
}
