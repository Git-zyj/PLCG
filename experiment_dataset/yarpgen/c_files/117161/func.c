/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117161
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? ((+(var_4))) : ((~(((/* implicit */int) (signed char)-75))))))) || (((/* implicit */_Bool) var_4))));
    var_20 = ((/* implicit */short) var_9);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 13; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_5)))))));
                var_22 = ((/* implicit */unsigned short) arr_2 [i_0]);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_2 = 1; i_2 < 15; i_2 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                for (unsigned int i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    {
                        var_23 = ((/* implicit */signed char) min((min((var_9), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))))), (((/* implicit */unsigned long long int) (unsigned short)25916))));
                        var_24 ^= ((/* implicit */long long int) max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) (signed char)8)), ((unsigned short)56193)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2 - 1]))) : (arr_6 [i_2 + 1] [i_2 - 1])))));
                        var_25 = ((/* implicit */unsigned long long int) min(((-(var_0))), (((/* implicit */int) (signed char)7))));
                        arr_16 [i_2] [i_3] [i_3] [i_5] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned int) 849646106)) | (65535U)));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (signed char i_6 = 1; i_6 < 14; i_6 += 2) 
        {
            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) var_10))));
            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (((!((!(((/* implicit */_Bool) (signed char)-77)))))) || ((!(((/* implicit */_Bool) arr_9 [i_2])))))))));
            var_28 -= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_18 [(unsigned char)14]))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7294240896880013209LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_17 [i_6 + 2] [i_2] [i_2])))) ? (((/* implicit */int) arr_7 [i_2])) : ((~(((/* implicit */int) (unsigned char)106))))))));
        }
        for (signed char i_7 = 0; i_7 < 16; i_7 += 2) 
        {
            arr_23 [i_2 + 1] [i_2 + 1] [i_2] = ((/* implicit */long long int) (short)30608);
            arr_24 [i_2] [i_7] [i_2] = ((/* implicit */signed char) var_9);
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 13; i_8 += 2) 
            {
                for (long long int i_9 = 0; i_9 < 16; i_9 += 1) 
                {
                    {
                        var_29 ^= ((/* implicit */unsigned char) ((((((var_9) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-114))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_10 [i_2])))) : (arr_19 [i_8 - 1] [i_8 + 3]))) % (arr_19 [(unsigned char)0] [i_2])));
                        /* LoopSeq 1 */
                        for (short i_10 = 0; i_10 < 16; i_10 += 2) 
                        {
                            var_30 = ((/* implicit */short) max((var_30), (var_2)));
                            var_31 = ((/* implicit */unsigned short) ((short) (signed char)1));
                            var_32 = ((/* implicit */signed char) ((((/* implicit */int) ((short) (unsigned short)9343))) >= (((/* implicit */int) (short)-14376))));
                            arr_32 [(short)8] [i_7] [(short)10] [i_7] [(unsigned short)5] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)9627))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-74)) + (2147483647))) << (((((((/* implicit */int) (short)-16)) + (40))) - (24)))))) | (((((/* implicit */_Bool) var_3)) ? (arr_17 [i_8 + 3] [(short)6] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))));
                        }
                    }
                } 
            } 
            arr_33 [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)18682))));
            var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) arr_31 [i_2] [(short)9] [i_2]))));
        }
        for (unsigned int i_11 = 0; i_11 < 16; i_11 += 2) 
        {
            var_34 -= arr_11 [i_2] [i_2] [i_2] [i_2];
            arr_37 [i_11] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */int) var_14)) << ((((-(15493864264941437755ULL))) - (2952879808768113840ULL)))));
            arr_38 [i_2] = ((/* implicit */unsigned long long int) min((3912219676U), (min((((/* implicit */unsigned int) (short)32763)), (2146959360U)))));
        }
        arr_39 [i_2] = ((/* implicit */signed char) (~(min((arr_28 [i_2 - 1] [i_2 + 1]), (arr_28 [i_2 - 1] [i_2 - 1])))));
        /* LoopNest 2 */
        for (unsigned char i_12 = 0; i_12 < 16; i_12 += 2) 
        {
            for (signed char i_13 = 1; i_13 < 15; i_13 += 2) 
            {
                {
                    var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)212)) < (((/* implicit */int) (unsigned char)103))))) | (((/* implicit */int) (_Bool)1)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 0; i_14 < 16; i_14 += 1) 
                    {
                        for (unsigned short i_15 = 0; i_15 < 16; i_15 += 2) 
                        {
                            {
                                var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)113)), ((unsigned char)255)))) >> (((((((/* implicit */_Bool) ((unsigned int) var_15))) ? (-1634478312) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_8 [i_2] [i_2] [i_15])) : (((/* implicit */int) (signed char)10)))))) + (1634478343))))))));
                                var_37 ^= ((/* implicit */unsigned int) ((unsigned long long int) (signed char)-114));
                            }
                        } 
                    } 
                    var_38 = var_14;
                }
            } 
        } 
    }
    for (signed char i_16 = 3; i_16 < 17; i_16 += 2) 
    {
        var_39 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_49 [i_16]))));
        var_40 ^= ((/* implicit */signed char) arr_51 [i_16]);
        /* LoopNest 2 */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            for (short i_18 = 0; i_18 < 20; i_18 += 3) 
            {
                {
                    arr_59 [i_16] [i_18] [i_16] = ((/* implicit */unsigned int) min((var_0), (((/* implicit */int) ((unsigned short) arr_52 [i_16 + 1] [i_16])))));
                    var_41 -= ((/* implicit */long long int) min((min((arr_50 [i_16 + 3]), (arr_50 [i_16 + 2]))), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_14)))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                    {
                        arr_64 [i_16] [i_18] [i_16] [i_18] [i_16] = ((/* implicit */unsigned char) arr_61 [i_16 + 1] [i_16] [i_16 - 2] [i_16 - 1] [i_16 - 3] [i_19 - 1]);
                        arr_65 [i_16] [i_16] [17] [i_18] = ((/* implicit */unsigned int) arr_49 [i_19 - 1]);
                    }
                }
            } 
        } 
        arr_66 [2] [2] &= ((/* implicit */signed char) (+(382747620U)));
    }
    for (unsigned char i_20 = 0; i_20 < 24; i_20 += 2) 
    {
        var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) ((((/* implicit */int) ((short) arr_69 [i_20]))) + (((855531598) / (((/* implicit */int) (unsigned char)122)))))))));
        var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) (short)24292))));
    }
    var_44 ^= ((/* implicit */short) ((((((/* implicit */_Bool) ((var_8) ^ (((/* implicit */int) (signed char)4))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((signed char) var_18))))) - (((/* implicit */int) ((signed char) 934051863)))));
}
