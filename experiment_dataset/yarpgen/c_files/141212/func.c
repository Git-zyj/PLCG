/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141212
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
    var_15 = ((/* implicit */_Bool) var_10);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */int) (~(((((/* implicit */_Bool) var_10)) ? (arr_1 [i_0] [i_0]) : (var_2)))));
        arr_3 [i_0] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) 11550769387650318724ULL)))))));
        var_16 = ((((/* implicit */_Bool) arr_1 [17] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_0 [i_0]))))) : (((/* implicit */int) var_14)));
    }
    for (short i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 1; i_2 < 24; i_2 += 1) 
        {
            var_17 = ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_2])) / (((/* implicit */int) var_8))));
            arr_10 [i_2] [i_2] [i_2 - 1] = ((/* implicit */unsigned char) (_Bool)1);
            var_18 &= ((/* implicit */short) ((max((6895974686059232870ULL), (((/* implicit */unsigned long long int) -1720209257)))) <= (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((int) 6895974686059232870ULL))), (((unsigned int) 11550769387650318723ULL)))))));
        }
        /* vectorizable */
        for (unsigned int i_3 = 1; i_3 < 21; i_3 += 1) /* same iter space */
        {
            arr_13 [i_3 + 1] = ((/* implicit */long long int) (((((_Bool)1) ? (((/* implicit */unsigned int) var_13)) : (1679825685U))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3] [i_3 + 3])))));
            var_19 = ((/* implicit */unsigned long long int) ((int) ((536608768) == (((/* implicit */int) var_12)))));
        }
        for (unsigned int i_4 = 1; i_4 < 21; i_4 += 1) /* same iter space */
        {
            var_20 += ((/* implicit */unsigned short) arr_6 [i_1] [i_4]);
            arr_18 [(unsigned short)13] [15LL] [i_4] = ((/* implicit */long long int) var_5);
        }
        var_21 = ((/* implicit */long long int) var_3);
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_6 = 1; i_6 < 18; i_6 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 3; i_7 < 20; i_7 += 1) 
            {
                var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_16 [i_6 + 2] [i_6 + 3]))));
                arr_26 [i_7] [i_6] = ((/* implicit */unsigned long long int) ((unsigned char) (_Bool)1));
            }
            arr_27 [i_6] [i_6] = ((/* implicit */unsigned int) arr_4 [i_6 + 3] [i_6 + 3]);
            /* LoopNest 3 */
            for (unsigned long long int i_8 = 2; i_8 < 18; i_8 += 1) 
            {
                for (unsigned short i_9 = 0; i_9 < 21; i_9 += 2) 
                {
                    for (unsigned int i_10 = 2; i_10 < 19; i_10 += 1) 
                    {
                        {
                            var_23 = (short)-17179;
                            arr_37 [19LL] [i_6] [i_5] [i_9] [i_6] = ((/* implicit */_Bool) ((int) arr_16 [i_6 + 2] [i_8 + 2]));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -536608768))));
            var_25 = ((((/* implicit */_Bool) arr_20 [i_5] [i_5])) ? (((/* implicit */int) arr_20 [i_5] [i_6 + 2])) : (((/* implicit */int) arr_20 [i_5] [i_6 + 2])));
        }
        arr_38 [i_5] = ((/* implicit */_Bool) var_12);
        arr_39 [i_5] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (7565275513589957329LL) : (arr_31 [i_5] [i_5]))))));
        arr_40 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)31209)) ? (((/* implicit */unsigned long long int) 1545965294383975437LL)) : (15037716955394581154ULL)))) || (((/* implicit */_Bool) -5840619846549790466LL))));
    }
    for (short i_11 = 0; i_11 < 20; i_11 += 2) 
    {
        arr_43 [i_11] = ((/* implicit */short) ((((((/* implicit */int) arr_7 [i_11] [i_11])) | (((/* implicit */int) arr_7 [i_11] [i_11])))) + (((/* implicit */int) max((arr_7 [i_11] [i_11]), (arr_7 [i_11] [i_11]))))));
        arr_44 [i_11] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(arr_1 [i_11] [i_11])))) / ((~(arr_4 [i_11] [i_11])))));
        arr_45 [i_11] = ((/* implicit */unsigned short) var_12);
        /* LoopNest 2 */
        for (int i_12 = 2; i_12 < 17; i_12 += 4) 
        {
            for (unsigned char i_13 = 0; i_13 < 20; i_13 += 2) 
            {
                {
                    arr_51 [i_13] [i_13] [i_12 + 3] [i_11] = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_14)), (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) -775712598)), (arr_1 [i_12] [i_12])))), (arr_15 [i_11] [i_12 + 1])))));
                    var_26 = ((/* implicit */unsigned int) 6895974686059232892ULL);
                    var_27 *= ((/* implicit */signed char) var_8);
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 20; i_14 += 4) 
                    {
                        for (unsigned int i_15 = 0; i_15 < 20; i_15 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */short) (((_Bool)1) && (((/* implicit */_Bool) (unsigned short)127))));
                                arr_58 [i_11] [i_11] [i_11] [i_14] [i_15] = ((/* implicit */unsigned char) ((short) arr_52 [(short)9] [i_12 - 2] [(unsigned short)17] [i_14] [i_15] [i_12 - 2]));
                            }
                        } 
                    } 
                    arr_59 [i_11] [i_12 + 2] [i_13] [i_12] = ((/* implicit */short) ((int) arr_6 [i_11] [i_12]));
                }
            } 
        } 
    }
    for (int i_16 = 0; i_16 < 21; i_16 += 1) 
    {
        arr_62 [i_16] = ((/* implicit */unsigned char) var_1);
        var_29 = ((/* implicit */unsigned short) 2615141611U);
    }
    var_30 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_14)) ? (var_1) : (var_2))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)4))))))))));
    var_31 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((var_6) >> (((((/* implicit */int) var_9)) - (8070)))))) * ((+(11550769387650318714ULL)))));
}
