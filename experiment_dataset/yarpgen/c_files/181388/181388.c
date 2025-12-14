/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 = (((min(13235, var_13))));

        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            arr_5 [i_1] = ((!((((((arr_3 [i_1] [i_1] [i_1]) < (arr_3 [i_0] [i_0] [i_1]))) ? ((46910 ? -9223372036854775805 : 1249944623)) : (((-1 ? 648087374 : -1))))))));
            arr_6 [i_0] [i_0] [i_1] = ((min((((287225987 != (arr_4 [i_0] [i_1])))), (arr_1 [7]))) / ((-(max((arr_2 [i_0] [i_1 - 1]), 1)))));
            arr_7 [i_0] = (arr_2 [i_0] [i_1]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_17 = (min(var_17, (arr_9 [i_3] [i_1] [i_0])));
                        arr_12 [i_3] [i_1 + 1] [i_3] [i_2] [i_3] [i_3] = 6897140725583279301;
                    }
                }
            }
        }
    }
    for (int i_4 = 4; i_4 < 23;i_4 += 1)
    {
        var_18 *= (max((((((max(var_4, 52525))) ? (254 < 11) : var_8))), (arr_13 [i_4])));
        var_19 = (min(var_19, var_14));
    }
    var_20 *= var_8;
    var_21 = (max((((-1294191905 == 21194) ? var_9 : 852785988)), -26368));
    var_22 ^= var_10;
    #pragma endscop
}
