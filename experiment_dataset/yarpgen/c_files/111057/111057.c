/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_14 -= ((((arr_2 [i_0]) ^ (arr_1 [i_0]))));
        var_15 += (((arr_2 [i_0]) & (((var_6 == var_4) - -var_10))));
        var_16 += (((((var_12 ? (arr_2 [i_0]) : var_6))) ? ((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) : (((-7596223890146651653 + 9223372036854775807) << (var_12 - 852617983)))));
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        var_17 = (26679 + 26841);
        arr_6 [i_1] = var_9;
        arr_7 [i_1] [i_1] = (((((arr_3 [i_1 + 2] [i_1]) > ((max(var_3, 38694))))) ? (~26841) : (((((arr_3 [i_1] [0]) ? var_8 : var_1)) | (((min(-120, 27838))))))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_10 [i_2] = ((((min(38699, var_6))) ? var_6 : ((((arr_1 [i_2]) != var_0)))));
        var_18 = min((((arr_0 [i_2] [i_2]) ? var_12 : (arr_0 [i_2] [i_2]))), (~26841));
        var_19 += (((((127 == (arr_2 [i_2]))))) & (min(var_2, 38702)));
        arr_11 [i_2] = (max(9, (((arr_4 [i_2]) << (48 - 45)))));
    }
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        var_20 = ((-((min(var_5, (arr_5 [i_3 + 2]))))));
        arr_15 [i_3] = (((((~(max(var_7, var_7))))) ? (((-104 || (arr_12 [20] [i_3])))) : (min((var_11 + 8058490008514559526), (((var_8 ? var_0 : var_3)))))));
        var_21 = (min(var_21, (((((((max(var_6, -1108655151))) || (((-1108655151 ? -107 : 69))))) ? ((((((arr_3 [i_3] [i_3]) ? -1819038903 : var_11))) ? (-127 - 1) : var_7)) : (((8192 ? -2147483641 : 76))))))));
    }
    var_22 = (-32767 - 1);
    #pragma endscop
}
