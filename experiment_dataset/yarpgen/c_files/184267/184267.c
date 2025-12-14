/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_12 = var_0;
        var_13 = 19500;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_14 = ((~(min(214, -3036779854048467312))));
        var_15 ^= ((((min(var_10, ((((arr_5 [i_1]) ^ -53)))))) ? ((max((arr_3 [i_1]), (min(var_4, 53))))) : (((!(!-318579807))))));
    }
    for (int i_2 = 3; i_2 < 18;i_2 += 1)
    {
        arr_9 [i_2] = ((!((max((var_6 || 5253391530199168178), 213)))));
        arr_10 [i_2 - 3] [i_2] = (min(((((min(36764, 1))) + -18993)), 21067));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_16 = (-5672548215518024053 | (arr_7 [i_3]));
        arr_13 [i_3] [4] &= (((13121330427297532664 ? var_5 : (arr_1 [i_3]))));
        arr_14 [i_3] = ((302 + ((1 ? (arr_4 [i_3]) : -284079397))));
        arr_15 [i_3] [i_3] = (((((1750635154943590857 ? (arr_1 [i_3]) : -8963985732086256879))) ? (((arr_3 [i_3]) ? 15107620709216389064 : (arr_12 [i_3]))) : 0));
        var_17 += 7317;
    }
    var_18 = (((min(11523, ((18237 >> (35854 - 35826))))) != ((54227 & ((max(144, var_9)))))));
    var_19 ^= (((((min(-41, var_5)))) ? var_9 : -var_5));

    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        arr_19 [0] = ((~(((((14912847111254720409 ? (arr_8 [i_4]) : 71))) ? (((arr_18 [i_4] [i_4]) << (8019070 - 8019044))) : (min(var_11, (arr_18 [i_4] [i_4])))))));
        var_20 = min(((!(((2 ? 16346082664718441694 : (arr_18 [i_4] [i_4])))))), (max((!var_0), (var_0 || -1080668610))));
    }
    #pragma endscop
}
