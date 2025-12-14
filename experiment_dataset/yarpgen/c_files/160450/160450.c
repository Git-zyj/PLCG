/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = ((((245 ? 227 : 440448864)) | var_7));
                var_15 = (max((((~-440448865) + ((var_0 ? 4138161287 : (arr_4 [i_1]))))), var_5));
                arr_5 [i_1] = (((~53) ? (arr_4 [i_0 - 2]) : (((arr_4 [i_0 - 3]) ? 18 : (arr_4 [i_0 - 2])))));
            }
        }
    }
    var_16 = (-440448869 / var_8);
    #pragma endscop
}
