/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (((((min(65535, var_4)))) / 11));
    var_13 = (max(var_13, 38647));
    var_14 *= ((var_6 >= (--0)));

    for (int i_0 = 4; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_15 *= var_6;
        var_16 = (min(var_16, var_1));
        var_17 |= (!-592);
    }
    for (int i_1 = 4; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_18 |= (((~7055) / (((!1577545895) ? ((1 ? 9223372036854775778 : 7056)) : ((11778 ? var_9 : var_3))))));
        var_19 ^= ((var_8 ? ((2147483648 ? var_5 : 128)) : (!64)));
        arr_7 [i_1] |= var_10;
    }

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_20 = (max(var_20, (((((min((~-10541), (27917 ^ var_11)))) ? (((((15042818930826159853 ? 13821 : -10522))) ? 112 : ((23999 ? 37608 : 5470)))) : ((((14135 / 127) >= (var_8 * 1023)))))))));
        var_21 ^= (((591 ? -1577545903 : 24019)));
    }
    #pragma endscop
}
