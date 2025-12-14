/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_13 = (((((~(min((-32767 - 1), 852018219))))) ? (((min(var_6, 1)))) : (((852018236 - -26) ? 10622571604264078636 : (((arr_1 [i_0]) ? 0 : 4698770989637013663))))));
                var_14 = (max(var_14, (((5366152503172410497 ? (arr_0 [i_0]) : (min(-1, 4294967289)))))));
            }
        }
    }
    var_15 ^= (var_3 <= var_5);
    var_16 &= 24042;
    var_17 = var_5;
    #pragma endscop
}
