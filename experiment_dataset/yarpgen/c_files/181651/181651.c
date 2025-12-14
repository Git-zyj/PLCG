/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = (max(2797419409, (~4)));
                var_19 = (!(((0 ? 4 : 4294967292))));
                arr_6 [i_1] [i_1] [i_1] = ((~((((min(var_13, (arr_3 [i_1] [i_1])))) | (16368 ^ 211)))));
                var_20 = (((~4294967274) ? (((max(24, var_8)))) : (~4)));
                arr_7 [i_0] [i_1] [i_0] = var_3;
            }
        }
    }
    var_21 = (((var_1 == 1014956720) != var_10));
    var_22 = 1;
    var_23 = var_3;
    #pragma endscop
}
