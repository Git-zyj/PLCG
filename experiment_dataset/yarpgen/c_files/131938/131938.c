/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((~((-3937 ? -15859 : -16804)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_18 *= (!3936);
                arr_5 [i_1] = (max((((((-10372 ? (arr_2 [i_0] [i_0] [i_1]) : -10372))) ? 1 : ((max(5984, 24114))))), (((!((((arr_2 [i_0] [i_1] [i_1]) - var_9))))))));
                var_19 = (min(((-(!-15859))), 1));
                arr_6 [i_1] = (max(((~((min(var_15, var_9))))), (~var_6)));
                arr_7 [i_0] [i_1] = (min(var_5, (arr_3 [i_1] [i_1])));
            }
        }
    }
    #pragma endscop
}
