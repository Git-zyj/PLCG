/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((64735 ? ((((max(34322, var_3))) ? var_2 : 35204)) : var_12));
    var_15 &= (max(((((!10) && (16384 && 42339)))), 44252));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 = (arr_5 [i_0] [i_0]);
                    var_17 = (min(var_17, ((((((max(65534, (arr_4 [i_1]))))) >= (((31222 % 7247) ? ((max((arr_0 [5]), (arr_4 [i_0])))) : (arr_5 [7] [i_1]))))))));
                }
            }
        }
    }
    var_18 = (((min((31222 * var_5), (var_7 >= 15))) - (!var_6)));
    #pragma endscop
}
