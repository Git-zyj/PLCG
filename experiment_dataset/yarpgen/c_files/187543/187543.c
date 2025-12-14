/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, -var_7));

    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((-(7559833567609688748 < -796540817)));
        var_14 = (+-796540818);
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 8;i_3 += 1)
            {
                {
                    var_15 = ((!((min(0, (!7970))))));
                    arr_13 [i_1 + 1] [i_2] [i_1 + 1] [i_1 + 1] = ((!((max(32704, -796540817)))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 10;i_6 += 1)
                {
                    {
                        var_16 = (!7304556794481216114);
                        arr_20 [i_1] [i_1] [i_1] [i_1] [0] [i_1] = (min((~8465507865559971231), ((min(3954, 1056481005)))));
                    }
                }
            }
        }
    }
    var_17 = max(-11137245296304560180, (1352600858 / 706177067));

    for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
    {
        var_18 = ((~((min(27, 32831)))));
        arr_23 [i_7] [i_7] = (min(-87, 228));
        var_19 = (max(((-(1056481034 % 54960))), (max(216, -7485))));
        arr_24 [i_7] = ((!(((-(max(1250705254275279266, 0)))))));
        arr_25 [i_7] = ((21956 / -1152775789) < (max(18446744073709551593, -21945)));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
    {
        var_20 = 21956;
        var_21 = ((!(!54945)));
        arr_29 [i_8] = (!0);
    }
    #pragma endscop
}
