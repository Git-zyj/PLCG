/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_7 [1] = var_4;
                arr_8 [i_0] [i_0] = ((+((min((arr_0 [i_1 - 1]), 65535)))));
                arr_9 [i_0] [i_1] [i_1] = (min(((min((((!(arr_4 [i_0] [i_1])))), (min(var_7, 65534))))), (((2573700159471137195 || 747509663) ? (min(var_8, 8276799772901860316)) : (((65521 ? -2016938552408527404 : (arr_4 [i_0] [i_1]))))))));
                arr_10 [i_0] [9] = 2016938552408527403;
                arr_11 [2] = -7196;
            }
        }
    }
    var_18 = (min(16114900253091431667, 2016938552408527387));
    #pragma endscop
}
