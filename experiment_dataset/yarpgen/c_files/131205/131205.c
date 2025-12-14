/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 &= (arr_2 [i_0]);
                var_21 = (min(65535, (((arr_3 [i_1] [i_0] [i_0 - 2]) ? (arr_3 [i_0] [i_1] [i_1]) : (arr_3 [i_0 - 2] [i_0 - 1] [i_0 + 1])))));
                arr_6 [i_1] = ((+(((((((arr_3 [i_1] [i_1] [i_0]) + var_7))) == (max(var_18, var_2)))))));
            }
        }
    }
    var_22 *= (0 || 5929262172169712753);
    var_23 = var_5;
    var_24 = ((!(~241)));
    #pragma endscop
}
