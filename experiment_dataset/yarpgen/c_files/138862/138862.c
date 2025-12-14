/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = (((((1 ^ -120) ^ 21)) + 1));
                arr_6 [i_1] &= ((-26560 && (1 - 1)));
                arr_7 [i_0] [i_1] = -32761;
                arr_8 [i_0] [i_1] [i_1] = (((((26 / 370877447) * 13)) << (((234 == (1 << 1))))));
            }
        }
    }
    var_13 = (max(var_13, ((((15 != 255) ^ (3 | 1))))));
    var_14 &= (4754429173938225096 || 32767);
    var_15 = (max(var_15, (0 > 1)));
    var_16 = 1;
    #pragma endscop
}
