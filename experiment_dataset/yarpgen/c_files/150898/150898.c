/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((-20339 <= 12610623638339242700) >> ((((((5836120435370308916 ? 1400412763 : 0))) >= 1824559092)))));
    var_18 = var_6;
    var_19 = -var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] = (min(2166375176, (((((0 ? 1515729893 : (arr_3 [i_0])))) ? (0 * 2166375176) : (!var_5)))));
                arr_5 [i_0] [i_0] [i_0] = (max((arr_0 [i_0]), ((var_13 ? ((65532 ? var_4 : 620290890)) : ((min(-3, (arr_3 [i_0]))))))));
            }
        }
    }
    #pragma endscop
}
