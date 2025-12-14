/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_11 = (min(((127 ? (arr_1 [i_0]) : (arr_1 [i_0]))), (((((arr_0 [i_0]) ? var_10 : -99)) | (arr_1 [i_0])))));
        var_12 = (max(var_12, (((var_8 || (((-1018863839 ? -74 : -1979147124))))))));

        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_0] = arr_4 [i_0] [i_0] [i_1];
            var_13 = (min(var_13, ((((max(var_7, (arr_2 [i_1 - 1] [i_1 + 1] [i_1 - 4]))) - (((-109 ? (arr_2 [i_1 - 3] [i_1 + 1] [i_1 - 4]) : (arr_2 [i_1 - 2] [i_1 + 1] [i_1 - 1])))))))));

            /* vectorizable */
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    var_14 = (max(var_14, (arr_4 [i_0] [i_0] [i_0])));
                    arr_14 [i_0] [i_1 + 1] [i_0] [i_3] &= var_5;
                    var_15 = (((arr_6 [i_3] [i_1] [i_2 - 2]) << (arr_6 [i_0] [i_1 - 1] [i_2 + 1])));
                }
                arr_15 [i_0] [i_0] [i_2] [i_0] = (((arr_6 [i_0] [i_0] [i_0]) ? (arr_6 [i_0] [i_1 - 2] [i_2]) : (arr_6 [i_0] [i_1] [i_2 - 1])));
                var_16 += (((arr_4 [0] [i_1 + 1] [0]) % var_3));
            }
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_17 ^= (((-1018863839 ^ -3649397656929533517) ? (max((arr_18 [i_0]), -3649397656929533500)) : ((((arr_0 [i_4]) | 142)))));
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 22;i_6 += 1)
                {
                    {
                        var_18 += ((((((var_6 > var_2) / ((var_6 ? var_0 : 3670016))))) ? var_8 : (arr_0 [i_0])));
                        arr_24 [i_0] &= (max((max(255, ((var_3 ? 1 : 32767)))), (((((min((arr_10 [0] [i_5] [i_4] [i_0]), var_5))) || (!var_1))))));
                        var_19 += 665882992930939576;
                    }
                }
            }
            var_20 += (((((var_0 >= (((var_2 ^ (arr_20 [i_0] [i_0] [i_4]))))))) % (max(-74, -1018863817))));

            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                arr_27 [i_0] [i_0] [12] &= (arr_9 [i_0] [i_0] [i_4] [i_7]);
                var_21 ^= ((+(max((arr_4 [i_0] [i_4] [i_7]), (arr_2 [i_0] [i_4] [i_0])))));
            }
        }
    }
    var_22 = ((1 ? (max(var_0, var_9)) : (((var_6 ? (min(var_9, 1720508886)) : (var_6 ^ var_7))))));
    var_23 = (((((var_8 || var_6) >= var_5)) ? (~var_6) : ((var_0 ? var_7 : var_8))));
    #pragma endscop
}
