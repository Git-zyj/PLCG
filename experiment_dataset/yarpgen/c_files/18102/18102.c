/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;
    var_16 = (min(var_11, ((-(35 != 1962101590)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = (max(var_17, ((((((-(arr_0 [i_1] [i_0])))) && ((var_14 >= (arr_0 [i_0] [1]))))))));
                var_18 *= (min(-709145117, -13047));
                arr_5 [i_0] [i_1] [i_0] = (((((1962101590 && (arr_2 [i_0] [i_1])))) + ((1 ? 255 : 1))));
                var_19 = (32767 == 1);
            }
        }
    }
    #pragma endscop
}
