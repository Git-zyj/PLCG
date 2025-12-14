/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -9675;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 = (((((~((9675 ? var_7 : -9654))))) ? (~1) : 9647));
                    var_19 = 1;
                }
            }
        }
    }
    #pragma endscop
}
