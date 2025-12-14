/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((min((var_1 & 1), (min(var_10, 16)))) < ((var_4 ? var_10 : 1139776777)));
    var_13 = (min(var_13, ((min(-var_9, var_11)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 = ((~(!32767)));
                    arr_8 [i_0] [i_1] [i_0] |= ((arr_5 [1] [i_1 + 2] [i_2]) ? (~1) : (arr_5 [i_0] [i_0] [i_2]));
                    arr_9 [i_0] = 1;
                }
            }
        }
        arr_10 [16] = (arr_3 [i_0]);
        arr_11 [i_0] [i_0] = (~1);
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_15 = 58408;
        arr_14 [i_3] = (!((((arr_0 [i_3] [i_3]) * 1))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        arr_19 [i_4] = (arr_15 [i_4]);
        arr_20 [i_4] = ((~(min(-8439, (((-1139776781 + 2147483647) >> (5706 - 5705)))))));
        var_16 = (!0);
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 12;i_5 += 1)
    {
        var_17 = 8439;
        arr_24 [i_5] [i_5 + 1] = ((-8417 ? 1 : 1));
    }
    var_18 *= ((var_10 ? (((!((min(53275, 1)))))) : (((min(var_4, var_3)) | ((1 << (var_9 + 1268186968)))))));
    #pragma endscop
}
