/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((3760284716147880040 | 14960) ? ((((var_1 ? var_12 : 50551)) * ((max(var_12, var_11))))) : var_2));

    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((~((((min(var_7, 15496))) - ((min(var_13, (arr_0 [i_0]))))))));
        arr_3 [i_0] [i_0] = ((!(((((!(arr_1 [i_0] [i_0]))) ? (var_11 && 7) : 46)))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_8 [15] [i_1] = ((((14960 ? 196 : (arr_7 [i_1] [i_1]))) / (((arr_7 [i_1] [i_1]) ? (arr_7 [i_1] [i_1]) : 14955))));
        var_15 = ((+(((var_6 < ((((arr_6 [i_1] [i_1]) ? var_11 : (arr_6 [16] [16])))))))));
        arr_9 [i_1] = 40;
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_16 = ((((((arr_13 [i_2]) || (((var_12 ? (arr_1 [i_2] [i_2]) : (arr_1 [i_2] [5]))))))) >= (((40 <= (arr_11 [i_2] [i_2]))))));
        arr_14 [1] = ((((((arr_12 [i_2]) ? (arr_4 [i_2] [10]) : ((max(49, (arr_0 [i_2]))))))) - (max(1368001901, (0 + 50564)))));
    }
    var_17 = (min(var_17, var_13));
    var_18 = ((((((0 ? 234 : 65535)) << ((((7279495598573607791 << (((var_10 + 11) - 1)))) - 7279495598573607790)))) >> ((((var_6 >> (var_13 - 1034))) >> (((40 | -17848) + 17856))))));
    #pragma endscop
}
