/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((min(-28983, var_9)) & ((max(21266, var_14)))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = 2644877869038922515;
        arr_4 [i_0] [i_0] = var_8;
        arr_5 [i_0] [i_0] &= ((((((min(113, var_7)) >> var_4))) ? ((min(1, (arr_1 [i_0])))) : (((min((min(var_4, 21257)), -21268))))));
        arr_6 [i_0] [i_0] = 69;
    }
    var_17 = (((!18446744073709551613) - ((((var_4 ? var_11 : var_1))))));
    var_18 = (min(6494, 21246));
    var_19 = (((min(var_8, (((12 ? 4294967283 : 4294967262)))))) ? ((-((891994251 >> (-16398 + 16402))))) : var_14);
    #pragma endscop
}
