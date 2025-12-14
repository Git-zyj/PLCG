/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105863
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
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_18 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)170)) * (((/* implicit */int) var_8))))), (arr_4 [i_0] [12ULL] [i_0]))) : (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)215))) - (var_4))) + (((/* implicit */unsigned int) ((/* implicit */int) min((var_14), ((_Bool)1))))))))));
                var_19 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_3)))) != (((((/* implicit */_Bool) var_10)) ? (arr_4 [i_0] [(unsigned char)16] [i_0]) : (arr_4 [i_1] [i_1] [i_1])))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        arr_9 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(max((((/* implicit */int) (short)2644)), (-2058062802)))))) ? (((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) 490285176U)) ? (var_13) : (((/* implicit */int) var_6)))) + (2147483647))) << (((((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_2] [i_2])) : (((/* implicit */int) (short)-8396)))) + (17561))) - (31)))))) : (((((/* implicit */_Bool) (short)2644)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) / (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2656)))))));
        arr_10 [i_2] = ((/* implicit */unsigned short) var_11);
        /* LoopSeq 4 */
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            arr_15 [i_2] [i_3] = ((/* implicit */unsigned char) ((((unsigned long long int) ((((/* implicit */int) (short)-2644)) != (((/* implicit */int) arr_1 [i_2]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)73))) == (arr_12 [i_2])))))));
            var_20 -= ((((/* implicit */_Bool) ((signed char) arr_4 [i_2] [i_2] [i_2]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2]))) : (((((/* implicit */_Bool) arr_1 [i_2])) ? (arr_4 [i_2] [i_3] [i_2]) : (-649481842123424349LL))));
            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (-((+(arr_4 [i_2] [i_3] [i_2]))))))));
            arr_16 [i_2] [1] = ((((/* implicit */_Bool) max((((/* implicit */long long int) var_14)), (var_5)))) ? (min((arr_8 [16LL]), (((/* implicit */unsigned long long int) (~(var_15)))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-8403)) : (((/* implicit */int) var_8)))), (((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */int) arr_14 [15] [15]))))))));
        }
        /* vectorizable */
        for (signed char i_4 = 2; i_4 < 17; i_4 += 1) 
        {
            arr_19 [i_4] [i_2] [i_4] = ((/* implicit */_Bool) ((unsigned short) var_7));
            arr_20 [i_4] = ((/* implicit */short) (+(((/* implicit */int) arr_7 [i_4 - 2]))));
            /* LoopSeq 4 */
            for (unsigned int i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                var_22 &= ((/* implicit */short) (+(((/* implicit */int) arr_18 [i_4 + 1] [(unsigned char)2] [i_2]))));
                arr_23 [i_4] = ((/* implicit */short) arr_6 [i_2]);
            }
            for (unsigned long long int i_6 = 2; i_6 < 16; i_6 += 2) 
            {
                arr_26 [i_4] [i_2] [i_6] = ((/* implicit */short) (-(((/* implicit */int) var_0))));
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) 
                {
                    for (int i_8 = 0; i_8 < 18; i_8 += 1) 
                    {
                        {
                            arr_33 [i_2] [i_4] [i_6] [i_4] = ((/* implicit */_Bool) (-(arr_25 [i_4 + 1] [i_4] [i_6 - 2])));
                            var_23 ^= ((/* implicit */signed char) var_2);
                        }
                    } 
                } 
            }
            for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 3) 
            {
                arr_37 [(short)17] [i_9] [i_4] = ((/* implicit */long long int) ((arr_29 [i_4]) < (arr_29 [i_4])));
                var_24 -= ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-126))));
            }
            for (signed char i_10 = 2; i_10 < 15; i_10 += 4) 
            {
                arr_41 [i_4] [(unsigned char)9] = ((/* implicit */unsigned char) var_15);
                arr_42 [i_2] [3LL] [i_10 + 1] [i_4] = ((/* implicit */unsigned long long int) arr_13 [2LL]);
                var_25 = ((/* implicit */signed char) var_10);
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (int i_12 = 0; i_12 < 18; i_12 += 2) 
                    {
                        {
                            var_26 = (short)-32742;
                            arr_48 [i_4] [i_4 + 1] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) var_13))) > ((-(536870880)))));
                        }
                    } 
                } 
            }
        }
        for (short i_13 = 0; i_13 < 18; i_13 += 2) 
        {
            var_27 = ((/* implicit */short) arr_43 [i_2] [i_2] [i_2]);
            arr_51 [i_2] = ((/* implicit */int) ((var_5) < (((/* implicit */long long int) ((int) (short)2654)))));
        }
        /* vectorizable */
        for (short i_14 = 0; i_14 < 18; i_14 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_15 = 0; i_15 < 18; i_15 += 4) 
            {
                arr_60 [1LL] [i_14] [i_15] = ((/* implicit */signed char) ((_Bool) (-(((/* implicit */int) (_Bool)1)))));
                /* LoopSeq 2 */
                for (long long int i_16 = 0; i_16 < 18; i_16 += 3) 
                {
                    var_28 = 1065088340;
                    var_29 = ((/* implicit */short) 1071644672);
                    arr_65 [i_15] [(signed char)7] = ((/* implicit */_Bool) (-(var_7)));
                }
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    var_30 *= ((/* implicit */long long int) ((short) ((((/* implicit */int) (signed char)49)) / (var_13))));
                    /* LoopSeq 1 */
                    for (unsigned short i_18 = 0; i_18 < 18; i_18 += 3) 
                    {
                        var_31 = ((/* implicit */_Bool) arr_47 [i_2] [i_14] [i_15] [i_17] [i_2] [i_14] [i_2]);
                        var_32 = (~((~(12123501199322741170ULL))));
                        arr_70 [(signed char)7] [i_14] [i_17] [i_17] = ((/* implicit */unsigned char) var_8);
                        arr_71 [i_2] [i_14] [i_15] [i_17] [i_18] [i_14] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_6 [i_15])))) != (arr_27 [i_2] [i_14])));
                        var_33 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) (unsigned char)150))) & (((/* implicit */int) arr_32 [i_2] [i_2] [i_15] [i_14] [i_17] [i_15] [i_14]))));
                    }
                    var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) (unsigned char)188))));
                }
                arr_72 [i_2] [i_14] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */int) ((var_12) || (((/* implicit */_Bool) (unsigned char)143))))) != (((/* implicit */int) (short)2656))));
            }
            arr_73 [4U] = ((unsigned long long int) (short)13819);
            /* LoopNest 2 */
            for (unsigned long long int i_19 = 1; i_19 < 16; i_19 += 4) 
            {
                for (signed char i_20 = 0; i_20 < 18; i_20 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_21 = 3; i_21 < 14; i_21 += 4) 
                        {
                            arr_82 [i_2] [i_14] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */long long int) arr_29 [i_20])) - (3136502214392073621LL)));
                            arr_83 [i_21] [i_20] [i_19] [i_19] [i_21 + 4] [(_Bool)1] = ((/* implicit */signed char) ((var_3) ^ (((/* implicit */int) var_8))));
                        }
                        for (short i_22 = 0; i_22 < 18; i_22 += 4) 
                        {
                            var_35 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_9)) | (8935299474691690078ULL)));
                            var_36 = ((/* implicit */unsigned long long int) ((arr_74 [i_2] [i_19 + 2]) == (((/* implicit */unsigned int) var_3))));
                            arr_87 [i_2] [(short)10] [(short)10] [i_14] [i_19] [i_22] = ((/* implicit */int) var_4);
                        }
                        arr_88 [i_14] [i_14] [(_Bool)1] = ((/* implicit */_Bool) var_7);
                        var_37 += ((/* implicit */unsigned char) ((7634519926446046351ULL) | (((/* implicit */unsigned long long int) 3136502214392073621LL))));
                    }
                } 
            } 
        }
        arr_89 [i_2] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_56 [i_2] [i_2]))))));
    }
    for (signed char i_23 = 1; i_23 < 14; i_23 += 4) 
    {
        /* LoopNest 3 */
        for (int i_24 = 0; i_24 < 16; i_24 += 3) 
        {
            for (unsigned int i_25 = 3; i_25 < 14; i_25 += 1) 
            {
                for (signed char i_26 = 0; i_26 < 16; i_26 += 3) 
                {
                    {
                        arr_99 [15ULL] [i_23] [1ULL] [i_26] [i_23] [i_23] = (-(min((min((arr_47 [i_23 + 2] [i_23 + 2] [i_23 + 2] [i_25] [i_23] [i_23 + 2] [i_23 + 2]), (((/* implicit */unsigned long long int) (short)-5408)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (unsigned char)0)), (var_0)))))));
                        arr_100 [i_25] [i_26] [i_23] [i_24] [i_25] [i_25] = ((/* implicit */unsigned short) arr_79 [i_23] [i_24] [i_25] [i_25]);
                    }
                } 
            } 
        } 
        arr_101 [i_23] = ((/* implicit */long long int) arr_32 [i_23] [i_23] [11LL] [i_23] [i_23] [i_23] [i_23 + 2]);
        var_38 = ((/* implicit */unsigned short) min((var_38), (max((max((var_0), (var_0))), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_15)) <= (max((var_7), (((/* implicit */unsigned long long int) arr_35 [i_23] [i_23] [i_23] [i_23])))))))))));
        arr_102 [i_23] = ((/* implicit */_Bool) max((((/* implicit */long long int) max((min((var_9), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_0 [i_23] [i_23]))))), ((+((((_Bool)1) ? ((-9223372036854775807LL - 1LL)) : (-3136502214392073622LL)))))));
    }
}
