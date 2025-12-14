/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_11 += (((((-86 ? var_4 : (arr_0 [i_0])))) ? (!var_4) : var_1));
        var_12 = (((((var_3 <= ((max(236, (arr_1 [i_0]))))))) == 26552));
    }
    for (int i_1 = 3; i_1 < 22;i_1 += 1)
    {
        var_13 = ((((((~var_6) ? var_4 : ((var_8 ? (arr_3 [i_1 - 3]) : var_1))))) ? ((((((arr_4 [i_1 - 1]) ? var_0 : var_6))) ? (((!(arr_0 [i_1 - 2])))) : var_8)) : ((1 ? ((var_3 ? 19 : var_6)) : (((arr_0 [i_1]) ? 511 : var_2))))));
        var_14 = (max(var_14, ((max((max((max(var_1, 35477)), var_3)), ((((!var_6) - ((var_7 ? var_6 : var_5))))))))));
        var_15 = (max(var_15, (arr_1 [i_1])));
    }

    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_8 [i_2] = (((((~((min(19, 20)))))) ? var_7 : (((((arr_6 [i_2]) || (((var_1 ? (arr_3 [i_2]) : var_5)))))))));
        arr_9 [i_2] = (min((((arr_3 [i_2]) ? ((((arr_5 [8]) ? (arr_4 [i_2]) : var_8))) : (min(0, 5881269497565823355)))), 235));
        var_16 = (max(((((arr_6 [i_2]) << (((arr_5 [i_2]) - 35))))), (arr_0 [i_2])));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_17 = (max(var_17, (((max((~235), (min(var_7, var_8)))) >> ((((max((arr_6 [i_3]), (min(211, var_5))))) - 473))))));
        arr_12 [i_3] [i_3] = ((((var_10 ? (236 == 0) : ((var_1 ? 2305842992033824768 : var_8))))) ? (min((16383 >= var_1), 1606485565)) : var_3);
        var_18 = (min((((arr_1 [i_3]) - var_1)), ((max(469161195, var_4)))));
        var_19 = ((((((~var_7) & (~var_6)))) ? ((var_5 ? 20 : 469161195)) : var_3));
        arr_13 [i_3] = var_4;
    }
    var_20 = var_6;
    var_21 = ((((var_4 ? ((min(-123, 1))) : var_7)) > ((((var_3 ? var_1 : -5881269497565823354))))));
    #pragma endscop
}
