/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= -5469012139711511434;
    var_15 = (min(var_12, (((((var_6 ? var_4 : -5469012139711511434))) ? 5469012139711511434 : var_1))));
    var_16 += (min(((var_2 ? var_10 : var_6)), (((!(!-5469012139711511434))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_17 = (max(var_17, ((((108 && -109) ? 61 : ((max((arr_6 [i_1] [i_1] [i_1]), 11806))))))));
                var_18 |= (((arr_1 [i_1]) != ((((arr_6 [i_0] [i_0] [i_1]) / (arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))));
            }
        }
    }
    #pragma endscop
}
