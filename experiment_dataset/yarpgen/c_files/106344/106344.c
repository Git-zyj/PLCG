/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = ((((arr_1 [12] [i_0]) > (((arr_3 [i_0]) ? (arr_0 [i_0]) : (arr_3 [i_0]))))) ? ((((((arr_1 [1] [i_0]) ? (arr_2 [i_0] [12]) : (arr_3 [i_0])))) ? (((arr_1 [4] [4]) / (arr_1 [0] [i_0]))) : (arr_0 [i_0]))) : ((((arr_3 [i_0]) && (arr_3 [i_0])))));
        var_19 *= (((3643076576 ? (arr_0 [i_0]) : (20012 | 2747594524836491019))));
        var_20 = (((((((arr_0 [i_0]) % (arr_1 [i_0] [i_0])))) || ((((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_1 [i_0] [i_0])))))) ? (((arr_1 [i_0] [2]) ? (arr_3 [i_0]) : (((arr_2 [i_0] [i_0]) * (arr_0 [i_0]))))) : (((((arr_0 [i_0]) / (arr_3 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = (((arr_2 [i_0] [i_0]) | (arr_8 [i_2] [i_2])));
                    var_21 = (((((arr_7 [i_0] [i_1]) ^ (arr_9 [i_0])))) && ((((arr_5 [i_0] [i_0] [i_2]) * ((((arr_8 [i_0] [i_0]) ? (arr_4 [i_0] [i_0]) : (arr_7 [i_0] [i_1]))))))));
                    var_22 &= (arr_2 [i_1] [i_2]);
                    var_23 -= (arr_7 [i_2] [i_2]);
                }
            }
        }
    }
    var_24 ^= var_8;
    var_25 = var_7;
    var_26 = var_14;
    #pragma endscop
}
