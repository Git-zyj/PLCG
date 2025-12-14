/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 = (var_3 - var_11);
        var_15 = (var_0 ^ 131071);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_16 = (max(var_16, ((((max(((min(var_12, var_9))), (max(var_10, var_13)))) + (max(var_1, var_8)))))));
        arr_5 [i_1] &= ((((var_3 ? -24 : var_3)) != ((min(((-1 ? 24 : -24)), 61542)))));
        var_17 = ((((min(var_9, (24 & 1)))) ? ((max((max(4, var_2)), ((max(var_9, var_9)))))) : ((((var_8 << (var_9 - 82))) << (var_10 - 2761442644)))));
        var_18 = ((52858 ? ((((var_1 ? var_4 : 9)) * (min(var_2, var_5)))) : 227));
        arr_6 [19] = (135 + var_13);
    }
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        var_19 = (min(var_19, -var_6));
        var_20 = (max((((((max(var_2, 1))) ? (((min(var_7, var_4)))) : ((var_6 ? var_10 : -2147483641))))), (min(var_9, var_11))));
        arr_9 [i_2] [15] = (var_3 ? ((max(var_13, var_10))) : (!var_3));
    }
    var_21 = (min(var_21, ((((-342692560 ? ((min(342692559, var_7)) : (max(var_3, var_3)))))))));
    var_22 = ((-((((max(-1, 82))) ? ((max(var_6, var_6))) : ((-24 ? 61556 : 79))))));
    var_23 -= (max((min(((max(var_6, var_7))), ((var_0 ? -8962547716705172207 : var_3)))), var_8));
    #pragma endscop
}
