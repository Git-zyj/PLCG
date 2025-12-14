/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = max(((((max(0, -126))) | (max(-1386744892, var_13)))), (((!(33585 != var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 *= -1386744892;
                arr_5 [i_0] [5] = ((((!((max(23555, 3107))))) ? (((5 - 0) ? ((var_4 & (arr_4 [1]))) : ((max((arr_2 [14] [i_0]), (arr_2 [i_1] [i_1])))))) : ((max(33842, (arr_4 [i_0]))))));
                var_20 = (max(var_20, (((-(max(14517, ((var_10 ? (arr_1 [0] [i_0]) : 30)))))))));
            }
        }
    }
    var_21 = (min(var_21, (var_8 > var_10)));
    var_22 &= ((((min(167, (var_4 ^ 31950)))) ? ((((max(-14517, var_8))) ? -720545394 : var_10)) : ((max(38, (min(248, -1851)))))));
    #pragma endscop
}
