/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((-(-65 & 80))) % var_5));

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (min(((min((((0 == (arr_0 [i_0])))), (arr_1 [i_0])))), (max((228 | 137), 244))));
        var_21 ^= (((((0 % ((max(228, 244)))))) > (((-(arr_0 [16]))))));
        var_22 ^= (min(((((min((arr_1 [10]), (arr_0 [22]))) != (arr_1 [2])))), ((~(arr_1 [6])))));
        arr_3 [i_0] = (244 && -127);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_23 = ((((!(arr_6 [i_1])))) == 255);
        var_24 -= (max(255, 129));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_9 [i_2] = ((~(arr_4 [i_2])));
        arr_10 [i_2] = 492581209243648;
        arr_11 [i_2] = ((~((-(arr_8 [i_2] [i_2])))));
        arr_12 [i_2] = (-127 - 1);
    }
    #pragma endscop
}
