/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [6] = ((((((7 + (-2147483647 - 1))) >= (483158349 != -1421858221)))) + (((var_9 < -124) + (65529 <= 1469380866))));
                    arr_11 [i_0] [i_2] [i_2] [i_1] = (((((((arr_1 [i_0] [i_0]) ^ (arr_7 [i_2] [i_2] [i_2] [i_2]))) ^ (var_15 ^ 65331))) | (((((arr_6 [i_0]) | (arr_4 [5] [4]))) ^ ((((arr_0 [6]) & var_5)))))));
                }
            }
        }
    }
    var_17 = (((3183265339 == 1) < ((((101 > var_15) != (var_4 == var_14))))));
    #pragma endscop
}
