/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((min(34168, 1))) | ((((-31610 ? 0 : 255))))));
    var_12 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0 - 2] = (((min(183, 8191))) ? 4294967295 : (((-(((1 && (-2147483647 - 1))))))));
                arr_6 [i_0] [7] = ((((((!(arr_4 [i_0]))))) | (min((arr_2 [i_0 - 2] [i_1]), ((13129 >> (((arr_2 [4] [4]) - 21593))))))));
                arr_7 [i_0] [10] = 6861179783544871632;
            }
        }
    }
    #pragma endscop
}
