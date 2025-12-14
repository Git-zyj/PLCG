/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, (~var_0)));
                    arr_6 [i_2] = ((+(((arr_3 [i_0] [i_0] [i_0]) & 63251))));
                }
            }
        }
        var_13 = 11046111638114174797;
    }
    var_14 = var_1;
    var_15 = ((((var_2 ? 16383 : 18026288348575950407))) - var_6);
    #pragma endscop
}
