/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;
    var_19 = ((var_9 ? (~var_11) : var_9));
    var_20 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [16] [16] = (arr_2 [i_1] [1]);
                    var_21 = (max(var_21, (((((!(3730974061 || -45))) ? ((~(arr_6 [i_0]))) : (((((min((arr_1 [10]), -41))) || 1))))))));
                    var_22 = (max(var_22, (~var_12)));
                }
            }
        }
    }
    #pragma endscop
}
