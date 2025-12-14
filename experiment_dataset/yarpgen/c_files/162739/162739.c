/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((max(var_2, var_4))) ? (12901637305909508711 + var_3) : (((var_0 < (29748 + 110))))));
    var_11 = ((var_1 ? 255 : (~238)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [1] [16] [10] = -240;
                arr_7 [i_0] [i_0] [12] |= 18446744073709551606;
            }
        }
    }
    #pragma endscop
}
