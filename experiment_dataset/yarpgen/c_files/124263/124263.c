/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((7936 | ((4250405035 ? 47 : 7936))))) ? var_10 : (((((var_1 ? 57600 : 57600))) ? (2047 & var_1) : 144))));
    var_17 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_18 ^= (max(((-(arr_4 [i_1]))), (!1073709056)));
                var_19 ^= ((~(min(-1, 57600))));
                var_20 = (min(var_20, ((min(((((arr_0 [i_0]) && (!2047)))), (-1 + -1))))));
                arr_6 [i_1] = (-83 % 3269);
                arr_7 [i_0] [i_0] [i_0] = ((min(((53454 ? 31 : 12081)), 0)) * (7936 / 44112));
            }
        }
    }
    #pragma endscop
}
