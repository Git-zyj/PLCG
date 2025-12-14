/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 6;i_1 += 1)
        {
            {
                arr_8 [0] [i_0] [i_0] = ((~(((~-5810) ? ((~(arr_7 [i_0]))) : ((~(arr_0 [i_0] [i_1])))))));
                var_16 = arr_7 [i_0];
                arr_9 [i_0] [i_0] [i_0] = max(4, (((arr_2 [i_1] [i_1]) ? (~13) : (((~(arr_5 [i_0] [0] [i_1])))))));
                var_17 = (max(var_17, 18446744073709551603));
                arr_10 [i_0] [0] = var_4;
            }
        }
    }
    var_18 = var_10;
    #pragma endscop
}
