/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += max((min(((var_6 ? var_15 : 281474976710655)), (var_4 <= var_17))), (max(var_8, 18446462598732840956)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_1] = (min(((max((arr_2 [i_1 - 4] [i_1 + 1] [i_1]), (arr_2 [i_1 - 4] [i_1 - 1] [i_1 - 2])))), (((arr_2 [i_1 - 4] [i_1 - 2] [i_1]) ? (arr_2 [i_1 - 4] [i_1 + 1] [i_1]) : (arr_2 [i_1 + 1] [i_1 + 1] [i_1])))));
                var_20 = ((65528 ? (((((((arr_3 [i_0] [i_0]) ? (arr_2 [i_1] [i_1] [i_1 - 4]) : (arr_2 [i_0] [i_0] [i_0])))) || (arr_1 [i_1 + 1] [i_1 + 1])))) : (min((arr_0 [8]), ((49173 ? 26019 : (arr_0 [i_1])))))));
                var_21 += (((((281474976710648 | ((min(var_16, (arr_2 [i_0] [i_1 - 3] [i_0]))))))) ? (arr_2 [i_1 - 2] [i_1 - 3] [i_1 - 3]) : (((arr_0 [i_1 - 4]) | (arr_0 [i_1 - 1])))));
            }
        }
    }
    var_22 = (~16362);
    #pragma endscop
}
