/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = ((-((var_6 % (((max(124, (arr_3 [i_0])))))))));
                arr_5 [i_0] = 7369388777905806684;
                var_21 = (2875241077483764571 % 5908778301181201350);
            }
        }
    }
    #pragma endscop
}
