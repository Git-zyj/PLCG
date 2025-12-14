/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_2 ^ ((min(32736, var_1))));
    var_20 = 65535;
    var_21 = (((var_10 % -47) % 13835058055282163712));
    var_22 += ((((min((~150), 19))) && var_6));

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] &= (min((max((arr_1 [i_0]), (arr_0 [i_0]))), (min((arr_1 [i_0]), var_16))));
        var_23 ^= (-32731 <= var_2);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_11 [10] [i_1] [i_4] [i_1] = (((0 ^ (arr_10 [i_1] [i_1] [i_1] [i_1]))) & (((var_1 >= ((min(var_16, var_3)))))));
                        var_24 = (max(var_24, (!1375278270)));
                        var_25 += (!65534);
                        arr_12 [i_4] [i_2] [i_1] = var_14;
                        var_26 ^= (((((151 ? var_0 : 4135051282))) ? ((max((arr_4 [i_2]), var_14))) : (min(-32736, 250))));
                    }
                }
            }
        }
        arr_13 [i_1] = var_7;
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
    {
        var_27 = (((((-1 - -32755) + -var_6)) != ((((min(var_1, -100)))))));
        var_28 = (min(var_28, ((((arr_4 [12]) ^ ((min(var_13, var_3))))))));
        arr_16 [i_5] &= (arr_10 [i_5] [i_5] [i_5] [i_5]);
    }
    #pragma endscop
}
