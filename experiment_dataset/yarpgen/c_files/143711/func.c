/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143711
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            arr_7 [i_1] [(short)3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)3072)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_4 [i_1] [i_0])))) / (((/* implicit */int) (unsigned char)68))));
            var_11 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)3061))));
            var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0])) && (((/* implicit */_Bool) -1777373399)))))));
            var_13 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)3086)) + (((/* implicit */int) arr_1 [i_0])))))));
        }
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-3049)) * (((/* implicit */int) (unsigned char)3))));
        arr_8 [i_0] [i_0] = ((short) 1777373391);
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_2])) ? (var_2) : (((/* implicit */int) arr_9 [i_2]))));
        var_15 = ((/* implicit */_Bool) ((arr_10 [i_2] [i_2]) / (((/* implicit */int) var_8))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            arr_19 [(unsigned char)24] [i_4] [i_4] = ((/* implicit */_Bool) (-(((((/* implicit */int) arr_13 [(unsigned char)17])) | (((/* implicit */int) arr_9 [i_3]))))));
            var_16 = ((/* implicit */signed char) (+(((/* implicit */int) var_1))));
            arr_20 [i_4] = ((/* implicit */unsigned char) ((unsigned long long int) arr_14 [i_3]));
        }
        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            /* LoopSeq 2 */
            for (long long int i_6 = 2; i_6 < 24; i_6 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_7 = 1; i_7 < 24; i_7 += 2) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */int) ((long long int) (short)25846));
                            arr_30 [i_3] [i_5] [i_6] [(signed char)8] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_25 [i_3] [(short)12] [i_3])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-3068))))));
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_5] [16LL]))) / (((((/* implicit */long long int) -1777373408)) ^ (arr_15 [i_3] [i_5])))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (~((+(arr_25 [i_6 - 1] [i_5] [i_3]))))))));
            }
            for (unsigned char i_9 = 1; i_9 < 24; i_9 += 3) 
            {
                var_20 = ((/* implicit */unsigned short) arr_18 [i_5] [i_9 + 1]);
                var_21 |= ((/* implicit */unsigned long long int) ((unsigned int) arr_16 [i_9 - 1] [i_9 + 1] [0ULL]));
                /* LoopSeq 2 */
                for (unsigned char i_10 = 0; i_10 < 25; i_10 += 4) 
                {
                    arr_37 [(unsigned char)5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3065))) % (arr_27 [(_Bool)1] [i_9 - 1] [0U] [i_9 - 1] [i_10] [i_9 - 1])));
                    /* LoopSeq 3 */
                    for (int i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_39 [(_Bool)1] [i_9 - 1] [i_9] [14]))));
                        arr_40 [i_3] [i_3] [i_3] [i_3] [12U] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_9 + 1])) ? (((/* implicit */int) arr_9 [i_11])) : ((+(((/* implicit */int) (_Bool)1))))));
                    }
                    for (unsigned char i_12 = 2; i_12 < 23; i_12 += 4) 
                    {
                        var_23 = ((/* implicit */int) ((((/* implicit */int) var_7)) >= (arr_42 [i_9 + 1] [(_Bool)1] [i_12 - 2] [i_12 - 1] [(unsigned char)19] [i_12 - 1])));
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)1)))) <= (((((/* implicit */_Bool) 0U)) ? (arr_14 [i_12]) : (arr_22 [i_3] [i_3])))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned short) 4294967295U);
                        var_26 = ((/* implicit */unsigned char) arr_27 [i_9 + 1] [i_9] [8ULL] [12U] [i_10] [i_9 + 1]);
                        arr_46 [i_3] [i_5] [i_3] [(short)14] [i_9] [i_5] [18LL] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (((_Bool)1) ? (-1143743513211924228LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)8)))))) - (((((/* implicit */unsigned long long int) 2U)) % (var_10)))));
                    }
                    var_27 = ((/* implicit */short) arr_13 [(short)21]);
                }
                for (int i_14 = 0; i_14 < 25; i_14 += 2) 
                {
                    var_28 = ((/* implicit */int) ((unsigned int) (~(((/* implicit */int) (short)-3069)))));
                    var_29 = ((/* implicit */_Bool) (unsigned char)164);
                }
                arr_51 [i_3] [i_5] [i_5] [i_9] = ((/* implicit */unsigned int) arr_15 [i_9] [i_9 - 1]);
            }
            var_30 = ((/* implicit */unsigned int) var_1);
            var_31 = ((/* implicit */int) ((unsigned short) arr_50 [i_3] [i_5] [i_3] [(short)17] [i_3] [i_5]));
            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)3074)) ? (((/* implicit */int) (short)3072)) : (((/* implicit */int) arr_32 [i_5] [i_3] [i_3]))));
        }
        var_33 = ((/* implicit */long long int) (-(4294967267U)));
    }
    var_34 &= var_0;
    var_35 = var_5;
    var_36 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) var_4)), (((2U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)3101)))))));
}
