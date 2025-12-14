/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13036
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
    var_18 = ((((/* implicit */_Bool) ((int) (-(var_17))))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_11)), (((unsigned char) var_16)))))));
    var_19 = ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) var_8)))) : (var_10));
    var_20 = ((/* implicit */unsigned long long int) (-((((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))) : (var_16)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_3))));
            /* LoopSeq 4 */
            for (short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                var_22 ^= ((/* implicit */short) ((long long int) arr_6 [i_0] [i_2] [i_1 + 1]));
                /* LoopSeq 3 */
                for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    arr_11 [i_1] [i_2] [i_1 + 1] [i_1] = ((/* implicit */short) (-(((/* implicit */int) arr_5 [i_0 + 2] [i_0] [i_1] [i_1 + 1]))));
                    var_23 = ((/* implicit */int) arr_8 [i_2]);
                    arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) var_8)) ? (arr_6 [i_2] [i_1] [i_2]) : (((/* implicit */int) var_1)))));
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_2] [i_1 + 1] [i_2])) ? (arr_3 [i_0 + 2] [i_0 + 2] [i_0]) : (arr_3 [i_0 + 3] [i_1 - 1] [i_2]))))));
                    arr_15 [i_1] [i_4] = ((/* implicit */long long int) var_4);
                }
                for (unsigned short i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    arr_18 [i_1] [i_1] [i_2] [i_2] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_0] [i_1 - 1] [i_2] [i_5] [i_0 + 2])) ? (arr_13 [i_0 + 1] [i_1 + 1] [i_2] [i_5] [i_0 + 1]) : (((/* implicit */int) arr_4 [i_1] [i_0] [i_0 - 1]))));
                    var_25 = ((/* implicit */signed char) arr_14 [i_0] [i_1 - 1] [i_1]);
                    arr_19 [i_1] = ((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_1] [i_5]);
                    arr_20 [i_0 + 3] [i_0 + 1] [i_1] [i_2] [i_2] [i_5] = ((/* implicit */short) var_2);
                }
                arr_21 [i_1] = ((/* implicit */unsigned long long int) var_10);
                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_10 [i_2] [i_1] [i_2]))) ? (((((/* implicit */_Bool) arr_13 [i_0] [i_1 - 1] [i_2] [i_2] [i_0])) ? (((/* implicit */int) arr_4 [i_2] [i_1] [i_2])) : (((/* implicit */int) var_14)))) : (((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_1])))))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_7 = 0; i_7 < 24; i_7 += 4) 
                {
                    var_27 = ((/* implicit */short) ((unsigned char) (short)32767));
                    var_28 -= ((/* implicit */unsigned char) (((+(arr_26 [i_0] [i_1] [i_6] [i_7] [i_7] [i_0]))) & (((/* implicit */int) arr_2 [i_0] [i_1 + 1]))));
                }
                for (unsigned int i_8 = 2; i_8 < 21; i_8 += 4) 
                {
                    var_29 *= ((/* implicit */int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (4294967295U) : (4162064409U)));
                    var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) -3587339953631688969LL))) ? (arr_13 [i_0] [i_1 - 1] [i_6] [i_8] [i_0]) : (((/* implicit */int) ((_Bool) arr_0 [i_0]))))))));
                    arr_29 [i_0] [i_1] [i_6] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_8] [i_8 + 3] [i_6] [i_6] [i_1 + 1] [i_0 - 1]))));
                    arr_30 [i_0] [i_8] [i_6] [i_8] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) 495988977)))));
                }
                var_31 -= ((/* implicit */int) ((((/* implicit */_Bool) (+(var_3)))) || (((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) arr_16 [i_0] [i_1 + 1] [4U] [i_0]))))));
                arr_31 [i_0] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) var_2))));
                var_32 = ((/* implicit */int) var_3);
            }
            for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_10 = 0; i_10 < 24; i_10 += 4) 
                {
                    for (signed char i_11 = 0; i_11 < 24; i_11 += 4) 
                    {
                        {
                            var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) arr_37 [i_11] [i_1] [i_0 + 2] [i_10] [i_11]))));
                            arr_41 [i_0] [i_1 + 1] [i_1] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_0] [i_0 + 1] [i_0 - 1] [i_1])) ? (((/* implicit */int) arr_34 [i_0 - 1] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 3]))));
                        }
                    } 
                } 
                var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [i_1 - 1])) ? (((/* implicit */int) arr_32 [i_1 - 1])) : (((/* implicit */int) arr_32 [i_1 - 1])))))));
            }
            for (signed char i_12 = 1; i_12 < 23; i_12 += 3) 
            {
                var_35 = ((((/* implicit */_Bool) arr_7 [i_12 - 1] [i_1 - 1] [i_1 + 1] [i_0 - 1])) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_27 [(signed char)16] [i_1] [i_12]))))) : (arr_40 [i_0 + 2] [i_0 + 1] [i_1 + 1] [i_0]));
                var_36 -= ((/* implicit */unsigned int) ((signed char) ((var_6) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9)))));
            }
        }
        /* LoopNest 3 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (signed char i_14 = 0; i_14 < 24; i_14 += 2) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (int i_16 = 0; i_16 < 24; i_16 += 2) 
                        {
                            arr_56 [i_0] [i_13] [i_14] [i_15] [i_16] [i_13] = ((/* implicit */short) (-(((((/* implicit */int) arr_54 [i_0] [i_0] [i_0] [i_0 + 2] [i_0 + 3])) | (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_2)))))))));
                            arr_57 [i_0] [i_13] [i_16] [i_16] |= ((/* implicit */short) min((-1498885191), (((/* implicit */int) (signed char)57))));
                        }
                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 24; i_17 += 4) 
                        {
                            arr_60 [i_13] [i_13] [i_14] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_46 [i_0 + 2])) || (((/* implicit */_Bool) arr_46 [i_17]))));
                            arr_61 [i_0] [i_13] [i_15] [i_13] = ((/* implicit */signed char) (+(((/* implicit */int) (short)0))));
                        }
                        for (signed char i_18 = 0; i_18 < 24; i_18 += 3) 
                        {
                            var_37 = ((/* implicit */short) (((~(((/* implicit */int) arr_0 [i_0 + 1])))) - (((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) ((unsigned char) arr_9 [i_0] [i_13] [i_14] [i_14] [i_15] [i_18]))))))));
                            var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)0)) ? (1001996847) : (((/* implicit */int) (_Bool)1)))))));
                            var_39 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)21886)) ? (17564294405252768835ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))) ^ (((/* implicit */unsigned long long int) ((unsigned int) arr_8 [i_14])))));
                            arr_65 [i_0] [i_0] [i_13] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_0 [i_0])) - ((-(((/* implicit */int) arr_47 [i_0 + 2] [i_13] [i_14] [i_18]))))))));
                            arr_66 [i_0] [i_18] [i_13] [i_15] [i_18] [i_13] = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) (_Bool)1)), (13207960718517228080ULL))) << ((((~(-1498885191))) - (1498885188)))));
                        }
                        for (signed char i_19 = 0; i_19 < 24; i_19 += 4) 
                        {
                            var_40 = ((/* implicit */int) min((var_40), ((~(((((/* implicit */_Bool) var_1)) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 - 1])))))));
                            arr_69 [i_13] [i_13] [i_14] [i_15] [i_15] [i_19] = ((/* implicit */int) ((unsigned long long int) (short)-7486));
                            var_41 = ((/* implicit */signed char) arr_67 [i_13]);
                            var_42 *= ((/* implicit */unsigned char) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0 + 3]);
                            var_43 -= ((/* implicit */_Bool) ((int) (unsigned char)223));
                        }
                        arr_70 [i_13] [i_14] [i_13] [i_13] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_32 [i_0])) : (arr_68 [i_0 + 1] [i_13] [i_14] [i_13])))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_20 = 0; i_20 < 24; i_20 += 4) 
                        {
                            arr_75 [i_13] [i_13] [i_14] [i_15] [i_20] = ((/* implicit */unsigned char) (((~(((/* implicit */int) (signed char)127)))) % (((((/* implicit */int) var_4)) << (((((/* implicit */int) arr_2 [i_0] [i_13])) - (35)))))));
                            var_44 *= ((/* implicit */unsigned short) var_4);
                            var_45 = ((/* implicit */int) ((unsigned short) arr_33 [i_0 + 1]));
                            var_46 = (i_13 % 2 == zero) ? (((/* implicit */short) ((((/* implicit */int) arr_5 [i_0 + 2] [i_13] [i_13] [i_14])) << (((((/* implicit */int) arr_5 [i_0 + 3] [i_13] [i_13] [i_15])) - (26720)))))) : (((/* implicit */short) ((((((/* implicit */int) arr_5 [i_0 + 2] [i_13] [i_13] [i_14])) + (2147483647))) << (((((((((/* implicit */int) arr_5 [i_0 + 3] [i_13] [i_13] [i_15])) - (26720))) + (42391))) - (2))))));
                            var_47 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(-624938413)))) ? (((/* implicit */unsigned long long int) (~(4294967295U)))) : (((unsigned long long int) (signed char)0))));
                        }
                    }
                } 
            } 
        } 
        arr_76 [i_0] = ((((/* implicit */int) (unsigned char)109)) << (((((/* implicit */int) (short)32767)) - (32746))));
        var_48 = ((/* implicit */int) (~(((var_4) ? (arr_73 [i_0 + 1] [i_0 + 3] [i_0 + 3] [(short)0] [i_0 + 2] [i_0 - 1] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
    }
}
