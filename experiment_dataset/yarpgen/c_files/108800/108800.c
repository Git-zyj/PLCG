/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_12 *= 4294967283;
                arr_6 [i_1] [i_1] = ((((((arr_5 [i_0 + 3] [i_1 + 1] [i_1]) ? ((min((arr_2 [i_0] [4]), (arr_0 [i_0])))) : (arr_2 [i_0 + 1] [i_0 + 1])))) ? 4294967279 : -1));
                var_13 = ((((min(((var_10 / (arr_3 [i_0]))), ((3055276583 * (arr_3 [i_1])))))) ? ((11 ? 1674865321 : (arr_1 [i_0 + 3] [i_1]))) : ((-((max(28, var_3)))))));
            }
        }
    }
    var_14 = var_5;
    var_15 ^= (min(-15, (min(((var_1 ? -2 : var_10)), var_11))));
    var_16 = var_11;
    #pragma endscop
}
