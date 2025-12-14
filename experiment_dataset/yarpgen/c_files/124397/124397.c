/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0 - 1] |= -var_5;
                arr_7 [i_0 + 1] [i_1] = (min(((max(-11129, 226))), (arr_0 [i_0] [i_0])));
            }
        }
    }
    var_12 = ((((var_6 | (30742 && 17270391305687664977))) > ((15 ? 3061810313393220444 : 7858))));
    #pragma endscop
}
