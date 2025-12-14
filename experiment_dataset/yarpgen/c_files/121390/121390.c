/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((var_12 ? var_11 : var_11)) | (!var_15)));
    var_17 *= var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_2] = (min(((((arr_5 [i_2] [i_1] [i_2]) && 3335130106))), (var_11 || var_4)));
                    var_18 = (min(var_18, (((((((var_2 ? var_11 : -8898771381226863517))) ? var_9 : ((var_12 ? 1321065845 : 1321065853))))))));
                }
            }
        }
    }
    #pragma endscop
}
