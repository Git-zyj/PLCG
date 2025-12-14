/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= (max(5058628014417720157, (var_11 != var_2)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = ((((max((arr_2 [i_0] [i_1 - 1] [14]), (5058628014417720132 != -5058628014417720153)))) <= (min((max(var_0, (arr_0 [i_0]))), ((5058628014417720153 / (arr_0 [i_0])))))));
                arr_4 [i_0] = 5058628014417720152;
                var_17 = ((~(max((max((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_1 - 1]))), 5058628014417720169))));
                var_18 = 5058628014417720164;
                var_19 = (max(var_19, (((((max(-5058628014417720169, (arr_2 [i_0] [i_0] [i_0])))) ^ (max((arr_0 [i_1 - 1]), (arr_0 [i_1 - 1]))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            {
                arr_9 [i_2] [20] [i_3] = ((((5058628014417720153 ? (arr_7 [i_3 - 1] [i_3 + 1]) : (arr_7 [i_3 - 1] [i_3 - 1]))) < ((min((arr_6 [i_2]), (arr_6 [i_2]))))));
                var_20 ^= (max(5058628014417720157, (((arr_7 [i_2] [i_2]) ^ -5058628014417720158))));
                var_21 = ((min((arr_7 [i_3 + 1] [i_3 - 1]), (arr_7 [i_3 + 1] [i_3 - 1]))));
            }
        }
    }
    var_22 = 5058628014417720153;
    #pragma endscop
}
