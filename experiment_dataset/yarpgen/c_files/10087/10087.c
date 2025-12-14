/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!var_1);
    var_21 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_22 = (((arr_3 [i_0] [i_0] [i_1]) && ((min((arr_3 [i_0] [i_0] [i_0]), (arr_3 [i_0] [i_1] [i_1]))))));
                arr_4 [i_1] = arr_0 [i_0] [i_1];
                arr_5 [i_0] [i_1] = ((((((arr_2 [i_0]) % (arr_2 [i_0])))) ? (arr_2 [i_0]) : 22194));
                var_23 = (min(var_23, ((min(var_16, (-295976325 < 12621223985286235))))));
            }
        }
    }
    #pragma endscop
}
