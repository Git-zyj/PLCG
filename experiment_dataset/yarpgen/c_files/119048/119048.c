/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 148;
    var_21 = (max(var_18, (max((max(var_9, 31)), ((min(52448, var_18)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_22 = (max(var_22, 52421));
                arr_4 [i_0] = (min((arr_0 [i_0]), 52425));
            }
        }
    }
    var_23 -= (max((max(-26850, var_17)), (((4294967294 ? ((var_14 ? 25 : 25)) : var_6)))));
    var_24 ^= var_19;
    #pragma endscop
}
