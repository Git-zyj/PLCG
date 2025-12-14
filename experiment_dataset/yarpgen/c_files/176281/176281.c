/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_14));
    var_19 = var_4;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = 13;
        arr_3 [i_0] = 34663;
        var_20 = -8;

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_21 = 22413;
            var_22 += 0;
        }
        for (int i_2 = 4; i_2 < 18;i_2 += 1)
        {
            arr_8 [1] [1] &= -1049794825;
            arr_9 [i_0] [i_0] = 2199023124480;
            var_23 = -4;

            for (int i_3 = 2; i_3 < 17;i_3 += 1) /* same iter space */
            {
                arr_12 [i_3] [i_2 - 4] [16] = -22391;
                arr_13 [i_0] [16] [i_0] [i_0] |= 18446741874686427127;
            }
            for (int i_4 = 2; i_4 < 17;i_4 += 1) /* same iter space */
            {
                var_24 = (min(var_24, -22411));
                arr_16 [14] [i_2] [2] [4] = 4;
                arr_17 [i_4] = 20;
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 21;i_5 += 1)
    {
        var_25 ^= 2593052130;
        arr_22 [0] [8] &= 1271802687955161224;
        var_26 = (max(var_26, -32745));
        var_27 = (max(var_27, 17112791674959698688));
        arr_23 [i_5] [4] = 1333952398749852929;
    }
    var_28 -= var_15;
    #pragma endscop
}
