/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 562871632;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = (((((((((2647247892 ? 12871234184631993843 : 1))) && -var_8)))) / ((var_3 ? (((4294967295 ? -562871609 : var_8))) : -1647719372))));
                var_12 = ((((((((31950 ? var_1 : var_1))) ? var_7 : (~465956623)))) ? (((((1 ? var_6 : -465956623))) ? var_8 : -var_1)) : (!-1)));
                arr_5 [i_0] [i_1] = (((var_0 * ((2647247924 ? var_0 : var_2)))));
            }
        }
    }
    var_13 = (min(var_13, (((((((((2647247891 ? -31 : var_5))) ? (((1 ? 562871639 : var_2))) : ((615432385082359461 ? -973460209 : 12))))) ? ((((12 ? var_9 : 1)))) : (((((18446744073709551592 ? var_4 : var_4))) ? ((-8192 ? 65535 : var_9)) : 50779)))))));
    #pragma endscop
}
