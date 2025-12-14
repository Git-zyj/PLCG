/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105330
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)3)) & (((/* implicit */int) (unsigned short)26)))) & ((((_Bool)1) ? (((/* implicit */int) (short)-16387)) : (((/* implicit */int) (unsigned short)8597))))));
        arr_5 [i_0] [i_0] = (~(((((/* implicit */int) (unsigned short)65535)) ^ (((/* implicit */int) arr_1 [i_0])))));
        arr_6 [i_0] = ((/* implicit */short) (-(((/* implicit */int) (((-(arr_0 [i_0]))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)60974)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)0))))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            arr_11 [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_9 [i_1])) < (((/* implicit */int) (unsigned char)255)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_9 [i_2]))));
            /* LoopNest 2 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            arr_19 [i_1] [i_2] [i_3] [i_3] [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))));
                            arr_20 [i_1] [i_2] [i_3] = var_10;
                            arr_21 [i_5] [i_4] [i_3] [i_2] [i_1] = ((unsigned char) ((((/* implicit */_Bool) arr_12 [i_1] [i_4] [i_3])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned char)25))));
                        }
                        for (int i_6 = 2; i_6 < 21; i_6 += 4) 
                        {
                            arr_24 [i_4] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_3 - 1] [i_3 - 1])) ? (((/* implicit */int) (unsigned short)65509)) : (((/* implicit */int) arr_16 [i_6 + 3] [i_6] [i_6 + 1] [i_6] [i_6] [i_6] [i_6 - 2]))));
                            arr_25 [i_1] [i_2] = ((((/* implicit */_Bool) 4324263211636550012LL)) ? ((+(((/* implicit */int) (unsigned short)60974)))) : (((/* implicit */int) (short)-16387)));
                            arr_26 [i_2] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) (short)1023))));
                            arr_27 [i_1] [i_2] [i_3] [i_1] [i_1] = (!(((((/* implicit */_Bool) (signed char)-20)) || (((/* implicit */_Bool) -7)))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 4) /* same iter space */
                        {
                            arr_32 [i_1] [i_2] [i_3] [i_4] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) 15690903281067259083ULL))) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)17)))) : (((/* implicit */int) arr_23 [i_3 - 1] [i_3 - 1] [i_3 - 1]))));
                            arr_33 [i_4] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */long long int) 4173728798U)) ^ (4089582968032658780LL))))));
                            arr_34 [i_1] [i_2] [i_3] [i_4] [i_7] = ((/* implicit */unsigned char) 3681692783U);
                        }
                        for (unsigned char i_8 = 0; i_8 < 24; i_8 += 4) /* same iter space */
                        {
                            arr_39 [i_1] [i_1] [i_2] [i_2] [i_3] [i_4] [i_8] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((7) < (((/* implicit */int) (signed char)127)))))));
                            arr_40 [i_2] [i_2] [i_3] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-4511)) * (((/* implicit */int) arr_12 [i_8] [i_2] [i_3])))))));
                        }
                        arr_41 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)56939)) ? (((/* implicit */int) (unsigned short)4)) : (((/* implicit */int) (_Bool)1))));
                        arr_42 [i_4] [i_3] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)5)) ? (((/* implicit */int) (unsigned short)30962)) : (((/* implicit */int) var_2))));
                    }
                } 
            } 
            arr_43 [i_2] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)141))));
            arr_44 [i_1] [i_1] [i_1] = ((((/* implicit */int) (unsigned short)65531)) < (((/* implicit */int) arr_8 [i_1] [i_2])));
            arr_45 [i_1] [i_1] [i_1] = ((/* implicit */int) ((unsigned char) (unsigned char)72));
        }
        for (long long int i_9 = 2; i_9 < 23; i_9 += 4) 
        {
            arr_48 [i_9] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)33505)) | (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned short)38290)) : (((/* implicit */int) arr_8 [i_1] [i_9 - 1]))));
            arr_49 [i_1] [i_9] = ((/* implicit */int) ((((/* implicit */int) (unsigned short)38279)) < (((/* implicit */int) arr_31 [i_9] [i_9 + 1] [i_9] [i_9] [i_9]))));
            arr_50 [i_1] = ((/* implicit */unsigned short) (~(1995858515U)));
            /* LoopSeq 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
            {
                arr_53 [i_1] [i_10] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_46 [i_10] [i_9 - 2] [i_1]))));
                arr_54 [i_10] [i_10] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)4503))));
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
            {
                arr_58 [i_11] = ((/* implicit */short) arr_17 [i_9] [i_9] [i_11]);
                arr_59 [i_1] [i_11] [i_9] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)137)) & (arr_36 [i_9 - 2] [i_9] [i_9] [i_9] [i_9 - 1])));
                arr_60 [i_1] [i_1] [i_11] = ((((((/* implicit */_Bool) -1884149660)) ? (arr_37 [i_11] [i_9] [i_9] [i_9] [i_1] [i_1]) : (arr_37 [i_11] [i_11] [i_11] [i_9] [i_1] [i_1]))) & ((+(((/* implicit */int) (unsigned short)27257)))));
                arr_61 [i_1] [i_11] [i_11] = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_31 [i_1] [i_9] [i_11] [i_11] [i_11])))) ^ (((((/* implicit */_Bool) (short)-4521)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0))))));
            }
        }
        for (long long int i_12 = 1; i_12 < 23; i_12 += 1) 
        {
            arr_64 [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)38290))));
            arr_65 [i_12] [i_1] = ((/* implicit */signed char) var_14);
        }
        for (unsigned short i_13 = 1; i_13 < 22; i_13 += 4) 
        {
            arr_68 [i_1] [i_13] [i_13] = ((/* implicit */unsigned char) ((14) ^ (((((/* implicit */int) (unsigned short)38279)) & (((/* implicit */int) (unsigned char)49))))));
            /* LoopSeq 2 */
            for (unsigned short i_14 = 0; i_14 < 24; i_14 += 4) 
            {
                arr_72 [i_14] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_69 [i_13] [i_13] [i_13 - 1] [i_14])) ? (((/* implicit */int) var_3)) : (arr_69 [i_1] [i_13] [i_13 - 1] [i_13])));
                /* LoopSeq 1 */
                for (unsigned char i_15 = 0; i_15 < 24; i_15 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_16 = 0; i_16 < 24; i_16 += 1) 
                    {
                        arr_79 [i_1] [i_15] [i_14] [i_15] [i_16] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)10)) < (((/* implicit */int) (unsigned short)63922))));
                        arr_80 [i_1] [i_13] [i_14] [i_15] [i_14] = ((/* implicit */int) (((_Bool)1) ? (2147483647U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)22)))));
                    }
                    arr_81 [i_1] [i_14] [i_13] = ((/* implicit */_Bool) ((short) 0U));
                    /* LoopSeq 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        arr_85 [i_13] [i_15] [i_13] [i_13] = ((/* implicit */signed char) 549755813887LL);
                        arr_86 [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */int) (signed char)-1)) & (((((/* implicit */int) (unsigned char)255)) & (((/* implicit */int) (unsigned char)0))))));
                        arr_87 [i_13] [i_13] [i_14] [i_15] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)10))) ^ (1U)));
                    }
                    for (long long int i_18 = 3; i_18 < 21; i_18 += 4) 
                    {
                        arr_90 [i_18] [i_15] [i_14] [i_15] [i_1] = ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1)));
                        arr_91 [i_1] [i_1] [i_1] [i_1] [i_1] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_71 [i_14] [i_13] [i_14] [i_15])) ^ (((/* implicit */int) arr_71 [i_13 + 1] [i_13 + 1] [i_14] [i_15]))));
                        arr_92 [i_13] [i_13] [i_14] [i_15] = ((/* implicit */short) (~((~(((/* implicit */int) arr_71 [i_1] [i_13] [i_15] [i_18]))))));
                        arr_93 [i_1] [i_13] [i_14] [i_14] [i_14] [i_15] [i_18] = ((/* implicit */long long int) (-(((/* implicit */int) arr_9 [i_13 + 2]))));
                        arr_94 [i_1] [i_13] [i_14] [i_15] [i_18] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)8085))));
                    }
                }
            }
            for (unsigned short i_19 = 0; i_19 < 24; i_19 += 4) 
            {
                arr_97 [i_19] [i_19] = ((/* implicit */_Bool) (+(-2147483622)));
                /* LoopSeq 1 */
                for (signed char i_20 = 2; i_20 < 23; i_20 += 4) 
                {
                    arr_100 [i_1] [i_13] [i_19] [i_20] [i_13] = ((/* implicit */short) ((unsigned char) var_6));
                    arr_101 [i_13] [i_19] [i_13] [i_13] = ((/* implicit */_Bool) arr_56 [i_1] [i_13] [i_20]);
                    arr_102 [i_13] [i_13] [i_19] [i_20] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_96 [i_20 - 2] [i_13] [i_13 + 2]))));
                    arr_103 [i_19] [i_13] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_62 [i_20 - 1]))) < (7452027965986420593LL)));
                    arr_104 [i_1] [i_13] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)30114)) & (((/* implicit */int) ((((/* implicit */int) (signed char)10)) < (((/* implicit */int) (signed char)-10)))))));
                }
            }
            arr_105 [i_1] [16LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -2170595810716504201LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)1))) : (((7267884126349295896LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)38)))))));
            /* LoopSeq 2 */
            for (unsigned int i_21 = 0; i_21 < 24; i_21 += 1) 
            {
                arr_109 [i_21] [i_21] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)47)) & (((/* implicit */int) (unsigned short)32030))));
                arr_110 [i_1] [i_13] [i_21] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967295U)) ? (-1640218585) : (8388607)));
                arr_111 [i_1] [i_21] [(unsigned char)10] [i_21] = ((/* implicit */unsigned char) ((-7267884126349295896LL) ^ (((/* implicit */long long int) -8388595))));
            }
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                arr_114 [(unsigned short)16] [i_1] [i_13] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)38279)) ? (((/* implicit */int) (short)1)) : (arr_10 [i_1] [i_13 + 2])));
                /* LoopNest 2 */
                for (unsigned short i_23 = 2; i_23 < 22; i_23 += 4) 
                {
                    for (int i_24 = 3; i_24 < 21; i_24 += 4) 
                    {
                        {
                            arr_121 [i_13] [i_13] = ((((((/* implicit */int) (signed char)-37)) ^ (arr_112 [i_13] [i_22] [i_24]))) < (((/* implicit */int) (signed char)0)));
                            arr_122 [i_24] [i_13] [i_23] [i_22] [i_13] [i_13] [i_1] = ((((((/* implicit */_Bool) -2037153373)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_84 [i_24] [i_23] [i_13] [i_13] [i_1]))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned char)15)))));
                            arr_123 [i_1] [i_13] [i_22] [i_13] [i_24] = ((/* implicit */_Bool) arr_107 [i_1] [i_13] [i_22] [i_23]);
                        }
                    } 
                } 
                arr_124 [i_1] [i_1] [i_13] [i_13] = ((((/* implicit */long long int) -2037153373)) & (7280168254147917708LL));
                arr_125 [i_13] [i_22] = ((/* implicit */short) ((((/* implicit */long long int) 8388629)) ^ (2328235239843183648LL)));
            }
            arr_126 [i_1] [i_13] [i_13] = ((((/* implicit */_Bool) arr_63 [i_1])) ? (arr_63 [i_13 + 2]) : (((/* implicit */unsigned int) var_5)));
        }
        arr_127 [i_1] [i_1] = ((/* implicit */long long int) ((255U) & (3623628080U)));
    }
    var_18 = var_2;
}
