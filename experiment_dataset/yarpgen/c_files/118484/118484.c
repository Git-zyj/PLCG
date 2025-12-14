/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((((((76 ? 12745705476288301200 : 101)) == -16742))), (min((max(15207499292252493178, var_3)), (((179 ? var_7 : 6345309246523293095)))))));
    var_11 = (var_7 / var_0);
    var_12 = (min((!55), ((68719476735 <= (((min(183, 179))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [9] [i_0] = var_0;
                var_13 = var_2;
            }
        }
    }
    #pragma endscop
}
