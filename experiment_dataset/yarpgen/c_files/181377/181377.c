/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((!((max(var_5, var_3))))))) ^ ((var_11 ? -1083 : var_3))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [11] [1] [1] = (min((!-1083), ((~((min((arr_1 [i_0] [i_0]), 5)))))));
                arr_5 [i_0] = ((max((!1111), (arr_2 [15] [i_0]))));
                arr_6 [i_0] = (max(((((var_9 & (arr_0 [i_0]))))), var_12));
            }
        }
    }
    var_14 = ((var_10 ? (14336 + -7906614910483976744) : ((max(-var_9, var_0)))));
    var_15 = var_5;
    var_16 = ((((max(var_12, (var_6 || var_7)))) ? ((min(var_10, var_2))) : 214));
    #pragma endscop
}
