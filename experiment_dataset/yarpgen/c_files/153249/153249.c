/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_11 = (min((~2607345516621220812), (((!((min(-7249977037312728496, 5))))))));
                var_12 = ((-(((((var_9 ? 17244 : (arr_2 [i_1] [i_1] [i_0])))) ? (max((arr_1 [i_0]), (arr_1 [i_1]))) : ((((!(arr_2 [i_1 - 1] [i_0] [i_0])))))))));
            }
        }
    }
    #pragma endscop
}
