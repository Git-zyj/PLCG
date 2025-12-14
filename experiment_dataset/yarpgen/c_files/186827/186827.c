/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= ((268435456 ? var_10 : (max(-3242287366, ((var_4 ? var_3 : 3242287371))))));
    var_12 = var_9;
    var_13 &= min((max(-var_6, ((4294967287 << (var_3 - 3226820576))))), (((((19 ? var_2 : 3242287392))) ? ((var_10 ? var_3 : var_8)) : ((var_1 ? var_0 : var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = -30990;
                arr_5 [i_0] &= (((((arr_2 [i_0] [i_1]) ? (arr_2 [i_1] [i_0]) : (arr_2 [i_0] [i_1]))) * (arr_2 [i_0] [i_1])));
                arr_6 [i_1] = ((3369186907373442954 ? 126 : (-32767 - 1)));
            }
        }
    }
    #pragma endscop
}
