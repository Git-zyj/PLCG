/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += ((7757424896068630981 ? var_2 : ((var_9 ? (var_1 != -1852324306) : var_2))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [0] = (!263362732);
                var_21 = (min(var_21, 18446744073709551607));
                var_22 = (min(1, 18446744073709551615));
                arr_5 [i_0] [i_1] = (((max(((max(-4266842546976360298, var_10))), 18446744073709551607)) + (((max(255, 1024))))));
            }
        }
    }
    var_23 ^= var_1;
    var_24 = ((((min(315871308, ((var_12 ? var_14 : var_12))))) || var_13));
    var_25 = (min(-32, (!12)));
    #pragma endscop
}
