/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = (((arr_4 [i_0] [i_1 + 1]) ? (~255) : ((var_2 ? (~var_7) : (((arr_1 [i_0]) ? 255 : 14))))));
                var_14 = (min(((((!var_9) > 18446744073709551615))), (arr_0 [i_0])));
                arr_6 [i_0] [i_0] = 4095;
                var_15 = (min(11835327485705366100, 3460825320));
                var_16 = ((var_7 / (((var_10 < (arr_4 [i_1 + 2] [i_1 + 2]))))));
            }
        }
    }
    var_17 = -1;
    var_18 &= (((((((var_10 ? var_7 : 834141982)) > (max(8086120345160603010, var_11)))))));
    var_19 &= (~var_7);
    #pragma endscop
}
