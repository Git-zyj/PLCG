/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = (min(var_19, ((((~11299838441477520457) % ((~(min((arr_2 [i_0] [11]), (arr_1 [i_0]))))))))));
                var_20 = ((-11299838441477520446 ? 55 : 4712917140350545114));
            }
        }
    }
    var_21 = ((min(var_6, ((3953009385 ? 55 : 67)))));
    #pragma endscop
}
