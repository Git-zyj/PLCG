/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0] [i_0] [21] = 33900;
                    arr_9 [i_0] [i_0] [i_2] = -102;
                }
            }
        }
    }
    var_19 = (var_9 ? -67108863 : ((-((0 ? 3748070737 : var_17)))));
    var_20 = var_10;
    var_21 = (min(var_21, ((((((((min(5742126905364979053, 0))) ? var_13 : -var_18))) == var_0)))));
    #pragma endscop
}
