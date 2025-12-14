/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (arr_2 [i_0] [i_0])));
                var_18 *= ((!(~134)));
            }
        }
    }
    var_19 = ((var_6 < ((32 ? (1045271902 / 3249695393) : (((max(61315, var_13))))))));
    var_20 |= (min(67108863, var_6));
    #pragma endscop
}
