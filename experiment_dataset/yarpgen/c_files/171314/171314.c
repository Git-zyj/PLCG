/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171314
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
                var_11 = (63 + 63);
                var_12 &= (min(((min(124, var_7))), var_7));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 23;i_3 += 1)
        {
            {
                var_13 += (max((max(177, var_1)), var_8));
                var_14 = var_0;
            }
        }
    }
    var_15 = (((((((var_7 ? 2899785379 : 65535))) ? (max(var_7, var_8)) : var_0)) | var_9));
    var_16 = (((((1 / ((var_5 ? var_8 : var_10))))) ? var_9 : ((var_10 ? var_7 : ((11563753961987419876 ? var_0 : var_8))))));
    var_17 = ((-64 ? var_9 : var_6));
    #pragma endscop
}
