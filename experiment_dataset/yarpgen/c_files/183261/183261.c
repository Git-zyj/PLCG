/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_2, (((((-1 ? 100 : 16383))) ? (0 / 3845354767266554482) : 139))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 = (max((~-210), ((47 ? 100 : 4))));
                    var_16 = (min(var_16, (!4)));
                    arr_6 [i_0] [i_0] [i_2] [i_2] = (((4088 + 4294967295) ? ((min((!2677518881), ((177 ? 139 : 0))))) : 18446744073709551615));
                }
            }
        }
    }
    #pragma endscop
}
