/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_12));
    var_17 &= var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1 + 1] [i_0] = (max((~47648), (max((min(var_3, 1376595981)), (arr_5 [i_0] [i_1 - 1] [i_0])))));
                var_18 = ((((((((30363 ? -1376595982 : -1376595975))) >= (-1376595982 | 140703128616960)))) < 5997));
            }
        }
    }
    var_19 = ((((var_5 || ((max(24, 18446603370580934656)))))));
    #pragma endscop
}
