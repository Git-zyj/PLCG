/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;
    var_13 = 11437196727713848460;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((!(~12230059586592288844)));
                arr_6 [i_1] = (((max(1401420144, 199))) ? 140 : 221);
            }
        }
    }
    #pragma endscop
}
