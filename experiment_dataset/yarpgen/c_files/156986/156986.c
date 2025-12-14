/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_10 = (min(var_10, (((((((-9367 <= (996879587 <= 54137))))) * 0)))));
                var_11 = (max(((var_7 ? var_9 : var_5)), (arr_3 [i_0] [i_1 + 2])));
                var_12 = (max(var_12, ((((arr_3 [0] [i_1 + 2]) ? ((((((arr_0 [i_0]) ? (arr_0 [i_1]) : 182))) ? (arr_2 [4]) : ((var_7 ? 182 : var_6)))) : (((((var_8 ? var_3 : 6675390775817632970))) ? ((70 ? 2775378105168123779 : -816645830)) : (!var_0))))))));
            }
        }
    }
    var_13 = (((((1006632960 ? 1 : 49))) | ((((((((((-2147483647 - 1) + 2147483647)) + 2147483647)) << (var_2 - 967416921)))) ? (((var_7 ? var_9 : 8))) : var_7))));
    var_14 = ((((((max(var_7, -19358)) && var_5)))));
    #pragma endscop
}
