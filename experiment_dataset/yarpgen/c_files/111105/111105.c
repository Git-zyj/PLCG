/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [21] [i_1] = ((0 ? (arr_3 [i_0]) : ((((arr_3 [i_0]) ? (arr_3 [i_1]) : (arr_3 [i_0]))))));
                var_17 = (((((53650 - (min(3780723149330545084, (arr_1 [4] [i_0])))))) ? (((((1005561191 ? 61440 : 3451557413))) ? (((!(arr_1 [i_0] [i_0])))) : ((-22 ? 21 : 39)))) : ((-59 ? (arr_3 [i_0]) : (arr_2 [i_1])))));
            }
        }
    }
    #pragma endscop
}
