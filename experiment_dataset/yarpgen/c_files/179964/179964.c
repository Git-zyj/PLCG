/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;
    var_15 = (max(var_15, var_11));
    var_16 = (((0 ? ((-1182428702 ? var_2 : 6644)) : var_7)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_17 = (max(var_17, ((((0 != 4205545353) ? ((((arr_3 [i_0] [i_1]) ? 0 : 6625))) : 1)))));
            var_18 *= ((-(arr_3 [i_1] [i_0])));
            arr_4 [i_0] [i_0] [i_1] = ((-10751 ? ((((-2147483647 - 1) > (-32767 - 1)))) : (((1431219223 && (arr_3 [i_0] [i_1]))))));
            var_19 = ((-(arr_3 [i_0] [i_1])));
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_7 [i_0] [i_2] = ((32386 % (arr_1 [i_2])));
            var_20 = (max(var_20, ((((arr_0 [i_0] [i_0]) * (arr_2 [i_0] [i_0] [i_2]))))));
            arr_8 [i_0] = (~1);
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_21 = (min(var_21, (arr_1 [i_0])));
            var_22 += (((arr_10 [i_0] [i_3]) - (((arr_5 [i_3] [i_3] [i_3]) | (arr_10 [i_0] [i_0])))));
        }
        arr_11 [i_0] = 65535;
    }
    #pragma endscop
}
