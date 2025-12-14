/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_20 = (((~((min((arr_1 [i_0] [i_0]), 61830))))) | ((((3340245160 >= -2268) >= var_19))));
        arr_2 [i_0] = arr_1 [i_0 + 1] [i_0 + 1];
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        arr_6 [i_1 - 1] [i_1] = ((var_8 && (((512 ? 22290 : var_15)))));
        arr_7 [i_1] = ((((((!594613723) >> (((arr_0 [i_1 + 1]) - 18015090417001894963))))) < (max(((var_3 ? 4972047614715451146 : var_0)), (min(var_3, (arr_0 [i_1])))))));
    }

    for (int i_2 = 2; i_2 < 23;i_2 += 1)
    {
        arr_10 [i_2 - 2] = (((max(((2242 ? 10131068298269823368 : var_4)), (arr_9 [i_2]))) << (((((((var_19 ? (arr_9 [i_2]) : 2449))) ? var_11 : (((var_1 ? 10770 : (arr_9 [i_2])))))) - 603647708))));
        var_21 = (max(82, 516));
    }
    var_22 = var_7;

    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        arr_15 [i_3] = (min((((arr_3 [i_3]) - -var_16)), ((((var_1 ? var_10 : (arr_11 [i_3])))))));
        var_23 = ((((max(((50731 ? 80 : 61836)), 2147483637))) ? (max((((arr_8 [i_3]) ? var_0 : var_15)), ((max((arr_8 [i_3]), var_2))))) : 64995));
        arr_16 [i_3] = ((var_6 <= ((((arr_12 [i_3] [i_3]) - ((max(var_3, (arr_8 [0])))))))));
        var_24 *= ((56048 ? (max(-12588, ((-1054244495 ? (-2147483647 - 1) : var_5)))) : (22313 - 1)));
    }
    #pragma endscop
}
