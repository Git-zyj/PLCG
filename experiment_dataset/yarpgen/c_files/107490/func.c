/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107490
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_11 -= ((/* implicit */signed char) max((((((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) || (((/* implicit */_Bool) var_6))))) >> (((((/* implicit */int) (short)-9334)) + (9356))))), (((/* implicit */int) var_4))));
    var_12 = 7U;
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((arr_1 [i_0]) << (((((((/* implicit */int) (short)-25944)) + (25987))) - (43)))));
        arr_4 [i_0] [i_0] = arr_2 [i_0];
    }
    for (signed char i_1 = 3; i_1 < 15; i_1 += 4) 
    {
        var_13 = ((/* implicit */unsigned short) ((arr_1 [(unsigned short)2]) >> (((((/* implicit */int) (short)9353)) & (((/* implicit */int) arr_6 [i_1]))))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            arr_12 [i_1] [(unsigned short)2] [(unsigned short)14] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_8 [i_1]))));
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                for (int i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    {
                        arr_18 [(short)9] [(unsigned char)7] = ((/* implicit */unsigned int) 1750458537678715562ULL);
                        var_14 = ((/* implicit */_Bool) min((var_14), (arr_6 [i_1])));
                        var_15 = ((/* implicit */unsigned char) ((arr_9 [i_1]) > (((/* implicit */long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) * (0U))))))));
                    }
                } 
            } 
        }
        arr_19 [(unsigned short)5] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [5LL]))) >= (max((0ULL), (((/* implicit */unsigned long long int) arr_15 [i_1] [i_1] [i_1 + 2] [i_1])))))))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 2; i_5 < 23; i_5 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_21 [i_5 - 1]))));
        var_17 -= ((/* implicit */unsigned int) arr_21 [i_5]);
        arr_22 [i_5] = ((/* implicit */long long int) ((0U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_5] [i_5 - 1])))));
    }
    var_18 = ((/* implicit */int) 4294967295U);
    var_19 += (short)-9334;
}
