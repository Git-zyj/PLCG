/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (min((var_3 * 2588926409597850416), (((var_13 ? (min(var_10, 2588926409597850416)) : (((1730324054150372297 ? 2229916177 : 32756))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = (min(-32766, 2588926409597850417));
                arr_6 [i_0] [i_0] [i_0] = (arr_3 [i_0]);
                arr_7 [i_1] [i_0] = 9223372036854775807;
                arr_8 [i_0] [i_0] = ((~3834309909) ^ (arr_1 [12]));
            }
        }
    }
    #pragma endscop
}
