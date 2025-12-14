/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 874051582412536097;
    var_14 = (min((((((min(var_9, -31967))) ? var_7 : (((5034795783185957756 ? var_9 : var_3)))))), (((17572692491297015533 != var_4) ? (~17572692491297015516) : var_8))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (((((max((var_8 == -31974), 16159)))) % var_11));
                var_15 = var_1;
                var_16 = (min(var_16, ((max(((((arr_1 [i_0]) || (arr_0 [i_1])))), (min((max(7, (arr_1 [i_0]))), var_8)))))));
            }
        }
    }
    #pragma endscop
}
