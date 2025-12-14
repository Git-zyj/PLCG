/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((!((max(((var_9 ? 255 : 36020000925941760)), -36020000925941774)))));
                arr_6 [i_0] [i_1] = (((arr_3 [i_0 - 1]) ? 1 : ((min(-1, 2)))));
                var_13 = ((((min((max(36020000925941774, (arr_0 [i_0]))), (243 / 1033499893)))) || ((min(var_5, (arr_0 [i_0 - 1]))))));
            }
        }
    }
    var_14 = var_3;
    #pragma endscop
}
