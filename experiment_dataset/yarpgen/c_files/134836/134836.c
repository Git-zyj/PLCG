/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [11] &= ((var_3 && (((((~(arr_1 [i_0] [i_0]))) >> (var_12 - 1102324712))))));
        arr_4 [i_0] = ((((((((1 ? 1 : 65535))) ? ((min(0, (arr_2 [i_0])))) : (((arr_1 [i_0] [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))))) != 705055130));
        arr_5 [i_0] [i_0] = ((((((min(-22000, 1))) ? 3577050205776377097 : 22010)) & 64416));
        arr_6 [i_0] = ((var_10 >= (((-(!-22006))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_10 [i_1] = (((((((~(arr_9 [i_1]))) == ((37 * (arr_9 [i_1])))))) << (((~1) + 13))));
        arr_11 [i_1] = ((((((max((arr_9 [16]), (arr_9 [i_1])))) ^ (arr_2 [i_1]))) >> (((((arr_0 [16] [16]) ? var_1 : var_3)) - 16589446111822000982))));
    }
    var_20 = var_5;
    var_21 = ((-37 ? (min(42458, ((var_10 ? var_13 : var_1)))) : ((max((21999 / -3577050205776377080), ((16197716238741317686 ? 1 : -3577050205776377088)))))));
    #pragma endscop
}
