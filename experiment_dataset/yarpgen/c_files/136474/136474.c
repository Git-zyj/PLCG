/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_6;
    var_16 = ((((((25497 % var_6) != var_9))) == 2147483647));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = ((((-(arr_4 [i_0] [i_1] [i_1]))) - ((((max(9803430737291646180, var_13)) != var_8)))));
                var_18 = (max(var_18, ((min(1005496225, (!-2066685086238027707))))));
                arr_7 [i_0] [i_1] = min((((8643313336417905436 != (((((arr_0 [i_0]) <= 550468283))))))), var_4);
            }
        }
    }
    #pragma endscop
}
