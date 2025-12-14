/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_15 = (max(var_15, ((((((arr_1 [i_0 + 2]) ? (arr_1 [i_0 + 1]) : 7296765960587543710))) ? (((min((arr_1 [i_0]), 232)))) : (var_5 >= 7250727661537117632)))));
        var_16 -= (((min((arr_2 [i_0 - 2] [i_0 - 1]), (arr_2 [i_0 - 3] [i_0 + 1]))) % (arr_2 [i_0 - 2] [i_0])));
        var_17 = (872321728 - 24);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (((((var_1 ? (arr_5 [i_0 + 1] [i_0 + 1]) : var_11))) ? (-103 / 8968239387009298755) : (((min(24, 24))))));
                    arr_9 [i_0] [i_1] [i_2] = (((((24 ? (max(8202018959007178444, var_9)) : ((max(var_1, 8723772762556081706)))))) ? ((min((arr_5 [i_0 - 2] [i_1]), -23551))) : (max(1665773190, ((min(1, 0)))))));
                }
            }
        }
    }
    var_19 = ((var_10 * ((var_12 ? 1 : ((-8538967536544363334 ? var_1 : 3360293449540579053))))));
    #pragma endscop
}
