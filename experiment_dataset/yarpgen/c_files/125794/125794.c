/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_1] = ((!0) * (((((min(27621, 0)))) ^ var_5)));
                var_11 = (max(var_11, ((((-5607132501159838773 | 27621) ? (0 > 4294967293) : 1)))));
            }
        }
    }
    var_12 += 646178400;
    #pragma endscop
}
