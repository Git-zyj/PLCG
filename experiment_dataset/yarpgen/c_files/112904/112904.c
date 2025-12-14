/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -var_3;
    var_15 = (max(var_15, var_5));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((((min(((max(var_10, 6305))), 0))) ? (!var_6) : (((!var_8) ? (arr_3 [i_1] [i_1]) : var_0))));
                arr_7 [i_0] [i_1] = max((((((max(59221, 56))) || (((var_11 ? var_10 : var_2)))))), (min((arr_4 [i_1]), ((max(59217, (arr_3 [18] [i_1])))))));
                var_16 = ((var_5 ? (min((min(9, 1847308820)), var_4)) : (((((max((arr_5 [i_0 + 1] [i_0 + 1] [i_1]), var_4))) != ((((arr_2 [i_0] [9] [i_1]) < -625642487))))))));
            }
        }
    }
    var_17 = (max(var_17, var_11));
    #pragma endscop
}
