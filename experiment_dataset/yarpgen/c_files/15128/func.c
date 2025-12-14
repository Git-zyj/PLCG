/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15128
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
    var_11 *= (!(var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */short) ((((_Bool) max((((/* implicit */signed char) var_2)), ((signed char)-39)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0])) << (((/* implicit */int) arr_5 [i_0] [(signed char)15] [i_0]))))) < (((unsigned long long int) (signed char)85))))) : (((/* implicit */int) arr_4 [i_1]))));
                arr_7 [(short)22] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)39)) << (((((/* implicit */int) arr_5 [i_1] [(_Bool)1] [i_1])) - (12))))) < (((((/* implicit */int) var_7)) & (((/* implicit */int) (signed char)-60))))));
                /* LoopSeq 2 */
                for (short i_2 = 1; i_2 < 24; i_2 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        var_13 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((arr_3 [i_0]) ? (((/* implicit */int) arr_3 [(short)23])) : (((/* implicit */int) (unsigned short)2742))))) ? (((/* implicit */int) arr_5 [(_Bool)1] [i_2 + 1] [i_2])) : (((var_0) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))))), ((~(((/* implicit */int) arr_3 [i_0]))))));
                        arr_13 [i_0] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)62778)) ? (min((-5523230448053943714LL), (((/* implicit */long long int) (unsigned short)62794)))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                    var_14 = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) max((arr_11 [i_0] [i_2] [i_0] [i_0]), (((/* implicit */short) arr_2 [i_0] [i_2])))))));
                    var_15 = ((/* implicit */short) ((int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_11 [i_1] [i_2] [i_1] [11])), ((unsigned short)32704)))))));
                }
                for (short i_4 = 1; i_4 < 24; i_4 += 1) /* same iter space */
                {
                    var_16 = ((/* implicit */signed char) (~(((/* implicit */int) max((arr_15 [i_4] [i_0] [i_4]), (((/* implicit */unsigned char) var_7)))))));
                    /* LoopSeq 4 */
                    for (int i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        arr_20 [i_0] [i_1] [i_4] [i_4] = ((/* implicit */short) (_Bool)0);
                        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */long long int) ((unsigned int) arr_17 [6] [i_1] [(_Bool)1]))) | (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) & ((~(arr_1 [i_5] [i_5]))))))))));
                        arr_21 [i_0] [(signed char)14] [16LL] [i_0] [i_0] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((8ULL), (((/* implicit */unsigned long long int) arr_12 [(unsigned short)0] [i_4 - 1] [i_4 + 1] [(signed char)7]))))) ? ((~(-5523230448053943701LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_16 [i_0] [i_0] [i_5]) & (arr_16 [i_5] [(short)4] [i_5])))) ? (((/* implicit */int) min(((unsigned short)2745), (((/* implicit */unsigned short) arr_5 [i_4] [i_4] [i_4]))))) : (((((/* implicit */_Bool) (signed char)-39)) ? (((/* implicit */int) (signed char)-91)) : (((/* implicit */int) arr_0 [i_0])))))))));
                    }
                    for (long long int i_6 = 1; i_6 < 23; i_6 += 4) 
                    {
                        var_18 = ((/* implicit */signed char) min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) arr_6 [i_4 + 1] [9LL] [i_6 - 1])) ? (((/* implicit */int) arr_6 [i_4 + 1] [i_4 + 1] [i_6 + 1])) : (((/* implicit */int) var_0))))));
                        arr_26 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_5 [i_6] [i_6] [i_4 + 1])) ? (arr_16 [i_6 - 1] [i_6] [(unsigned char)14]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [(signed char)7] [i_4 + 1]))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_4 - 1])))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_9 [i_6 + 2]), (arr_22 [i_0] [i_1] [i_0] [i_4 + 1] [i_6 - 1] [i_7])))) ? (((/* implicit */int) arr_11 [i_4] [i_4] [(unsigned char)6] [(_Bool)0])) : ((~(((/* implicit */int) min((arr_23 [(signed char)23] [i_6] [i_4] [i_0]), (var_3))))))));
                            var_20 = (_Bool)1;
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)203))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [(signed char)5] [23LL] [i_4] [i_4] [i_4 - 1] [i_4]))))) : (((/* implicit */int) arr_28 [i_1] [i_1] [(unsigned char)15]))));
                            var_22 ^= ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) arr_12 [i_0] [i_1] [(signed char)14] [16])) : (var_4)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_24 [(unsigned char)20] [i_7])) : (((/* implicit */int) (unsigned char)182)))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_6])) ? (((/* implicit */int) arr_28 [i_6] [i_6] [i_6])) : (((/* implicit */int) (signed char)(-127 - 1))))))), (max((((/* implicit */int) arr_23 [i_7] [i_6 - 1] [i_4] [i_1])), (((((/* implicit */int) arr_10 [i_0] [i_1] [i_7] [i_7])) + (((/* implicit */int) arr_15 [(signed char)12] [(signed char)12] [i_7]))))))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 25; i_8 += 2) /* same iter space */
                        {
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_8)), (-362013002)))) ? ((~(((/* implicit */int) arr_17 [i_0] [i_1] [(unsigned short)2])))) : (((/* implicit */int) min((arr_24 [7LL] [i_6]), (((/* implicit */unsigned short) arr_3 [i_1])))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_4]))) / (-5523230448053943701LL)))) && (((/* implicit */_Bool) min((((/* implicit */short) var_7)), (arr_8 [i_0] [i_1]))))))) : (((/* implicit */int) arr_24 [i_0] [i_0])))))));
                            arr_34 [i_0] [i_8] [i_4] [i_4] [i_8] = (short)-1;
                        }
                        for (unsigned char i_9 = 0; i_9 < 25; i_9 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */signed char) min((((/* implicit */int) min((((/* implicit */unsigned char) arr_19 [(short)13] [i_1] [i_4] [18LL] [i_1] [24ULL])), ((unsigned char)228)))), (((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [(signed char)9]))))) % (((/* implicit */int) ((((/* implicit */_Bool) (short)24423)) && (arr_10 [i_9] [i_4] [i_4] [i_0]))))))));
                            var_25 |= ((/* implicit */int) (short)27171);
                        }
                        for (short i_10 = 2; i_10 < 23; i_10 += 2) 
                        {
                            arr_41 [i_6] [i_10] [i_4] [i_1] [i_4] = ((/* implicit */short) 8LL);
                            arr_42 [i_0] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((int) arr_37 [i_0] [i_6] [i_10]))) - (((unsigned int) min((arr_37 [i_0] [(signed char)12] [i_4]), (((/* implicit */short) var_1)))))));
                            arr_43 [i_4] [(_Bool)1] [i_4] [21U] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_27 [i_0] [i_1] [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_28 [i_0] [i_1] [i_10])) : ((~(max((((/* implicit */int) (short)26253)), (-1)))))));
                        }
                        var_26 = ((/* implicit */_Bool) min((var_26), (arr_10 [i_0] [i_1] [i_0] [i_6])));
                    }
                    for (long long int i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        arr_46 [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) max((arr_18 [i_4 + 1] [i_11]), (arr_18 [i_4 - 1] [i_11]))))));
                        arr_47 [i_0] [i_4] [i_4] [(signed char)17] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((0) & (((/* implicit */int) (short)-31565))))))))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 3) 
                        {
                            arr_52 [i_0] [i_4] [i_4] [i_12] [(short)8] = ((/* implicit */short) arr_44 [i_1]);
                            arr_53 [i_0] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */long long int) (signed char)78);
                            arr_54 [i_4] [i_1] [(unsigned short)18] [i_12] [i_4] = ((/* implicit */unsigned short) 3883066003602051635LL);
                            var_27 = ((/* implicit */_Bool) max((var_27), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_12] [i_1] [i_1])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [(short)11])) : (((/* implicit */int) arr_12 [i_0] [i_12] [i_4] [i_4 + 1])))))))));
                        }
                        for (short i_14 = 1; i_14 < 24; i_14 += 3) 
                        {
                            arr_59 [i_0] [i_0] [i_4] [i_12] [i_12] [i_4] = max((((((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_0] [i_1] [i_4] [i_4] [i_4])) || (((/* implicit */_Bool) arr_37 [8ULL] [i_0] [i_0]))))) >> (((((/* implicit */int) arr_29 [i_4 + 1] [i_14] [i_14 - 1] [i_14 - 1] [(short)9] [i_14])) - (24568))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 0LL)) / (11ULL)))) ? (((((/* implicit */int) (unsigned char)67)) << (((((/* implicit */int) arr_57 [i_0] [i_0] [i_0] [(short)1] [i_0] [i_0])) - (16927))))) : (((/* implicit */int) var_5)))));
                            var_28 = ((/* implicit */short) var_5);
                            arr_60 [i_14] [19] [i_14] [i_14] [i_4] [i_14] = ((/* implicit */signed char) ((unsigned char) ((_Bool) ((((/* implicit */_Bool) 8312061317504590858ULL)) && (var_0)))));
                        }
                        for (long long int i_15 = 0; i_15 < 25; i_15 += 1) /* same iter space */
                        {
                            var_29 -= ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) max((arr_23 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */short) arr_10 [i_1] [i_4] [i_1] [(_Bool)1])))))) <= (5523230448053943701LL))) ? (((/* implicit */int) var_3)) : (((((/* implicit */int) (short)18633)) + (((/* implicit */int) arr_35 [(short)7] [i_4 - 1] [i_4 - 1] [i_4] [i_4 + 1] [i_4] [i_4 + 1]))))));
                            arr_63 [i_0] [i_4] = ((/* implicit */long long int) ((((((/* implicit */int) arr_36 [i_4 - 1] [i_4 - 1] [i_4])) > (((/* implicit */int) arr_14 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)30943)) - (((/* implicit */int) max((var_8), (var_8))))))) : (1818437505U)));
                        }
                        for (long long int i_16 = 0; i_16 < 25; i_16 += 1) /* same iter space */
                        {
                            arr_66 [i_1] [i_4] [i_16] = var_5;
                            arr_67 [i_4] [i_1] [i_4] [i_12] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((unsigned char) arr_23 [i_0] [i_4] [i_12] [i_16]))) ? (((/* implicit */int) arr_4 [i_4])) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)151)))))), (((/* implicit */int) arr_65 [i_0] [i_0] [(unsigned short)3] [i_12] [i_16]))));
                            var_30 *= ((/* implicit */_Bool) arr_32 [i_0] [18LL] [i_4] [i_1] [i_16]);
                        }
                        var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) (~((~(((var_1) ? (((/* implicit */int) arr_49 [i_0] [i_1] [i_1] [i_1])) : (((/* implicit */int) (unsigned char)198)))))))))));
                    }
                    var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((int) var_2)))) ? (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)227)), (-1773685876)))) ? (arr_58 [i_0] [i_0] [i_1] [i_1] [i_1] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned char)110)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                    arr_68 [i_4] = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) arr_40 [i_0] [i_0] [i_0] [i_0] [i_1] [i_4] [7])))) ? (((((/* implicit */_Bool) (unsigned short)39954)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_57 [i_0] [i_1] [i_4 - 1] [i_4 - 1] [i_4] [i_0])))), (((((/* implicit */_Bool) min((((/* implicit */int) var_5)), (var_4)))) ? (((((/* implicit */_Bool) arr_62 [(unsigned char)16] [(unsigned short)12] [1ULL] [i_4] [i_4])) ? (((/* implicit */int) (signed char)0)) : (-650279623))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_14 [(unsigned short)1] [(unsigned char)16] [(unsigned char)16] [i_4])) : (((/* implicit */int) (unsigned char)130))))))));
                }
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_3)) | (((/* implicit */int) max(((signed char)-63), ((signed char)-45)))))) ^ (((/* implicit */int) max((var_9), (((/* implicit */unsigned short) max((((/* implicit */signed char) var_0)), (var_5))))))))))));
    var_34 = ((/* implicit */signed char) -5523230448053943694LL);
}
