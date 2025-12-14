/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_10 = ((((max((arr_2 [i_0]), (8878 * var_8)))) - (8878 + 14484776372663553928)));
                    arr_6 [i_2] [i_2] = 1;
                    arr_7 [i_2] [i_2] [14] = ((((-var_6 == (arr_5 [i_0] [i_1] [17]))) && (((var_7 ? (~var_5) : 8964570266860660347)))));
                }
            }
        }
    }
    var_11 = var_8;
    var_12 = var_5;
    var_13 = (((((~((-9223372036854775798 ? var_6 : 15362915056186382803))))) ? var_3 : var_9));
    #pragma endscop
}
