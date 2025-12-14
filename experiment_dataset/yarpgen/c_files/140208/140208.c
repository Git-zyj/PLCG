/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = (min(((((-127 - 1) ? 1872386434 : 0))), (max(18446744073709551603, 17))));
                var_14 = (max(((max(var_9, var_6))), var_0));
                var_15 = (max(var_15, ((max((max(var_12, var_12)), (((var_4 ? var_2 : (!var_12)))))))));
            }
        }
    }
    var_16 *= (~var_3);
    var_17 = (max(((((max(var_2, var_2))))), ((-(max(var_7, var_3))))));
    var_18 = (max(var_12, var_1));
    #pragma endscop
}
