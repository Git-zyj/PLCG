/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_1] = (max((((((arr_0 [i_0]) <= 665704151)))), ((665704166 ? 47 : 32))));
                var_19 = ((!(((((max(-33, -258541609657910038))) ? -9084 : (arr_2 [i_0] [5] [i_0]))))));
                var_20 = ((!((max((!var_1), var_7)))));
                var_21 = (max((arr_1 [i_1 - 1] [i_1 + 2]), ((14515661309471153327 ? (arr_3 [i_0] [i_1]) : 3265243663615899508))));
                arr_5 [i_0] = ((!(1 / 2135)));
            }
        }
    }
    var_22 = -4557;
    #pragma endscop
}
