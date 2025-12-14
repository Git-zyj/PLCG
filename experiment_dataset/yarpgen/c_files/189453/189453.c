/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_10 = (max(var_10, (var_1 > var_1)));
                arr_5 [i_1] = ((((((var_9 ? (arr_1 [i_0]) : var_8)) == (1350785347104070409 && var_5))) ? (((((134 ? (arr_4 [i_1]) : (arr_1 [10])))) ? var_4 : (~var_0))) : (((5463010305290945028 < var_7) | (arr_4 [i_0])))));
            }
        }
    }
    var_11 &= (((((((1350785347104070408 ? 1 : 12)) ^ var_4))) ? ((~(~1))) : (((((var_2 ? var_1 : 10463589305472734015))) ? var_4 : (~var_9)))));

    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [i_2] = (((((27 ? 1 : var_6))) ? (((var_9 == (4321993500905651702 | var_1)))) : (((arr_2 [i_2] [1] [i_2]) ? (arr_3 [i_2] [i_2]) : (arr_4 [i_2])))));
        var_12 = ((!((((((arr_1 [i_2]) < 1)) ? ((18 ? 34997 : (arr_2 [i_2] [i_2] [i_2]))) : ((var_0 >> (var_7 - 858265793208253499))))))));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] [i_3] |= ((((((var_8 ? var_9 : var_9)))) ? ((((((arr_2 [i_3] [i_3] [i_3]) >> (((arr_3 [10] [i_3]) - 126))))) ? (((arr_11 [i_3]) ? var_2 : (arr_3 [i_3] [i_3]))) : 114)) : (((((var_6 == (arr_3 [13] [14]))) ? ((-(arr_10 [4]))) : (arr_8 [i_3]))))));
        var_13 = (min(var_13, ((((((24 ? (1 + var_4) : 6))) ? (637804800984947082 + var_0) : (((-(((arr_11 [i_3]) - (arr_7 [14] [i_3])))))))))));
        var_14 = (max(var_14, (((((arr_8 [i_3]) ? var_1 : 18446744073709551615)) * (arr_8 [i_3])))));
        var_15 = (((((var_6 * (((var_2 * (arr_2 [i_3] [i_3] [i_3]))))))) ? (~0) : ((237 % (arr_6 [i_3])))));
    }
    #pragma endscop
}
