/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_0] = (((((min(-23, 5694175913812626325)))) + ((((1619604721 ? 25 : -19))))));
                var_17 += ((~(13 | -9)));
            }
        }
    }
    var_18 = var_1;
    var_19 *= (~var_11);
    #pragma endscop
}
