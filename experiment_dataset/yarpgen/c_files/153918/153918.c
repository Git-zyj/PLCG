/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_15 = ((((min((-32767 - 1), 1))) - ((((max((arr_0 [5] [i_0]), -5374))) ? -14 : (((arr_0 [i_0] [i_0]) ? 32761 : (arr_0 [i_0 + 1] [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 ^= (max((max(((1 ? (arr_3 [i_0] [i_0 - 1] [i_0]) : (arr_5 [i_0 + 1]))), ((19233 & (arr_1 [i_0]))))), (((!((min(-11142, var_2))))))));
                    arr_6 [i_0 - 1] [i_2] [i_2] = (((arr_3 [10] [11] [i_2]) ? ((max((min((arr_4 [i_2] [i_0]), (arr_2 [i_0 - 1] [i_2 - 4]))), (((29091 >= (arr_0 [i_0] [i_0]))))))) : 23011));
                    var_17 ^= -26921;
                }
            }
        }
        arr_7 [i_0] = arr_4 [4] [i_0 - 1];
        arr_8 [i_0 - 1] [i_0] &= max((min(6108, (arr_5 [7]))), ((((-32767 - 1) != (-32767 - 1)))));
        var_18 = ((-11035 ? -19830 : (arr_5 [i_0 + 1])));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
    {
        var_19 = arr_10 [i_3];
        arr_11 [i_3] [14] &= ((!((((arr_9 [i_3]) & (((arr_9 [3]) ? (arr_9 [7]) : 10)))))));
        arr_12 [i_3] = arr_9 [i_3];
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
    {
        var_20 = -8583;
        var_21 = (max((min(-3097, ((-19648 - (-32767 - 1))))), (~-22258)));
        arr_15 [i_4] = ((~(arr_10 [i_4])));
    }
    var_22 = (max(var_22, ((max(((var_12 || (-11 & 17729))), ((!(!0))))))));
    var_23 = ((var_8 ? ((((-18828 >= (-32767 - 1))) ? ((min(32767, var_3))) : var_10)) : 19651));
    #pragma endscop
}
