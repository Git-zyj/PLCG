/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((~(min(((max((arr_0 [i_0]), var_5))), (((arr_4 [i_0] [i_0]) | (arr_2 [i_0])))))));
                var_18 = (arr_2 [i_0]);
                arr_6 [i_0] = (min((11993808858018776187 - -5302324426419697180), (((!(arr_3 [i_1 + 1]))))));
            }
        }
    }
    var_19 |= (min((max((max(var_10, var_10)), var_6)), ((((!var_10) && (((var_6 ? var_5 : var_4))))))));
    var_20 = var_9;
    #pragma endscop
}
