/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_7 % 16);
    var_12 = (min(255, 11));
    var_13 &= var_8;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_7 [i_0] [i_0] = (arr_3 [i_0] [1] [i_1]);
            arr_8 [2] [i_1] [i_1] &= (((~10) ? (min((240 == 1285), ((var_6 ? 1 : 1)))) : (min(((~(arr_0 [i_0] [i_1]))), 65408))));
        }
        arr_9 [i_0] = (((((((((arr_5 [i_0] [i_0] [i_0]) - var_7))) ? ((2247213090 ? var_6 : (arr_5 [i_0] [i_0] [i_0]))) : var_5))) ? ((((min(7, 1))) ? var_5 : ((-385304547 ? (arr_5 [i_0] [i_0] [i_0]) : -946373237)))) : ((((min(1, 1)) ? var_1 : ((min(27, var_6))))))));
        var_14 -= (((arr_6 [i_0] [i_0] [i_0]) ? ((max(-70689318, (((15959997191645878563 || (arr_2 [0]))))))) : (max(1, (max(4824504510026289671, (arr_0 [i_0] [2])))))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        var_15 = ((7466 % (arr_3 [i_2 - 1] [i_2] [i_2 + 1])));
        var_16 = (max(var_16, (3529505700 - 7466)));
    }
    var_17 = 4494;
    #pragma endscop
}
