/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;
    var_21 = (max(var_9, (((var_11 / var_7) << (var_17 - 16536)))));
    var_22 = var_13;
    var_23 = (max((max((-32753 * var_5), (var_6 / var_19))), var_7));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_24 *= (min((var_17 < 0), 1));
        var_25 = (((((~0) || ((max(0, 852247810793560964)))))) > ((((var_1 % var_1) <= (var_10 <= var_14)))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_26 = (-1279463935 ? -3 : 0);
            arr_4 [i_0] = (min((((min(6147696355724417845, var_16)) >> (var_9 && var_10))), (var_3 < -var_6)));
            arr_5 [i_0] [i_0] [i_0] = (max((12299047717985133771 == 0), (max((65519 << 1), var_4))));
        }
    }
    for (int i_2 = 3; i_2 < 16;i_2 += 1)
    {
        arr_8 [i_2] = (max((min((var_12 * 1943173400), ((9820702824541406218 ? 10699 : 18446744073709551615)))), (27249 + 8837000397038685948)));
        arr_9 [i_2] = ((((var_7 >> (var_15 - 6773420743379397264))) > (2147483647 >= -8837000397038685949)));
        var_27 = 21085;
    }
    #pragma endscop
}
