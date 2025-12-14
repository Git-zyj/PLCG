/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_1] = min((((max(12818158169550701771, 2591374544016171796)) + ((max(1, var_13))))), ((((((arr_2 [i_1]) & var_6)) != (~1309)))));
                var_20 = (max(var_20, (((((((arr_0 [i_0 + 1]) ? var_18 : (!var_2)))) ? -64222 : (min(((min(var_12, 10889))), (min(var_10, 4294967280)))))))));
                arr_5 [i_1] [i_1] = 3361377114;
                var_21 = (max(var_21, ((min(var_11, 64211)))));
                var_22 -= (arr_0 [i_1]);
            }
        }
    }
    var_23 = (!var_9);
    #pragma endscop
}
