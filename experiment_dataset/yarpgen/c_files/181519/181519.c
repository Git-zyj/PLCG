/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    var_11 = 130023424;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = 10303199777385527989;
                arr_5 [i_0] [1] [1] = var_5;
                var_12 |= (((10303199777385527989 ? 59337 : 8143544296324023626)));
            }
        }
    }
    #pragma endscop
}
