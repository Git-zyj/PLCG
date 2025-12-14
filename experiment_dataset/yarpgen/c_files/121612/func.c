/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121612
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
    var_14 = ((/* implicit */unsigned char) (unsigned short)65535);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_1 - 2] [i_1 + 2])))))));
            arr_5 [i_1] [i_0] = ((/* implicit */long long int) ((((arr_2 [i_1 - 2] [i_1 + 1]) + (2147483647))) << (((arr_1 [i_1 - 1]) - (1137797785)))));
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                arr_8 [i_0] [i_0] [(signed char)0] [i_2] = (unsigned char)63;
                var_16 *= ((/* implicit */signed char) (((+(((/* implicit */int) (unsigned char)94)))) << (((((/* implicit */int) (unsigned short)0)) / (((/* implicit */int) (unsigned short)46114))))));
                var_17 = ((((/* implicit */unsigned long long int) arr_2 [i_1] [i_1 + 1])) ^ (((var_7) / (var_11))));
                arr_9 [i_0] [i_1 - 2] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)63))));
                var_18 -= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_6 [i_1] [i_2])) ? (((/* implicit */int) (unsigned short)46113)) : (((/* implicit */int) (_Bool)1))))));
            }
        }
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            arr_13 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)19422))));
            arr_14 [i_0] [i_0] = ((/* implicit */long long int) arr_6 [i_3] [i_0]);
            var_19 = ((/* implicit */unsigned char) ((var_4) ? (((/* implicit */unsigned long long int) arr_10 [i_3] [i_0])) : (((var_10) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31)))))));
        }
        for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                arr_19 [i_0] [i_4] = ((/* implicit */unsigned int) ((arr_1 [i_4]) / (arr_1 [i_5])));
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) & ((+(var_2))))))));
                var_21 = ((/* implicit */int) min((var_21), (((arr_10 [i_0] [i_4]) / (arr_10 [i_0] [i_5])))));
                arr_20 [i_0] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (8829168108030127787LL))));
                /* LoopSeq 2 */
                for (unsigned int i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    arr_25 [i_0] [i_4] [i_5] [i_0] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)46114)) || (((/* implicit */_Bool) (unsigned short)46128))));
                    arr_26 [i_0] [i_4] [i_5] [i_4] = ((/* implicit */int) ((var_7) / (((8718461574497811309ULL) << (((/* implicit */int) (unsigned short)0))))));
                }
                for (unsigned int i_7 = 1; i_7 < 11; i_7 += 3) 
                {
                    arr_30 [i_0] [i_4] [i_4] [i_4] [i_4] [5] = ((/* implicit */short) (+(((int) var_11))));
                    var_22 = ((/* implicit */unsigned int) arr_18 [i_7] [i_7 - 1] [i_7 - 1] [i_0]);
                    var_23 -= ((/* implicit */unsigned short) var_3);
                    var_24 += ((/* implicit */signed char) ((((var_2) ^ (((/* implicit */int) var_4)))) % (((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */int) (unsigned short)19422)) : (((/* implicit */int) (unsigned char)1))))));
                    arr_31 [i_0] [i_5] = ((/* implicit */unsigned int) (_Bool)1);
                }
            }
            for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
            {
                arr_34 [i_0] [i_4] [i_8 + 1] = ((/* implicit */unsigned char) (unsigned short)19444);
                /* LoopSeq 2 */
                for (signed char i_9 = 0; i_9 < 12; i_9 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (int i_10 = 3; i_10 < 11; i_10 += 1) /* same iter space */
                    {
                        var_25 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1))) & (var_5)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))));
                        arr_40 [i_4] |= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_8 + 1])) < (((/* implicit */int) arr_23 [i_10] [i_9] [i_4] [i_0])))));
                    }
                    for (int i_11 = 3; i_11 < 11; i_11 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), ((-(347747458550162404ULL)))));
                        var_27 -= ((/* implicit */unsigned int) var_3);
                        var_28 = ((/* implicit */short) arr_21 [i_8] [i_8] [i_0] [i_8] [i_8] [(short)1]);
                        arr_43 [i_0] = ((/* implicit */long long int) arr_10 [i_0] [i_8 + 1]);
                    }
                    arr_44 [i_4] [i_9] [i_9] [i_8] [i_4] [i_9] |= ((/* implicit */int) arr_39 [i_0] [i_4] [i_4] [i_4] [i_8 + 1] [i_9]);
                    var_29 -= ((/* implicit */unsigned long long int) ((signed char) arr_10 [i_8 + 1] [i_8 + 1]));
                }
                for (signed char i_12 = 0; i_12 < 12; i_12 += 2) /* same iter space */
                {
                    arr_47 [i_0] [4ULL] [i_0] [i_8] [i_12] = ((/* implicit */signed char) arr_32 [i_0] [i_12] [i_8]);
                    arr_48 [i_0] [9] [i_4] [i_0] = ((/* implicit */unsigned int) ((short) arr_35 [i_0] [i_8 + 1] [i_0] [i_4] [i_8] [i_12]));
                    arr_49 [i_0] [i_12] [1ULL] [1ULL] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_3))));
                }
                arr_50 [i_0] [i_8] = ((/* implicit */_Bool) var_8);
                var_30 ^= ((/* implicit */short) (~(((/* implicit */int) arr_23 [i_4] [i_8] [i_8 + 1] [i_8]))));
            }
            arr_51 [i_0] [i_0] = -8829168108030127795LL;
            var_31 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) 1515773259)) || (((/* implicit */_Bool) (unsigned char)135)))))));
            arr_52 [i_0] [i_0] [i_4] = ((/* implicit */_Bool) var_10);
        }
        arr_53 [i_0] = ((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)120))));
        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)193)) >> (((((/* implicit */int) (unsigned short)46113)) - (46100)))));
        arr_54 [(unsigned short)8] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (unsigned char)2)))))) : (var_6)));
    }
    var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))), (((unsigned int) (!(((/* implicit */_Bool) var_5))))))))));
}
