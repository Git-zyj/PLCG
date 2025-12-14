/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_10 = (((max(((var_4 ? 4294967292 : 5286997790642984504)), var_2)) > (((1 | ((~(arr_0 [i_1] [i_0]))))))));
                arr_5 [i_0] = (max(4294967292, (arr_1 [i_0 - 3])));
            }
        }
    }
    var_11 &= (((((var_2 >> (var_1 - 811190371)))) | 2804310958));
    var_12 = ((~((((var_7 + var_5) || ((min(var_2, var_3))))))));
    #pragma endscop
}
