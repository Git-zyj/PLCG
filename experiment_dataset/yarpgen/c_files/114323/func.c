/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114323
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
    var_11 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 551202086)) ? (var_2) : (((/* implicit */int) ((((/* implicit */_Bool) (short)8)) && (((/* implicit */_Bool) 551202087)))))));
    var_12 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)93)) & (((/* implicit */int) (_Bool)1)))) - (var_6)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) (unsigned short)65535);
                                arr_12 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) arr_3 [i_0] [i_0]))) * ((+(((/* implicit */int) var_10))))))) ? (((((/* implicit */_Bool) arr_5 [i_4] [i_3 + 1] [i_1] [i_0])) ? (((((/* implicit */int) (unsigned char)9)) & (((/* implicit */int) (unsigned short)65535)))) : (arr_11 [i_3] [i_3] [i_3 + 1] [i_3 + 1] [i_3] [i_3] [i_3 + 1]))) : (max((((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_5 [i_0] [(unsigned short)7] [i_2] [(unsigned short)7]) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))), (((/* implicit */int) ((short) (unsigned char)75)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            var_14 = ((/* implicit */long long int) ((signed char) arr_10 [i_2] [i_0]));
                            var_15 = ((/* implicit */unsigned short) arr_0 [i_0] [(short)0]);
                            arr_17 [i_0] [i_1] [i_2] [i_5] [i_6] &= ((/* implicit */short) ((_Bool) arr_3 [i_2] [i_2]));
                        }
                        for (long long int i_7 = 4; i_7 < 9; i_7 += 1) 
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_1] [i_2] [i_5] [i_7])) ? (((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [i_5] [i_0] [i_7])) : (((/* implicit */int) arr_6 [i_1] [i_1]))));
                            var_16 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_8 [i_7 - 3] [i_0] [i_2] [i_2] [i_0] [i_0])))) && (((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_2] [i_1] [i_7 + 1] [i_5]))));
                            arr_22 [i_0] [i_7] [i_2] [i_7] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_7] [i_7 + 3] [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */int) arr_8 [i_7] [i_7 + 3] [i_7] [i_7 + 3] [i_7] [i_7])) : (((/* implicit */int) var_4))));
                        }
                        arr_23 [i_0] [i_2] [i_5] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0]))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 13; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 13; i_9 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((arr_11 [i_9] [i_2] [i_8] [i_8] [i_2] [i_0] [i_0]) + (((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [i_8])))) : (((((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) arr_0 [i_0] [i_0]))))) >> (((/* implicit */int) ((((/* implicit */int) arr_14 [i_8] [i_8] [i_8] [(_Bool)1])) != (((/* implicit */int) var_4)))))))));
                                arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)112)) / (((/* implicit */int) (_Bool)1))));
                                var_18 = ((/* implicit */unsigned short) (((~(((/* implicit */int) (unsigned char)75)))) & (((((/* implicit */int) (unsigned char)181)) | (arr_20 [i_0] [i_1] [i_2] [i_8] [i_1] [i_8] [i_9])))));
                            }
                        } 
                    } 
                    arr_31 [i_0] [i_1] [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_0])) & (((/* implicit */int) arr_7 [i_0] [i_1] [i_1]))))) ? (((((/* implicit */_Bool) arr_19 [(unsigned char)10] [i_2] [i_1] [5] [5] [i_0])) ? (arr_28 [i_2] [i_1] [i_0] [i_0] [i_1] [i_1]) : ((-(var_8))))) : (((/* implicit */long long int) ((/* implicit */int) (((!(arr_14 [i_0] [i_0] [i_2] [i_0]))) && ((!(((/* implicit */_Bool) var_3)))))))));
                    arr_32 [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (arr_1 [i_0]) : (((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [i_2] [i_1] [i_1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_0] [i_2] [i_2] [i_1] [(unsigned char)8] [i_1]))))) : (arr_1 [i_2])));
                }
            } 
        } 
    } 
}
