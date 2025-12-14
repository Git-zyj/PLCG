/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= (((((var_8 ? ((3483603302 ? 1 : -122)) : (!-122)))) ? ((((-14198 ^ var_15) * (14209 >= 23574)))) : (((((var_0 ? var_6 : var_15))) * ((var_15 ? 4656758507514996946 : 0))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_18 &= var_6;
        arr_3 [i_0] = (max((2477695262 + 1), (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [1] [i_1] = (min((arr_2 [i_1]), (((var_12 <= (arr_1 [i_1]))))));
        var_19 = ((arr_4 [i_1] [i_1]) % (arr_4 [i_1] [i_1]));
        arr_7 [i_1] [i_1] |= (min(14197, ((((((((arr_2 [1]) < 4092)))) == ((1817272052 >> (4095 - 4078))))))));
        var_20 = (((((-((var_10 ? (arr_5 [i_1]) : var_14))))) < var_1));
    }
    var_21 = (((((-(max(-8255211502287912174, var_11))))) ? 1 : (min(var_2, ((var_13 ? var_13 : var_14))))));
    var_22 = var_14;
    #pragma endscop
}
