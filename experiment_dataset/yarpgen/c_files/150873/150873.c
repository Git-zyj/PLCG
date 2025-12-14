/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_1] = min((255 && 255), (min((255 <= 1), 0)));
                arr_5 [5] = (min(((var_10 ? var_13 : 9223372036854775807)), (var_13 % 20)));
                arr_6 [i_0] [i_0] = (min(1, 13025300563245685153));
            }
        }
    }
    var_17 = (min(((min(3, (-9223372036854775807 - 1)))), ((((min(var_8, var_1)) <= (var_5 & var_3))))));
    #pragma endscop
}
