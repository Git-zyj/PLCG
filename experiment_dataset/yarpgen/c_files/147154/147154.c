/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_15;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-1 * (255 + 7)));
        arr_3 [i_0] = (((var_0 || var_8) < 14));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                {
                    arr_13 [i_1] = (((22 && 0) << ((((min(40983, -79))) - 40961))));
                    arr_14 [i_1] = (min((min(24553, -4325377804964259089)), ((var_16 % (arr_10 [i_1])))));
                    arr_15 [i_1] [i_2] [i_3] = (min((max(var_14, 2419073582312166227)), ((((arr_6 [i_1] [i_1] [i_3 - 1]) != 40983)))));
                    var_20 = (max(var_20, ((((((((((arr_7 [i_1] [16]) ^ var_2))) | (((arr_4 [i_1]) & 14)))) + 9223372036854775807)) << (((((min((arr_7 [i_1] [18]), (((arr_11 [i_1] [i_1]) << (var_6 - 1705484704769879739))))) + 26133)) - 30))))));
                }
            }
        }
        arr_16 [i_1] [i_1] = (max(((max((max(255, -51)), -9))), (17 | 18446744073709551615)));
        arr_17 [i_1] = (max((((((min(104, (arr_11 [i_1] [i_1])))) + (0 != var_1)))), (8191 & -3730413862783596075)));
    }
    var_21 = var_1;
    #pragma endscop
}
