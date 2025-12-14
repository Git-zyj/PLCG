/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((((var_8 ? (!var_8) : (!var_6)))), -3935614814449357854));

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_12 += ((3935614814449357854 && ((((arr_0 [i_0 + 3] [i_0 + 3]) ? (arr_0 [i_0 + 1] [i_0]) : 288230371856744448)))));
        var_13 = (((min(-2376918172100200898, -826572932))) ? ((max(-822214310, (max(var_0, (arr_0 [0] [7])))))) : -3935614814449357862);
        var_14 = (~((((((arr_1 [4]) ? -297647200819444912 : (arr_0 [2] [0]))) != 3935614814449357854))));
        arr_2 [i_0] = (3935614814449357841 ? (min((arr_0 [i_0 - 2] [i_0 + 1]), -8138987823843879112)) : (!var_0));
        var_15 = (min((((arr_1 [i_0 - 2]) ? ((((3181558200920667931 > (arr_1 [i_0]))))) : 2376918172100200897)), (((arr_1 [i_0 - 2]) ? 3935614814449357858 : ((var_6 ? (arr_1 [5]) : var_7))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_16 = max(((((!-2300599255060136467) && ((max((arr_4 [i_1] [9]), 1808111099517017250)))))), (arr_8 [i_1] [i_1 + 1] [7]));
                    var_17 *= ((!((min((arr_5 [i_1 + 1]), (-1922464374 % -2300599255060136467))))));
                    var_18 = (+((((arr_7 [i_1 - 1] [i_1 + 1]) || (arr_7 [i_1 - 1] [i_1 - 1])))));
                    var_19 = ((((min(var_2, (arr_7 [i_1 + 1] [i_1 + 1])))) || (((((((719606672846629074 ? var_8 : (arr_3 [i_3]))) + 9223372036854775807)) << (((max((arr_7 [i_1] [i_1]), (arr_4 [i_3] [15]))) - 1203785437)))))));
                }
            }
        }
    }
    var_20 += (((((((-1236031337 ? var_9 : var_10))) ? var_1 : var_9))) ? ((min(((var_0 ? var_5 : var_2)), (max(var_8, var_5))))) : var_6);
    #pragma endscop
}
