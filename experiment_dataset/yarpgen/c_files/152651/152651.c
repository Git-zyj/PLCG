/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            var_11 = (min(var_11, (((~(min(2423749788998938766, 2866750889)))))));
            var_12 |= (max((((1428216398 / (arr_4 [i_1 + 1] [i_1 + 1])))), 2423749788998938783));
            var_13 = (((arr_4 [i_0] [i_1]) ? ((var_3 ? (arr_3 [i_1 + 1] [i_1 + 1] [i_1]) : (!var_5))) : (((arr_1 [i_0] [i_1 - 1]) ^ (arr_1 [i_0] [i_1])))));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_14 = ((!((((arr_1 [i_0] [i_2]) ? 4962352829640007800 : 54633)))));
            var_15 = (max(((-11457 ? 2866750899 : 4158126768)), (((var_3 ? (arr_1 [i_0] [i_2]) : (arr_1 [i_0] [i_2]))))));
            arr_7 [i_0] = (max(-5905005549321144364, 565947345));
        }
        var_16 = (((max(15887982731658059456, -113))) ? (arr_3 [i_0] [i_0] [i_0]) : ((110 ? (arr_6 [i_0] [i_0] [i_0]) : ((min(var_2, var_9))))));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_17 = 54637;
        var_18 = (max(var_18, 13277663390958203160));
    }
    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        var_19 = ((!(9477577 ^ -12597)));
        var_20 = ((var_2 & (arr_6 [4] [4] [i_4 + 1])));
        arr_12 [i_4] [i_4] = (max(61440, -1029811769));
        var_21 &= ((((max(54616, 1))) ? (arr_3 [i_4 - 1] [i_4 - 1] [i_4]) : ((var_6 ? var_2 : var_8))));
        var_22 = (((((var_8 ? (arr_1 [i_4] [i_4 + 1]) : (arr_1 [i_4] [i_4 - 1])))) ? ((max((((arr_10 [i_4 - 1]) ? var_3 : 1006632960)), ((max(929083144, 54633)))))) : 15887982731658059468));
    }
    for (int i_5 = 3; i_5 < 9;i_5 += 1)
    {
        var_23 = max((~248), ((var_3 | (arr_13 [i_5 - 3]))));
        var_24 = (min((max(((((arr_8 [i_5]) ? 929083136 : (arr_11 [8])))), 3981116858503614565)), ((((arr_2 [i_5] [i_5] [i_5]) ^ (arr_3 [i_5 - 2] [i_5 - 3] [i_5 - 2]))))));
    }
    var_25 = -var_1;
    #pragma endscop
}
