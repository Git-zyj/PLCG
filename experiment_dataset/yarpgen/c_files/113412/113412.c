/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1 - 1] [i_1] = (((arr_4 [i_0] [i_0]) > (((((arr_3 [i_0] [i_1]) + (arr_2 [i_0] [i_1]))) * -228))));
                var_13 = ((((min((arr_0 [i_0] [i_1 + 2]), 228))) ? 81 : (((!(!175))))));
            }
        }
    }
    var_14 = (min(((min((~255), 68))), (((min(var_1, var_3)) % (((58 ? var_9 : var_2)))))));
    var_15 = ((((min(var_3, 74))) ? ((179 ? ((min(var_11, 30))) : ((min(30, 184))))) : var_6));
    var_16 ^= ((~((max(196, (max(234, var_11)))))));
    #pragma endscop
}
