/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!var_2);
    var_19 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [14] [14] [i_1] = (((!921633618) & (!var_7)));
                arr_5 [12] = (((((-(((!(arr_0 [i_0]))))))) ? (((((134217727 | (arr_2 [i_0] [i_0])))) ? (!var_2) : (min((arr_3 [i_0] [i_0] [i_1]), var_11)))) : ((max(var_14, (arr_2 [i_0] [i_0]))))));
            }
        }
    }
    #pragma endscop
}
