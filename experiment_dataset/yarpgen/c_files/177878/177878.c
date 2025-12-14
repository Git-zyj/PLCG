/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((-var_7 ^ (!var_5)))) || 1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_2] = (min((min(var_7, ((var_8 ? var_16 : (arr_4 [i_0] [i_0] [6] [i_1]))))), ((((arr_1 [3] [3]) ? ((var_0 ? 6527850726304429771 : var_12)) : 6527850726304429771)))));
                    var_19 = (max(var_19, (arr_4 [i_0] [i_0] [i_1 + 1] [i_0])));
                }
            }
        }
    }
    var_20 = 1;
    var_21 += -6425027214455068782;
    var_22 ^= var_17;
    #pragma endscop
}
