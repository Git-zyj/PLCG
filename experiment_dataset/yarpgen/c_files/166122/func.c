/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166122
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
    var_14 *= ((/* implicit */short) ((int) var_7));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_0] [i_0] [i_4] = ((/* implicit */short) (+(((/* implicit */int) max((((/* implicit */short) arr_1 [i_2] [i_3])), ((short)1099))))));
                                arr_15 [i_0] [i_0] [i_0] [i_2] [i_0] |= (signed char)22;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            {
                                arr_21 [i_0] [i_0] [i_0] [i_2] [i_0] [(unsigned short)2] [i_2] |= ((/* implicit */short) max(((signed char)23), ((signed char)22)));
                                arr_22 [(short)2] [i_5] [i_2] [i_5] [i_0] = ((/* implicit */unsigned short) ((short) min((arr_20 [i_0] [i_1] [i_0] [i_5] [i_6] [i_0]), (((/* implicit */unsigned int) var_4)))));
                                var_15 = ((/* implicit */unsigned int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_1]);
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 1) 
                {
                    var_16 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) >> (((((/* implicit */int) (short)-19804)) + (19826)))))) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_8))));
                    var_17 = ((/* implicit */signed char) (+(((/* implicit */int) var_1))));
                    var_18 = ((/* implicit */signed char) ((((/* implicit */int) (short)1099)) >> (((((/* implicit */int) (signed char)127)) - (115)))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 22; i_9 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) (short)-19804)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)100))) : (arr_5 [i_1] [i_7] [i_8]))));
                                arr_30 [i_7] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned char)164)) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) (unsigned char)91))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */int) var_10);
                }
                for (short i_10 = 0; i_10 < 22; i_10 += 2) 
                {
                    arr_34 [i_0] [(signed char)14] [i_1] [i_10] = ((/* implicit */unsigned int) var_12);
                    var_21 = ((/* implicit */short) max((((/* implicit */unsigned int) var_6)), (var_2)));
                    arr_35 [i_0] [i_1] [i_10] = var_12;
                    arr_36 [i_0] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_31 [i_0] [i_1] [i_1] [i_10]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) arr_31 [i_0] [i_0] [i_1] [i_10]))));
                    arr_37 [i_1] [i_1] [i_1] = ((/* implicit */short) (~(((((/* implicit */int) arr_33 [i_0] [(short)2] [i_10])) | (((/* implicit */int) arr_33 [i_0] [i_1] [i_0]))))));
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 22; i_11 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 3) 
                    {
                        var_22 = ((/* implicit */int) max((var_22), ((((((~(((/* implicit */int) (unsigned char)90)))) + (2147483647))) << (((((((/* implicit */int) arr_2 [i_0] [i_1] [i_12])) + (89))) - (26)))))));
                        var_23 = ((/* implicit */signed char) var_10);
                        arr_44 [i_1] [i_1] [6U] |= (~(((var_7) ^ (((/* implicit */int) (signed char)23)))));
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((short) ((((/* implicit */unsigned long long int) 1793930823U)) <= (5276633426914326763ULL)))))));
                        /* LoopSeq 1 */
                        for (signed char i_13 = 0; i_13 < 22; i_13 += 1) 
                        {
                            arr_47 [i_0] [i_0] [i_0] [i_0] [i_11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_31 [i_0] [i_1] [i_12] [i_0]))));
                            var_25 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_11] [i_1])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_33 [i_13] [i_12] [i_11]))))));
                            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */int) arr_41 [i_13] [(unsigned char)0] [i_11] [(unsigned char)0] [i_0])) | (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)152)) || (((/* implicit */_Bool) (short)1099))))))))));
                        }
                    }
                    var_27 ^= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) (unsigned char)87)) % (((/* implicit */int) (unsigned char)91)))));
                }
                arr_48 [i_0] [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [4LL] [i_0] [(unsigned char)14] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)19814))) : (var_2)))) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (max((var_5), (((/* implicit */int) (unsigned char)87))))))) ? (8070450532247928832ULL) : (((/* implicit */unsigned long long int) ((unsigned int) arr_45 [18ULL] [i_1])))));
            }
        } 
    } 
    var_28 = ((/* implicit */long long int) ((6ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
    var_29 |= ((/* implicit */signed char) ((((/* implicit */int) var_1)) != (var_7)));
    var_30 |= ((/* implicit */unsigned long long int) (+(var_5)));
}
