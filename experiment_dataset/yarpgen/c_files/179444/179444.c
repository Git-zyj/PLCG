/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = 9965812596013437225;
                var_11 &= (min(var_4, var_9));
                var_12 = (!32767);
            }
        }
    }
    #pragma endscop
}
