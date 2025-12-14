/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122863
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
    var_16 *= ((/* implicit */signed char) var_6);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_17 *= (!(max((((((/* implicit */_Bool) (unsigned short)4)) || (((/* implicit */_Bool) arr_1 [i_0])))), (arr_0 [i_0]))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2] [i_0])) ? (((arr_0 [i_0]) ? (arr_3 [i_2]) : (((/* implicit */unsigned long long int) arr_1 [i_2])))) : ((((~(arr_3 [i_0]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_2] [(unsigned short)9])))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        arr_10 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_0] [i_1] [i_2] [i_1]))) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)70)) / (1806845548))))));
                        arr_11 [i_0] = ((/* implicit */short) ((unsigned long long int) min((max((((/* implicit */short) arr_0 [1ULL])), (arr_6 [i_0] [i_1] [(signed char)16] [(signed char)16]))), (((/* implicit */short) arr_2 [i_0] [i_0] [i_0])))));
                    }
                    arr_12 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) 8978647006137797094LL);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 2) 
        {
            var_18 = ((/* implicit */unsigned short) arr_15 [i_5]);
            var_19 = ((((/* implicit */_Bool) arr_13 [i_5])) ? (((/* implicit */int) (short)-7767)) : (((/* implicit */int) arr_13 [i_5])));
            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((unsigned long long int) arr_18 [i_4] [i_5])))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 3) 
        {
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_25 [i_4] [i_4] = ((/* implicit */unsigned long long int) var_1);
                    arr_26 [i_4] [i_4] = var_2;
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_7 - 1] [i_6] [i_4])) && (((/* implicit */_Bool) (signed char)33))));
                    arr_27 [i_4] [i_4] [i_4] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_17 [i_7 - 1] [i_7 - 1])) : (((/* implicit */int) arr_17 [i_7 - 1] [i_7 - 1]))));
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 22; i_8 += 1) 
                    {
                        for (short i_9 = 0; i_9 < 25; i_9 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) == (var_12))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-34)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0))))))))));
                                var_23 &= ((/* implicit */unsigned int) ((arr_32 [i_7 - 1] [i_9] [(signed char)24] [i_8 - 4] [i_8 - 4]) * (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (-9223372036854775807LL - 1LL)))))));
                                arr_33 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) var_8);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_10 = 0; i_10 < 25; i_10 += 4) 
        {
            for (signed char i_11 = 0; i_11 < 25; i_11 += 2) 
            {
                {
                    var_24 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) - (var_7)));
                    arr_39 [i_4] [i_10] [i_4] = arr_15 [i_10];
                    arr_40 [i_4] [i_4] [i_11] = ((/* implicit */_Bool) var_6);
                }
            } 
        } 
        var_25 = ((/* implicit */_Bool) ((short) arr_21 [i_4] [i_4] [i_4]));
    }
}
