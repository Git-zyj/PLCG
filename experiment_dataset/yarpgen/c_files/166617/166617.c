/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                arr_6 [i_0] [1] [i_0] |= (arr_3 [i_0]);
                arr_7 [i_0] [i_0] = ((~(arr_5 [i_0 + 1] [i_1] [i_1 + 2])));
                var_17 = (min(var_17, ((((((63910 ? 65534 : (-127 - 1)))) / ((8796092891136 ? 1062918726 : 65280)))))));
                arr_8 [i_0] [i_1 - 1] [i_0] = (((18446744073709551609 == 288230376151187456) * ((-(((arr_4 [i_0] [i_0] [i_0]) ? 13 : 0))))));
            }
        }
    }
    var_18 = var_6;
    var_19 = 0;
    var_20 = ((max((!128), var_12)));
    #pragma endscop
}
