/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] [3] [i_1] = (min(220465253, (~50)));
                arr_5 [i_1] = (((((220465255 << ((max(1, 1)))))) ? (((-220465277 / var_0) ? ((((arr_0 [i_1]) >= 29441))) : (max(-8708, -475235586)))) : -2007));
                var_19 = 1;
            }
        }
    }
    var_20 = ((1 | (max(var_18, var_12))));
    var_21 = -220465255;
    #pragma endscop
}
