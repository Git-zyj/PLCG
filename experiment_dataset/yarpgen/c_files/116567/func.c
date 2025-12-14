/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116567
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] [(unsigned short)6] = ((/* implicit */unsigned char) arr_1 [i_1]);
                arr_5 [9] [(unsigned char)16] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_1 [i_1 + 2])) : (((/* implicit */int) (_Bool)0)))) & (((/* implicit */int) arr_1 [i_1 - 2]))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 2; i_2 < 14; i_2 += 1) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((signed char) arr_3 [i_1 - 2] [i_1 - 2])))));
                    arr_8 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((arr_0 [i_1 + 2] [i_1 - 2]) + (9223372036854775807LL))) << (((((/* implicit */int) var_14)) - (110)))))) ? ((((_Bool)1) ? (arr_0 [i_1 + 3] [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_4)))))));
                }
                for (unsigned char i_3 = 2; i_3 < 14; i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_17 [(signed char)13] [(short)14] [i_5] [i_5] [15ULL] [7LL] [(unsigned char)6] = ((/* implicit */unsigned char) ((_Bool) var_4));
                                arr_18 [i_0] [(unsigned char)17] [(unsigned char)17] [(unsigned char)17] [(unsigned char)17] [i_5] [(unsigned char)17] = ((/* implicit */unsigned char) ((unsigned long long int) arr_3 [2LL] [i_1 - 2]));
                                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((short) (_Bool)1)))));
                                var_21 = ((((/* implicit */int) ((signed char) 7493985074164286077ULL))) + ((~(((/* implicit */int) arr_6 [i_5] [i_3 + 4] [i_3 + 4] [i_5 - 1])))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [(short)4] [i_3 - 1] [i_0] [(short)6] [i_3 - 1])) & (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) arr_2 [i_3 + 2])) ? (((2878140310156244984ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8104))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [13ULL] [(signed char)17] [i_1 + 3])) & (((/* implicit */int) var_5))))))))));
                }
                for (unsigned char i_6 = 2; i_6 < 14; i_6 += 1) /* same iter space */
                {
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)26912)) | (((/* implicit */int) (unsigned short)26912))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)27))))) : ((((_Bool)0) ? (arr_0 [i_1 + 3] [i_1 + 1]) : (arr_0 [i_1 - 1] [i_1 - 1])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 1; i_7 < 17; i_7 += 3) 
                    {
                        for (signed char i_8 = 0; i_8 < 18; i_8 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */int) (signed char)-18);
                                arr_25 [(short)8] [10U] [10U] [(unsigned short)5] [(short)8] = ((unsigned char) ((arr_24 [i_0] [i_1 + 2] [(signed char)6] [(signed char)6]) | (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned long long int) var_5);
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 18; i_9 += 3) 
                    {
                        for (int i_10 = 0; i_10 < 18; i_10 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */short) ((((/* implicit */_Bool) 15568603763553306626ULL)) ? (15568603763553306626ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56)))));
                                var_27 = ((/* implicit */unsigned long long int) (unsigned short)6635);
                            }
                        } 
                    } 
                }
                /* LoopSeq 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_28 = var_0;
                    arr_34 [i_11] [i_11] [15ULL] = ((/* implicit */unsigned long long int) arr_26 [i_1] [i_1 - 1] [(short)7] [i_1 + 3]);
                }
                for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 3) 
                {
                    arr_37 [(signed char)0] [(signed char)3] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_15), (((/* implicit */unsigned long long int) var_13))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) : ((~(var_18)))));
                    arr_38 [i_0] [0LL] [i_12] [i_0] = ((/* implicit */unsigned char) (~(8544799797096993322LL)));
                    var_29 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_19 [i_12] [i_12])) : (((/* implicit */int) arr_26 [(unsigned short)1] [(unsigned short)1] [(_Bool)1] [i_1 - 1])))) : (((/* implicit */int) ((signed char) arr_26 [(short)16] [(_Bool)1] [(short)16] [i_1 - 1])))));
                }
                arr_39 [3] [3] = ((/* implicit */_Bool) ((int) ((int) var_4)));
            }
        } 
    } 
    var_30 = ((/* implicit */_Bool) var_2);
    /* LoopNest 3 */
    for (long long int i_13 = 0; i_13 < 20; i_13 += 4) 
    {
        for (signed char i_14 = 0; i_14 < 20; i_14 += 3) 
        {
            for (long long int i_15 = 0; i_15 < 20; i_15 += 1) 
            {
                {
                    arr_48 [i_13] [(short)4] [(short)4] [(_Bool)1] = ((/* implicit */unsigned char) var_3);
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 16; i_16 += 2) 
                    {
                        for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 4) 
                        {
                            {
                                arr_53 [i_13] [(signed char)16] [i_13] [(signed char)14] [(signed char)14] [18LL] |= ((/* implicit */_Bool) ((unsigned int) arr_50 [i_16 + 1] [(unsigned char)9] [3] [(unsigned char)9] [(unsigned char)15]));
                                arr_54 [i_16] [(short)0] [i_16] [i_16] [4ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_40 [7LL])) ? (((/* implicit */int) var_3)) : (-1497456507)))))) ? ((-(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((signed char) var_16)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 4) 
                    {
                        for (signed char i_19 = 0; i_19 < 20; i_19 += 3) 
                        {
                            {
                                var_31 = ((/* implicit */long long int) ((unsigned short) arr_57 [i_15] [(signed char)19] [i_15] [i_15]));
                                arr_62 [(unsigned char)16] [i_18] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_15))) ? (((/* implicit */int) arr_58 [(_Bool)1] [(_Bool)1] [(_Bool)1] [4LL] [4LL] [(_Bool)1])) : (var_2)));
                                var_32 |= ((/* implicit */short) (+(((/* implicit */int) ((arr_45 [i_13]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12))));
    var_34 = ((/* implicit */unsigned short) var_2);
}
