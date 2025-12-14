/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181990
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
    var_15 = ((short) var_11);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            {
                var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (4294967268U) : (((/* implicit */unsigned int) var_9))))) ? (((/* implicit */int) ((3431966080U) > (1227486367U)))) : (((/* implicit */int) ((short) var_14))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 2; i_2 < 11; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 4; i_3 < 11; i_3 += 4) 
                    {
                        arr_9 [i_1] [i_3] [(short)12] [i_1] [i_1] [i_1] = ((arr_3 [i_1 + 2] [i_1] [i_3 - 2]) & (arr_3 [i_1 + 2] [i_1] [i_3 - 2]));
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 4; i_4 < 10; i_4 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2 + 1] [i_3 - 4] [i_3 - 4] [i_4 - 1] [i_4])) ? (arr_6 [i_0] [i_4 + 2] [i_0] [i_3 + 1]) : (((/* implicit */long long int) -1815697219))));
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_2])) ? (arr_7 [i_3] [i_1 - 2] [i_3]) : (arr_7 [i_2] [12] [i_4]))))));
                            var_19 = ((/* implicit */unsigned char) ((long long int) var_12));
                            arr_14 [i_0] [i_1] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((unsigned short) (unsigned char)223))) : (((/* implicit */int) arr_0 [i_1 - 3]))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) 
                        {
                            arr_18 [i_0] [i_0] [i_1] [i_3] [i_3] [(short)2] = ((/* implicit */unsigned int) var_0);
                            var_20 = ((/* implicit */unsigned int) ((unsigned short) arr_17 [i_3] [i_5]));
                            var_21 = ((/* implicit */unsigned int) ((unsigned short) 1023ULL));
                        }
                    }
                    for (unsigned short i_6 = 1; i_6 < 12; i_6 += 4) 
                    {
                        var_22 |= ((/* implicit */short) 13U);
                        arr_21 [i_6] [i_1] [i_6] [i_1] [i_1 - 1] [i_6] = (i_1 % 2 == zero) ? (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) (short)11342)) << (((((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_2] [i_2 + 1] [i_6 - 1])) + (9386))))))) : (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) (short)11342)) << (((((((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_2] [i_2 + 1] [i_6 - 1])) + (9386))) - (19445)))))));
                    }
                    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_1 - 3] [i_1 - 2] [i_2 - 2] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2179204788U)) ? (arr_4 [i_0] [i_1 + 1] [i_2]) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_2] [(short)5]))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                }
                /* vectorizable */
                for (int i_7 = 4; i_7 < 11; i_7 += 2) 
                {
                    var_24 = ((/* implicit */_Bool) var_6);
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 11; i_8 += 2) 
                    {
                        for (unsigned int i_9 = 1; i_9 < 10; i_9 += 3) 
                        {
                            {
                                var_25 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_19 [i_0] [i_1 + 1] [i_7 - 1] [i_7])) : (((/* implicit */int) arr_27 [i_1 - 2] [i_0] [i_8] [i_8 + 2]))));
                                arr_30 [i_0] [i_1 + 1] [i_7] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) 28U))));
                                var_26 = ((/* implicit */int) ((unsigned int) ((((/* implicit */int) arr_0 [i_9])) != (((/* implicit */int) (_Bool)1)))));
                                var_27 ^= ((/* implicit */unsigned int) ((int) arr_19 [i_0] [i_1 + 1] [i_1 + 1] [i_7]));
                            }
                        } 
                    } 
                    var_28 ^= ((/* implicit */unsigned long long int) ((-150870916) - (((/* implicit */int) (((-9223372036854775807LL - 1LL)) > (((/* implicit */long long int) 32U)))))));
                    arr_31 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 523205084U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1405))) : (27U)))) ? (((((/* implicit */_Bool) 5369022271753269350ULL)) ? (var_8) : (arr_29 [i_0] [i_0] [i_0] [(unsigned char)1] [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 - 3] [i_1])))));
                    arr_32 [i_0] [i_1] [7U] [i_7] = ((/* implicit */long long int) ((unsigned short) arr_20 [i_1]));
                }
                var_29 *= ((/* implicit */unsigned char) arr_7 [12LL] [i_1] [(_Bool)1]);
                var_30 = ((/* implicit */int) (-9223372036854775807LL - 1LL));
            }
        } 
    } 
    var_31 = 140737488355327ULL;
}
