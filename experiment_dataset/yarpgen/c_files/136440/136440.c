/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0 - 2]);
        var_17 = (((((1 ? 1222012424338270473 : 1222012424338270473))) ? (arr_1 [i_0]) : ((((arr_1 [i_0]) >= (arr_2 [i_0]))))));
        var_18 = (var_3 >= -27981);
    }
    var_19 = (max(1222012424338270471, var_5));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            {
                arr_9 [i_1] = (arr_6 [i_1] [i_1]);
                var_20 &= (max(1222012424338270471, -1222012424338270471));
                var_21 = (!1222012424338270455);
                arr_10 [i_1] [i_2] = (((((1 ? -1222012424338270490 : 1280416190))) ? (!1280416190) : (((arr_6 [i_1] [13]) ? (arr_6 [i_2] [i_2]) : (arr_5 [i_2])))));
            }
        }
    }
    var_22 = (min((((-((-105 ? var_1 : var_2))))), 1));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 14;i_4 += 1)
        {
            {
                arr_16 [4] [6] [i_3] = var_2;
                arr_17 [i_3] [i_4] = (-9223372036854775807 - 1);
            }
        }
    }
    #pragma endscop
}
