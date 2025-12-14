/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                var_19 = max(5988005890316728550, 65517);
                arr_5 [i_1 - 3] [i_1] [4] = 19;
                var_20 = ((281474976710655 ? 517138482733546162 : -281474976710655));
                arr_6 [i_0 - 4] [i_1] = (min(((((arr_3 [i_0 - 2] [i_0 + 1]) && (arr_3 [i_0 - 2] [i_0 - 3])))), (arr_3 [i_0 - 2] [i_0 - 4])));
            }
        }
    }
    var_21 &= (-var_16 / -281474976710655);
    #pragma endscop
}
