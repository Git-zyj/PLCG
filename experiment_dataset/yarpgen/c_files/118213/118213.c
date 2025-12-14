/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 2147483647;
    var_14 += ((((((var_3 + 180) ? 2147483647 : ((65190 ? 45 : var_4))))) ? ((max(var_8, var_7))) : var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (((83 << (-546027045 + 546027058))))));
                var_16 = ((-1502015250 ? (max((((arr_1 [i_0]) ? (arr_1 [i_1]) : (arr_4 [i_0] [i_1] [i_1]))), (max(65519, -17)))) : (min((arr_1 [i_0]), -1))));
                arr_6 [i_1] = -759515707;
            }
        }
    }
    var_17 = 3753;
    var_18 = (var_3 | -921075120);
    #pragma endscop
}
