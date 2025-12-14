/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152941
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
    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)4)) != (((/* implicit */int) var_11)))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_11)))) : (((((var_0) + (2147483647))) >> (((var_0) + (2076085662))))))))));
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        var_18 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)108)) - (((/* implicit */int) (unsigned char)177))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : ((-(679812121U))))) >= (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)16), ((unsigned short)65510)))))));
        /* LoopSeq 4 */
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65532)) ? (-1971095312) : (1042547632)));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 2; i_2 < 23; i_2 += 4) 
            {
                arr_8 [i_0] [i_1] [21LL] = ((/* implicit */int) min((((unsigned int) ((6855054522662569999LL) >= (((/* implicit */long long int) 727083046U))))), (((/* implicit */unsigned int) min((((((/* implicit */int) (unsigned short)9131)) | (((/* implicit */int) (unsigned short)3)))), ((~(((/* implicit */int) (unsigned short)65535)))))))));
                arr_9 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65524)) >> (((((/* implicit */int) (signed char)50)) - (27))))))));
                arr_10 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */long long int) ((unsigned long long int) (unsigned short)65530));
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (unsigned char)206))));
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)0)) ? (max((((/* implicit */unsigned int) (unsigned short)3)), (2606205510U))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_2 - 1] [i_0 + 1])) ^ (((/* implicit */int) arr_6 [i_2 + 1] [i_0 + 1])))))));
            }
        }
        for (signed char i_3 = 2; i_3 < 22; i_3 += 1) 
        {
            arr_14 [(_Bool)0] [(unsigned short)3] = ((1023) + (((/* implicit */int) (signed char)50)));
            var_22 += ((/* implicit */signed char) ((8017885670368241104LL) > (((/* implicit */long long int) ((/* implicit */int) min((arr_4 [i_0 - 3]), (arr_4 [i_0 + 1])))))));
            arr_15 [i_0] = arr_11 [i_0 + 1] [i_3 + 1] [i_3 + 2];
        }
        for (unsigned char i_4 = 4; i_4 < 22; i_4 += 4) 
        {
            arr_19 [(short)7] [i_4] = ((/* implicit */signed char) arr_11 [i_4 + 1] [23ULL] [23ULL]);
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 22; i_5 += 1) 
            {
                for (long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    {
                        var_23 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_23 [i_4 - 2] [i_4 + 2] [i_0 + 1] [i_0])))));
                        var_24 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-121))) : (-4457651046000442445LL))) * (((/* implicit */long long int) (-(((/* implicit */int) arr_23 [i_6] [i_5] [i_4 - 4] [i_0])))))))) ? ((((-(var_13))) * (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_8)), ((unsigned short)14))))))) : (((/* implicit */unsigned long long int) min((727083046U), (((/* implicit */unsigned int) (signed char)-79)))))));
                    }
                } 
            } 
            var_25 += ((/* implicit */short) min((max((((/* implicit */int) (unsigned short)16)), (((((/* implicit */int) arr_0 [i_4])) | (((/* implicit */int) var_3)))))), (((/* implicit */int) var_8))));
        }
        for (long long int i_7 = 1; i_7 < 22; i_7 += 1) 
        {
            var_26 += ((/* implicit */long long int) var_14);
            var_27 ^= ((/* implicit */signed char) max((((/* implicit */long long int) (((-(arr_11 [(short)10] [i_0 - 1] [i_7]))) / (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned short)16)) : (((/* implicit */int) (signed char)-94))))))), (max((((var_4) & (((/* implicit */long long int) ((/* implicit */int) arr_4 [20LL]))))), (((/* implicit */long long int) var_1))))));
            /* LoopSeq 1 */
            for (long long int i_8 = 0; i_8 < 24; i_8 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_9 = 0; i_9 < 24; i_9 += 2) 
                {
                    arr_32 [i_0] [i_0 + 1] [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */_Bool) 2229313330U);
                    var_28 ^= ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -1023)), (10851068020902678135ULL)))) ? (min((var_9), (((/* implicit */int) var_6)))) : (((/* implicit */int) max((arr_7 [i_0] [i_7 + 2] [i_8] [i_9]), (var_11))))))) - (((((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)20)), (var_9)))) | (((unsigned int) var_4))))));
                }
                arr_33 [i_0 + 1] [i_0] [i_0] [i_0 - 3] = ((/* implicit */signed char) min((0ULL), (((/* implicit */unsigned long long int) (signed char)50))));
                var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) var_11))));
                /* LoopSeq 2 */
                for (unsigned long long int i_10 = 1; i_10 < 22; i_10 += 4) 
                {
                    arr_36 [i_0] [i_7] [i_10] [15U] = ((((/* implicit */int) (!(((/* implicit */_Bool) ((int) 5077408725622696916LL)))))) * (((/* implicit */int) arr_3 [i_7 - 1] [i_8] [i_10])));
                    arr_37 [i_10] = ((/* implicit */unsigned char) (signed char)0);
                    arr_38 [i_10] = ((/* implicit */unsigned int) var_4);
                    var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [12ULL] [i_7 - 1] [(_Bool)1] [9]))) / (10851068020902678135ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) arr_1 [i_0]))))))))) % (max((((((/* implicit */int) (signed char)117)) >> (((65535ULL) - (65513ULL))))), (((((((/* implicit */int) (signed char)-19)) + (2147483647))) >> (((((/* implicit */int) var_14)) + (11687))))))))))));
                }
                for (unsigned long long int i_11 = 1; i_11 < 22; i_11 += 4) 
                {
                    arr_42 [i_8] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_35 [i_11 + 2] [i_11 + 1] [i_11 + 2] [i_11 + 1])) ? (((unsigned long long int) (signed char)-78)) : (((/* implicit */unsigned long long int) arr_24 [i_0])))) & (((/* implicit */unsigned long long int) arr_24 [i_11]))));
                    arr_43 [11LL] [i_7 - 1] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)99)) >> (((((/* implicit */int) (unsigned char)239)) - (210)))))) > (1778768566U)));
                    var_31 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_27 [i_0 - 2] [i_0] [i_0 + 1] [i_0])), (var_8)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((var_2) ? (1778768566U) : (arr_39 [i_7 + 1])))))))));
                }
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 24; i_12 += 4) 
                {
                    for (unsigned long long int i_13 = 1; i_13 < 23; i_13 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */int) min((var_32), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((long long int) 4294967295U)) : (((arr_25 [i_7] [i_8] [i_13]) >> (((/* implicit */int) arr_44 [(_Bool)1] [i_7] [3ULL]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))))))) : (((((/* implicit */int) arr_1 [i_13])) | (((/* implicit */int) ((var_0) > (((/* implicit */int) var_11)))))))))));
                            arr_48 [1LL] [1LL] [i_12] [i_8] [i_7] [i_7] [(signed char)19] = ((/* implicit */_Bool) var_3);
                            arr_49 [i_8] [i_7 + 2] = ((/* implicit */unsigned char) ((max((max((((/* implicit */unsigned long long int) (unsigned char)207)), (0ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)0))))))) >> (max((((/* implicit */int) (unsigned char)48)), ((-(((/* implicit */int) (unsigned short)63794))))))));
                            var_33 += ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) var_14)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_7 + 1] [i_13 - 1] [i_0 - 1])))))) : ((~(max((10851068020902678108ULL), (((/* implicit */unsigned long long int) -5))))))));
                        }
                    } 
                } 
            }
        }
        var_34 *= ((/* implicit */int) ((arr_17 [i_0]) >= (var_16)));
    }
    /* LoopSeq 2 */
    for (signed char i_14 = 0; i_14 < 18; i_14 += 2) 
    {
        arr_52 [i_14] [i_14] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (short)-32755)) * (((/* implicit */int) (short)32766))))) <= (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_0)) : (var_4))))))));
        var_35 = ((/* implicit */unsigned long long int) ((arr_50 [i_14] [i_14]) - (((/* implicit */long long int) ((/* implicit */int) (signed char)13)))));
        var_36 *= ((/* implicit */_Bool) min((((long long int) -1732684526)), (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))))));
    }
    for (unsigned char i_15 = 2; i_15 < 20; i_15 += 2) 
    {
        var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_14)))))));
        var_38 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_14))));
    }
    var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) var_2))));
}
