/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170673
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
    var_14 = ((/* implicit */_Bool) var_5);
    var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))));
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        arr_2 [5LL] [(unsigned char)11] = ((/* implicit */unsigned long long int) ((arr_1 [i_0 - 1]) % (((((/* implicit */_Bool) arr_1 [i_0 + 4])) ? (arr_1 [i_0 + 4]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 4])))))));
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    {
                        arr_12 [i_0] [i_3] [i_2] [i_3] = ((/* implicit */unsigned int) (((+(((((/* implicit */int) (unsigned char)15)) ^ (((/* implicit */int) (unsigned char)126)))))) == (((((/* implicit */_Bool) (unsigned char)210)) ? (((/* implicit */int) (unsigned short)4095)) : ((-(var_5)))))));
                        arr_13 [i_3] [i_3] [i_1] [i_2] [i_1] [i_0] = var_7;
                        arr_14 [i_0] [i_0] [(signed char)10] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(arr_11 [i_3] [i_2] [i_2] [i_1] [i_0])));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_4 = 3; i_4 < 11; i_4 += 2) 
            {
                for (signed char i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    {
                        arr_19 [(unsigned short)13] [i_1] [i_4 - 2] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)4104)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)12))));
                        arr_20 [i_4] = ((/* implicit */unsigned char) arr_6 [i_0 + 2] [i_4] [i_5]);
                        arr_21 [i_0 + 2] [i_1] [(short)11] [i_4] [i_4] [i_5] = ((/* implicit */int) arr_6 [i_0 + 3] [i_4 - 3] [i_4 + 3]);
                        arr_22 [i_0] [i_0] [i_4] [i_0 - 3] = ((/* implicit */short) arr_18 [i_0] [i_0] [i_0] [i_0 + 2] [i_0] [i_0]);
                        arr_23 [i_1] [i_4] = ((/* implicit */signed char) ((var_12) >= (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_11 [i_0 - 3] [i_1] [i_4 + 1] [i_5] [i_5])))))));
                    }
                } 
            } 
            arr_24 [i_0] [(unsigned char)12] [7] = ((/* implicit */unsigned int) ((arr_5 [6ULL]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
            arr_25 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (signed char)-10);
            arr_26 [11] |= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)-1)), (min((var_9), ((short)-10811)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_0 + 3] [i_0 + 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)14))) : (4294967275U)))));
        }
        for (long long int i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            arr_30 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 3740510334U)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) (short)(-32767 - 1))))) >= (arr_7 [11ULL] [i_6] [(short)13] [i_6])));
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_8 = 0; i_8 < 14; i_8 += 1) 
                {
                    arr_36 [i_7] = ((/* implicit */int) max((arr_5 [i_0 + 2]), (((/* implicit */unsigned long long int) arr_27 [i_0 - 1] [i_0 - 1] [i_8]))));
                    arr_37 [i_8] [i_7] [i_6] [i_0] = ((/* implicit */unsigned long long int) var_7);
                    arr_38 [i_8] [i_7] [i_6] [i_0 + 3] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 0)))))));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_41 [i_0 - 2] [i_6] [i_7] [0ULL] [i_6] = ((/* implicit */signed char) 5689243237806730820ULL);
                    arr_42 [i_0] [(short)12] [(_Bool)1] [(_Bool)1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_9])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? ((~(((/* implicit */int) var_3)))) : (((/* implicit */int) (signed char)126)))))));
                    arr_43 [i_0 + 1] [i_6] [i_0 + 1] [(unsigned char)8] [i_0 + 1] = ((/* implicit */long long int) 16054445055280929852ULL);
                }
                /* LoopSeq 1 */
                for (unsigned short i_10 = 0; i_10 < 14; i_10 += 2) 
                {
                    arr_46 [i_10] [i_7] [i_6] [i_0] = ((/* implicit */unsigned short) (+(((unsigned long long int) arr_9 [i_0] [i_6] [i_7] [i_7] [i_10]))));
                    arr_47 [(short)6] [i_6] [i_7] [i_10] = ((/* implicit */int) (short)-27130);
                    arr_48 [i_0] |= arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [(short)5];
                }
            }
            arr_49 [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_39 [i_6] [i_0] [i_0] [i_0]) : (arr_39 [i_0 + 4] [i_0 + 4] [i_0 + 4] [(signed char)6])))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)184))) : (arr_45 [i_0 - 3] [i_0] [(signed char)4] [(_Bool)0] [i_0 - 3]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 + 1] [i_0 - 3] [i_0 + 2])))))));
            arr_50 [i_0] = ((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) var_13)), (1371256674U))), (max((((/* implicit */unsigned int) var_8)), (arr_44 [i_0] [i_0 - 1] [i_0 - 2] [i_0 - 3] [i_0])))));
        }
        for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 1) 
        {
            arr_54 [i_0 + 1] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((long long int) arr_11 [(signed char)13] [i_11] [i_0 - 3] [i_11] [13LL]));
            arr_55 [i_0] = ((/* implicit */_Bool) (unsigned short)56904);
            arr_56 [i_0] [(short)2] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_11] [i_11] [i_11] [i_0 + 4])) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_0] [i_0] [i_0]))) : (arr_18 [i_11] [i_0] [i_0 - 2] [(signed char)10] [i_0] [(unsigned char)3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0 - 2] [i_0])))))))))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_32 [i_11] [i_11] [i_11])))))));
        }
        arr_57 [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */long long int) arr_45 [i_0] [i_0] [i_0 - 3] [i_0] [i_0])) < (arr_28 [i_0] [i_0])))), (arr_28 [(unsigned char)8] [i_0])));
    }
    /* vectorizable */
    for (unsigned short i_12 = 0; i_12 < 24; i_12 += 1) 
    {
        arr_60 [12U] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (short)10810))) ? (((/* implicit */int) ((unsigned char) arr_59 [12]))) : (((/* implicit */int) (unsigned char)45))));
        arr_61 [20] [20] = ((/* implicit */short) ((((/* implicit */int) arr_59 [(unsigned char)8])) >> (((arr_58 [(_Bool)1] [i_12]) - (6558013659442995321ULL)))));
        arr_62 [(unsigned short)14] = arr_59 [(signed char)18];
        /* LoopSeq 1 */
        for (unsigned int i_13 = 0; i_13 < 24; i_13 += 1) 
        {
            /* LoopNest 2 */
            for (int i_14 = 2; i_14 < 20; i_14 += 1) 
            {
                for (short i_15 = 0; i_15 < 24; i_15 += 2) 
                {
                    {
                        arr_69 [i_12] [i_13] [i_13] [(short)2] = ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-1)) + (2147483647))) << (((((unsigned long long int) var_11)) - (18446744073281176528ULL)))));
                        arr_70 [i_12] [i_12] [i_12] = (((((_Bool)0) || (((/* implicit */_Bool) (short)10811)))) ? ((-(((/* implicit */int) arr_59 [i_12])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_58 [i_12] [(signed char)15]))))));
                        arr_71 [i_12] [i_15] [i_14] [18LL] |= ((/* implicit */unsigned char) arr_65 [i_15]);
                        arr_72 [i_12] [(unsigned char)11] [i_14] [i_14] = arr_64 [i_14];
                    }
                } 
            } 
            arr_73 [i_12] [17] [i_12] = ((/* implicit */int) arr_63 [i_12] [i_13]);
        }
        arr_74 [i_12] = ((/* implicit */signed char) arr_58 [i_12] [i_12]);
    }
    var_16 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) % (((((/* implicit */_Bool) (short)10839)) ? (((/* implicit */int) (signed char)-102)) : (((/* implicit */int) var_1)))))));
}
