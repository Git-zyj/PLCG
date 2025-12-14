/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1] |= 37;
                arr_6 [i_0] [i_1] [i_0] = ((-((min(((max((arr_0 [i_0] [i_1]), -127))), var_11)))));
                arr_7 [i_1] [i_1] = (((((+((min((arr_0 [i_0] [i_1]), 35)))))) ? ((var_8 ? (arr_4 [i_1] [i_1 - 1] [i_1 - 2]) : (arr_4 [i_1] [i_1 + 1] [i_1 - 2]))) : 141));
            }
        }
    }
    var_12 = ((~((114 >> (((116 << 13) - 950262))))));
    #pragma endscop
}
