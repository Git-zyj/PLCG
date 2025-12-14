/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158614
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */unsigned long long int) ((arr_4 [i_0] [i_2]) > (arr_4 [i_0] [i_1])));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 1; i_4 < 9; i_4 += 3) 
                        {
                            var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) (short)31849))));
                            var_12 = ((/* implicit */signed char) 14654661332799892997ULL);
                            var_13 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 14654661332799892977ULL))));
                        }
                        arr_12 [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) (short)-19304))));
                        arr_13 [i_2] [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
                    }
                    arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_4 [i_0] [i_2]);
                    var_14 += ((/* implicit */long long int) (-(arr_7 [i_0] [i_1] [8ULL])));
                }
            } 
        } 
        var_15 = ((/* implicit */short) arr_7 [i_0] [i_0] [i_0]);
        /* LoopSeq 4 */
        for (long long int i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            arr_17 [i_0] [i_0] = ((/* implicit */short) (unsigned char)0);
            /* LoopNest 3 */
            for (int i_6 = 2; i_6 < 8; i_6 += 3) 
            {
                for (short i_7 = 2; i_7 < 10; i_7 += 3) 
                {
                    for (short i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        {
                            arr_29 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_6 + 1] [i_7 + 1] [i_8])) ? (arr_22 [i_7 - 2] [i_7 + 1] [i_7] [i_7 + 1]) : (((/* implicit */long long int) arr_20 [i_6 + 2] [i_7 - 2] [i_6 + 2]))));
                            var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_8] [i_6] [i_7] [i_8] [i_7 - 1] [i_7 - 1])) ? (((((/* implicit */_Bool) (unsigned char)146)) ? (arr_19 [i_8] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_5] [i_0]))))) : ((+(-3684266900075120027LL)))));
                        }
                    } 
                } 
            } 
            arr_30 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)101))));
            /* LoopSeq 3 */
            for (long long int i_9 = 0; i_9 < 11; i_9 += 3) 
            {
                arr_33 [i_0] [2ULL] [i_5] [i_0] = ((/* implicit */short) ((((arr_20 [i_0] [i_0] [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))) ? (((/* implicit */int) arr_11 [i_0] [i_0] [(short)6] [i_0] [i_0] [i_9])) : (((/* implicit */int) (unsigned short)50139))));
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((long long int) 3864525442U)) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)3)) % (((/* implicit */int) var_2))))))))));
            }
            for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 4) 
            {
                arr_36 [(signed char)9] [(signed char)9] [i_5] [i_0] = ((/* implicit */short) arr_25 [i_0] [i_0] [i_0] [i_0]);
                var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-7347))));
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_19 = ((((/* implicit */_Bool) (unsigned char)146)) && (((/* implicit */_Bool) 14654661332799893006ULL)));
                var_20 = ((/* implicit */unsigned short) var_3);
            }
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            arr_42 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned short)65535)))) ? (((17278010974398668546ULL) >> (((arr_3 [i_0]) - (1474268550U))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [(signed char)0] [i_0] [i_0])))));
            /* LoopNest 3 */
            for (long long int i_13 = 3; i_13 < 10; i_13 += 4) 
            {
                for (unsigned long long int i_14 = 2; i_14 < 10; i_14 += 3) 
                {
                    for (unsigned int i_15 = 3; i_15 < 8; i_15 += 3) 
                    {
                        {
                            arr_50 [i_0] [i_12] [i_12] [i_0] [(unsigned char)6] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)63)) ? (var_3) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */int) arr_48 [i_12])) : (((/* implicit */int) (signed char)-85)))))));
                            arr_51 [i_0] [(unsigned char)4] [i_0] [i_14] [(unsigned char)4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-25)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32635))) : ((+(1168733099310883080ULL)))));
                            var_21 = ((/* implicit */long long int) (short)25216);
                            var_22 ^= ((/* implicit */signed char) (_Bool)1);
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_16 = 0; i_16 < 11; i_16 += 1) 
            {
                arr_54 [i_0] [i_12] [i_12] = ((/* implicit */short) (-(((/* implicit */int) arr_34 [i_0] [1LL] [i_16]))));
                arr_55 [i_0] = ((/* implicit */unsigned short) ((short) arr_40 [i_0] [i_0]));
            }
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)161))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned short)2372))))) : (((/* implicit */int) arr_28 [i_0] [i_12] [i_12]))));
        }
        for (signed char i_17 = 0; i_17 < 11; i_17 += 3) 
        {
            var_24 = ((/* implicit */short) (signed char)-64);
            var_25 = ((/* implicit */unsigned short) ((unsigned int) (~(-1154414997))));
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)25404)) ? (((/* implicit */int) (short)-28199)) : ((-(((/* implicit */int) arr_43 [i_0] [i_0] [i_0] [i_17]))))));
        }
        for (short i_18 = 2; i_18 < 10; i_18 += 1) 
        {
            var_27 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_0] [10ULL] [10ULL] [i_0])) ? (((/* implicit */int) arr_53 [i_0] [i_18])) : (((/* implicit */int) arr_18 [i_18] [(short)8] [i_0]))))) ? (((arr_21 [i_0] [i_0] [i_18] [i_18]) * (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)242))));
            var_28 = ((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_0]);
        }
    }
    for (long long int i_19 = 3; i_19 < 13; i_19 += 3) 
    {
        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) 1036921890994653010ULL))) ? (14654661332799892997ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28202)))));
        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_62 [i_19 - 1])) ? ((-(((/* implicit */int) arr_61 [(short)4])))) : ((((+(((/* implicit */int) (short)28202)))) / (((((/* implicit */int) (short)-12251)) * (((/* implicit */int) (unsigned short)65532))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_20 = 0; i_20 < 14; i_20 += 1) 
        {
            /* LoopSeq 3 */
            for (short i_21 = 0; i_21 < 14; i_21 += 1) 
            {
                var_31 ^= ((/* implicit */int) (!(((/* implicit */_Bool) 670672480901226983LL))));
                var_32 = ((/* implicit */short) arr_63 [i_20] [i_20] [i_20]);
            }
            for (unsigned short i_22 = 1; i_22 < 10; i_22 += 3) 
            {
                var_33 |= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) - (((/* implicit */int) (unsigned short)1))));
                var_34 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_61 [i_19 - 1])) ? (((/* implicit */int) (unsigned short)65525)) : (2097151)));
            }
            for (unsigned int i_23 = 0; i_23 < 14; i_23 += 1) 
            {
                var_35 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)32766))));
                var_36 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 121096118)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_65 [i_20] [i_23])))) ? (arr_72 [i_19 + 1] [i_20]) : (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)32752))))));
                arr_73 [i_19] [i_19] [i_20] = arr_67 [i_19 - 2] [i_19 - 1];
                arr_74 [i_20] [7] [i_23] [i_23] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)127))))) ? (((/* implicit */int) (unsigned short)65528)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_67 [i_20] [i_20])) && (((/* implicit */_Bool) arr_64 [0LL] [i_20] [6])))))));
            }
            arr_75 [i_20] [i_20] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_66 [i_19] [i_19] [i_19 + 1] [i_19 - 1])) ? (((/* implicit */int) arr_66 [i_19 - 2] [i_19 - 2] [i_19 - 3] [i_19 - 1])) : (((/* implicit */int) arr_66 [i_19] [i_19] [i_19 - 3] [i_19 - 1]))));
        }
        /* vectorizable */
        for (long long int i_24 = 4; i_24 < 13; i_24 += 4) 
        {
            arr_80 [i_19] = ((/* implicit */signed char) ((((((/* implicit */_Bool) -3705908244527955701LL)) ? (arr_77 [i_19] [i_24]) : (((/* implicit */long long int) ((/* implicit */int) (short)32767))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32757)) ? (((/* implicit */int) (short)32766)) : (2097151))))));
            var_37 = ((/* implicit */int) (short)-32766);
            /* LoopNest 3 */
            for (long long int i_25 = 0; i_25 < 14; i_25 += 4) 
            {
                for (unsigned char i_26 = 0; i_26 < 14; i_26 += 4) 
                {
                    for (signed char i_27 = 0; i_27 < 14; i_27 += 3) 
                    {
                        {
                            var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_83 [i_19] [i_19] [i_19] [i_19] [(signed char)0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 9767542760503373510ULL))))) : (((/* implicit */int) (unsigned short)1))));
                            arr_87 [i_19 - 2] [i_19 - 1] [i_19] [i_19 - 1] [i_19] [i_19] [i_19 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_68 [i_19 + 1])) ? (arr_68 [i_19 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)186)))));
                        }
                    } 
                } 
            } 
        }
        for (short i_28 = 0; i_28 < 14; i_28 += 3) 
        {
            var_39 = ((/* implicit */long long int) (+((-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)49152))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
            {
                var_40 = ((/* implicit */unsigned long long int) max((var_40), (((/* implicit */unsigned long long int) arr_82 [i_19 - 2] [9LL] [i_28] [(signed char)3]))));
                var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) (!(((/* implicit */_Bool) 8946193108535482521ULL)))))));
            }
        }
        arr_92 [i_19] [i_19] = ((/* implicit */short) min(((~(((((/* implicit */_Bool) (short)-32762)) ? (arr_79 [i_19]) : (((/* implicit */unsigned int) arr_72 [i_19] [i_19])))))), (((/* implicit */unsigned int) arr_89 [0]))));
    }
    for (long long int i_30 = 0; i_30 < 19; i_30 += 4) 
    {
        arr_97 [10LL] [i_30] = arr_93 [i_30];
        var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)26402)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)239))) : (var_3)))))) ? (((/* implicit */int) (short)-32745)) : (((/* implicit */int) arr_96 [i_30]))));
        arr_98 [i_30] = ((/* implicit */unsigned int) ((unsigned short) max(((short)32745), (arr_96 [i_30]))));
        arr_99 [i_30] [(_Bool)1] = ((/* implicit */_Bool) max((((/* implicit */int) ((short) (unsigned short)65535))), ((+(((/* implicit */int) (short)-32744))))));
        var_43 = ((/* implicit */unsigned long long int) (-(min((((/* implicit */int) (_Bool)1)), (((int) 8860849221965878748ULL))))));
    }
    var_44 = ((/* implicit */unsigned long long int) min((var_44), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_0), (((/* implicit */short) max(((unsigned char)238), (((/* implicit */unsigned char) var_8)))))))))))));
    var_45 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) (-((((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))))) : (var_3)));
}
