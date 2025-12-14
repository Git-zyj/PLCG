/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    var_15 = ((var_10 == (((var_0 == var_0) ? -var_6 : var_2))));
    var_16 = (max(var_16, var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (((-var_8 <= (((max((arr_1 [17]), (arr_3 [i_1 + 1] [i_1 - 1]))))))))));
                arr_4 [i_1] = ((((((!var_13) ? (max((arr_1 [14]), var_3)) : (((((arr_2 [i_0] [9]) || (arr_2 [i_0] [i_1])))))))) || ((max(((((arr_0 [i_0]) && (arr_0 [3])))), var_3)))));
            }
        }
    }
    #pragma endscop
}
