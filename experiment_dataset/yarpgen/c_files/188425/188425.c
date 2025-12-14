/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_1] = (max((max((arr_3 [i_0] [i_1]), ((var_3 ? 13043 : 19921)))), ((((var_1 ? 1056698068932042255 : var_5))))));
                var_12 = ((((-4783352632622070978 ? -13038 : 13047))) - (((((-(arr_3 [i_0 + 1] [4])))) & ((var_4 / (arr_3 [14] [14]))))));
            }
        }
    }
    #pragma endscop
}
