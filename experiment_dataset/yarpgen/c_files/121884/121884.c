/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_13 += var_4;
                var_14 = (max(var_14, ((((((((max(9223372036854775799, 18446744073709551587))) ? 44 : 1684629556))) ? 14 : ((-(arr_3 [i_0]))))))));
            }
        }
    }
    var_15 = (~var_5);
    var_16 = (max(var_16, (((((var_4 ? var_8 : var_8)) & (((~(min(var_5, var_1))))))))));
    #pragma endscop
}
