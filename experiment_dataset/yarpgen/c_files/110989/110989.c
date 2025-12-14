/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_18 = ((((var_12 ? (10013003603370600525 * 5585031088230504935) : (arr_1 [i_0]))) * (((min(576460717943685120, (-32767 - 1)))))));
            arr_4 [i_0] [i_1] = (((arr_2 [i_0]) <= var_14));
        }
        var_19 = ((((max((((2147483647 ? -19148 : -21))), (arr_3 [i_0] [i_0])))) ? ((((arr_0 [i_0]) ? ((6871127311251061057 ? 1467363604 : 2116715610)) : (((var_13 ? 20 : (arr_2 [i_0]))))))) : (((((-6871127311251061057 ? -1631160548 : 32760))) ? (arr_3 [i_0] [i_0]) : ((var_12 >> (-21 + 49)))))));
    }
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        var_20 = (max(var_20, ((((((arr_5 [i_2 + 1] [i_2 + 1]) ? (arr_5 [i_2 - 1] [i_2 + 1]) : (arr_5 [i_2 + 2] [i_2 - 1]))) ^ (((((arr_5 [i_2 + 1] [i_2 + 1]) > -32761)))))))));
        var_21 = (!((((arr_7 [i_2 - 1]) / (((arr_7 [i_2]) - (arr_5 [i_2 + 1] [i_2 - 1])))))));
        var_22 = (((~(arr_8 [i_2] [i_2 + 2]))));
        arr_9 [i_2] = (arr_8 [i_2] [i_2]);
    }
    var_23 = var_15;
    #pragma endscop
}
