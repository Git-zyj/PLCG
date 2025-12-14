/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_14 = (min(((100 ? -1909243094789856775 : 112)), (arr_5 [i_0] [i_1] [i_1])));
                var_15 = (max(var_15, var_9));
                var_16 = (((!-5837370351489823766) ? var_1 : 100));
                var_17 ^= (max((+-230), ((((max(1, var_13))) ? (((arr_4 [i_1] [6] [i_1]) ? 12 : (arr_5 [i_0] [i_1] [i_1]))) : (!5)))));
            }
        }
    }
    var_18 = (!16);

    for (int i_2 = 4; i_2 < 20;i_2 += 1)
    {
        var_19 = ((var_13 ? ((~(var_1 | var_12))) : var_13));
        var_20 *= (max((max(164, -249)), ((min(var_2, ((min(1, (arr_9 [16])))))))));
    }
    for (int i_3 = 1; i_3 < 23;i_3 += 1)
    {
        var_21 = (max(9223372036854775799, var_8));
        var_22 = (max(var_22, ((((arr_13 [i_3]) % ((0 ? 2914422099 : 1308905594368204244)))))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    {
                        arr_26 [23] [i_3] [i_5] [i_5] = ((-((~(1 < 3)))));
                        arr_27 [i_6] [i_3] [i_5] [i_3] [i_3] = (max((min(var_6, ((27 ? 48803 : 1308905594368204248)))), ((max(((2914422110 ? 4294967267 : 251)), -92)))));
                        var_23 = (max(var_11, (min(var_0, (max((arr_22 [i_6] [i_3] [i_3]), (arr_20 [i_4])))))));
                        var_24 = (min(var_24, -2847835456226378392));
                    }
                }
            }
        }
    }
    #pragma endscop
}
