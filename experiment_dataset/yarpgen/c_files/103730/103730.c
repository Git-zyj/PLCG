/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((var_10 || 65504) || (var_2 || var_6))) || (((469509282 && var_6) || (var_5 && var_5)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] [i_2] = ((((((3898423877 - 2798476753290744163) - (144 - 237)))) + ((((((arr_4 [i_0] [i_2]) + 3360997371))) - (var_6 - 3669018962250577394)))));
                    var_15 += ((((7516858361695528429 || var_13) || (var_7 || var_12))) || ((((-4338302425670116770 || (arr_4 [i_0] [14]))) || ((1007267540 && (arr_2 [i_2]))))));
                    var_16 = ((((((1 + (arr_1 [i_2]))) + (160 + var_9))) * ((((1 * (arr_6 [i_0 - 1] [i_0 - 1] [i_2] [5]))) / ((var_13 * (arr_0 [i_2])))))));
                    arr_9 [i_2] [14] = ((((((975526928 <= 1) % (var_5 | var_7)))) & (((((arr_7 [i_0] [i_1] [1]) / (arr_7 [1] [i_1] [i_0]))) * (var_3 == -31237)))));
                }
            }
        }
    }
    var_17 |= (((((-116 & var_11) ^ (var_4 ^ var_1))) & ((((1 ^ 1) | (var_4 & var_12))))));
    var_18 = (min(var_18, ((((((((-2 || 4294967294) || (var_13 && var_0))))) == (((var_4 | 2092541710) << ((((var_3 << (1007267553 - 1007267542))) - 49148)))))))));
    #pragma endscop
}
