/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_0 <= var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = (arr_3 [i_1] [i_0]);
                arr_7 [i_0] [i_1] [4] = ((((((max(18402, var_2)) >> (135 - 95)))) ? (arr_2 [i_0] [i_1]) : ((((max(var_15, 6930523687818142420)))))));
                var_21 -= -59;
                arr_8 [i_1] = (min(((-14 ? (arr_4 [i_0] [i_1] [i_1]) : (arr_5 [i_0] [i_1]))), (((~(arr_4 [i_0] [i_1] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
