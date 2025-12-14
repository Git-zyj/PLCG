/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(((min(80, 65099))), var_4));
    var_12 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = 3423;
                    arr_7 [i_0] [i_1] [i_2] [i_2] = (max((min(((max(0, 1))), -2510416317339749672)), ((max(((max(1, -2))), (min(1, -5960)))))));
                    arr_8 [i_2] [i_1] [i_0] = 36;
                }
            }
        }
    }
    var_14 = (min((var_2 / 5937691958796452892), -var_3));
    var_15 = var_1;
    #pragma endscop
}
