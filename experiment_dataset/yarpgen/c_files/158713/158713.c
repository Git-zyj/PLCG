/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_15 = (arr_2 [i_0 + 1] [i_1 - 1]);
                var_16 = (arr_3 [i_0]);
            }
        }
    }
    var_17 = (max(var_10, var_10));
    var_18 *= ((18093005130078104438 ? (3449372137 || 122) : (max(0, 2100612136))));
    var_19 -= ((((((min(14439, 0))) || var_3)) ? ((((((max(var_10, var_8))) && (50 && -1))))) : 2313237548));
    #pragma endscop
}
