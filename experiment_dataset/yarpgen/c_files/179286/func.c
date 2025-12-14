/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179286
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                /* LoopSeq 3 */
                for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    var_17 = ((/* implicit */unsigned short) arr_4 [i_1]);
                    var_18 += (signed char)-28;
                    /* LoopSeq 3 */
                    for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        var_19 |= ((/* implicit */signed char) (unsigned short)52573);
                        var_20 = arr_5 [i_0] [i_0] [(signed char)9] [i_0];
                    }
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)1685)) ? (((/* implicit */int) arr_8 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1])) : ((~(((/* implicit */int) (unsigned short)18140))))));
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (arr_14 [i_0 - 1] [i_5] [i_3] [i_0 - 1] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0])))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned int) (unsigned short)0);
                        var_24 = ((/* implicit */unsigned char) ((signed char) (unsigned char)209));
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0 + 1] [8U] [i_0] [10ULL])) << (((((/* implicit */int) arr_11 [i_0 - 1] [i_0 - 1] [i_2] [(signed char)12] [i_6] [(unsigned short)2])) - (37460)))))) && (((/* implicit */_Bool) (short)27863))));
                        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((short) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned short)8911)) : (((/* implicit */int) (short)32764))))))));
                    }
                }
                for (unsigned short i_7 = 1; i_7 < 11; i_7 += 3) 
                {
                    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((11463075025891043113ULL) < (18446744073709551615ULL))))));
                    arr_21 [i_7] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) arr_2 [i_0 - 1] [i_0 - 1])))));
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(1896244046)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_7 - 1] [i_7 - 1] [i_7 + 2] [i_7 - 1]))) : (26ULL)));
                    var_29 = ((/* implicit */unsigned long long int) min((var_29), (arr_18 [i_0] [i_2])));
                }
                for (signed char i_8 = 0; i_8 < 13; i_8 += 1) 
                {
                    var_30 = arr_9 [i_0 + 1] [i_8];
                    var_31 = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_0])) ? (((((/* implicit */int) (short)-27864)) & (((/* implicit */int) arr_13 [i_1] [i_8] [i_2] [i_1] [i_8] [i_0])))) : (((/* implicit */int) var_11))));
                    var_32 = arr_8 [i_0 + 1] [i_1] [i_2] [i_2] [i_8];
                }
                var_33 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_0 + 1] [(unsigned short)6] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [9U] [i_0]))) : (arr_15 [10LL] [i_1] [12U] [12U])))) & (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_14 [i_0] [i_0] [i_2] [i_2] [i_2]) : (arr_18 [i_0 + 1] [i_2])))));
                var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-27522)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1] [i_0])))))) : (4294967288U)));
            }
            var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [5LL] [i_1])))))));
        }
        /* vectorizable */
        for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 2) 
        {
            var_36 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) | (-7020170483031802061LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) % (3993916794U)))) : (((((/* implicit */_Bool) arr_20 [(signed char)8] [i_9] [i_9])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32752)))))));
            var_37 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_9] [2ULL] [i_9])) ? (((/* implicit */int) arr_2 [i_0] [i_9])) : (((/* implicit */int) (unsigned short)36142))))) ? (((((/* implicit */int) (signed char)53)) << (((13630258269376268724ULL) - (13630258269376268716ULL))))) : (((/* implicit */int) ((unsigned short) arr_17 [i_9] [i_0 + 1] [i_0 + 1])))));
        }
        for (signed char i_10 = 0; i_10 < 13; i_10 += 1) 
        {
            var_38 = ((/* implicit */signed char) max((((((/* implicit */int) arr_7 [9ULL] [i_0 + 1])) / (((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_0])) || (((/* implicit */_Bool) 2406286698U))))))), (((/* implicit */int) arr_7 [i_0] [i_10]))));
            arr_29 [i_10] = ((/* implicit */short) max((((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_25 [i_0] [i_10]))))), (((((/* implicit */_Bool) (signed char)-67)) ? (((/* implicit */int) arr_6 [i_10] [(signed char)1] [i_0])) : (((/* implicit */int) (_Bool)0))))))), ((((!(((/* implicit */_Bool) arr_3 [(unsigned short)1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_23 [i_0 - 1] [(signed char)12] [i_0 - 1] [i_0 - 1])))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_10]))) / (arr_17 [i_0] [i_0] [i_0])))))));
            var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)37898)) ? (((/* implicit */int) (unsigned short)65521)) : (((/* implicit */int) (_Bool)1))));
        }
        for (unsigned short i_11 = 1; i_11 < 10; i_11 += 3) 
        {
            arr_34 [i_11] = ((/* implicit */unsigned long long int) arr_26 [i_11 + 2]);
            var_40 = ((/* implicit */signed char) ((((arr_15 [4U] [4U] [i_11] [i_0]) + (((/* implicit */long long int) ((((/* implicit */int) arr_24 [i_0] [i_11])) * (((/* implicit */int) arr_10 [i_0] [7U] [i_11] [i_11]))))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) / (var_7)))) ? ((((_Bool)1) ? (((/* implicit */int) arr_6 [i_11 - 1] [i_11 - 1] [2])) : (((/* implicit */int) var_4)))) : ((+(((/* implicit */int) (signed char)90)))))))));
            arr_35 [i_11] = ((/* implicit */short) arr_14 [4] [i_11] [i_11] [i_0] [(signed char)5]);
        }
        arr_36 [(signed char)1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((unsigned long long int) (signed char)79)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)10417))))))));
        var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0 + 1])) : (((/* implicit */int) arr_33 [i_0 + 1]))))) ? (((((/* implicit */int) arr_33 [i_0 - 1])) - (((/* implicit */int) arr_24 [i_0] [i_0 + 1])))) : (((((/* implicit */_Bool) 852988461U)) ? (((/* implicit */int) arr_24 [i_0] [i_0 - 1])) : (((/* implicit */int) arr_33 [i_0 + 1])))))))));
        var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_33 [8U])) + (2147483647))) << (((((((/* implicit */int) arr_33 [i_0 - 1])) + (28))) - (24)))))) ? (arr_18 [i_0] [(signed char)12]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)56642)) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [2LL] [(signed char)10] [i_0 - 1] [i_0 - 1]))) : (arr_1 [i_0]))))))) ? (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_0 [i_0 - 1])), (var_13)))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned short)11720)) * (((/* implicit */int) arr_25 [i_0] [i_0]))))))))))));
        /* LoopSeq 2 */
        for (signed char i_12 = 0; i_12 < 13; i_12 += 2) 
        {
            var_43 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) max((((/* implicit */unsigned short) arr_4 [i_12])), (arr_27 [i_0] [i_0] [i_0])))))) | (max((9082280501319181946LL), (((/* implicit */long long int) var_15))))));
            var_44 = ((/* implicit */int) (((!((!(((/* implicit */_Bool) arr_4 [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-12103)) || (((/* implicit */_Bool) (unsigned char)187))))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))) : (((((/* implicit */_Bool) (unsigned short)63131)) ? ((-(arr_20 [i_0] [i_12] [i_0 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_12] [i_12] [i_12])))))));
        }
        for (unsigned int i_13 = 0; i_13 < 13; i_13 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_14 = 0; i_14 < 13; i_14 += 4) 
            {
                var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_0] [i_13])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_14] [(signed char)9])) ? (((/* implicit */int) (short)6980)) : (((/* implicit */int) var_14))))) : ((+(var_12)))));
                var_46 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_19 [i_0 + 1])) ? (((/* implicit */int) (signed char)74)) : (((/* implicit */int) (unsigned short)12411)))));
                /* LoopSeq 4 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    var_47 = (i_15 % 2 == zero) ? (((/* implicit */short) (((((-(((/* implicit */int) (short)6962)))) + (2147483647))) << (((((/* implicit */int) arr_31 [i_15])) - (103)))))) : (((/* implicit */short) (((((-(((/* implicit */int) (short)6962)))) + (2147483647))) << (((((((((/* implicit */int) arr_31 [i_15])) - (103))) + (86))) - (15))))));
                    var_48 += ((/* implicit */signed char) (!(((/* implicit */_Bool) 7620423116293164655LL))));
                    arr_48 [i_13] [i_15] = ((/* implicit */signed char) (((+(((/* implicit */int) (unsigned short)58192)))) - (((/* implicit */int) arr_23 [i_13] [i_15] [i_13] [i_13]))));
                }
                for (short i_16 = 0; i_16 < 13; i_16 += 2) 
                {
                    var_49 = ((/* implicit */long long int) var_12);
                    var_50 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_19 [4U]))));
                }
                for (signed char i_17 = 3; i_17 < 10; i_17 += 1) 
                {
                    arr_54 [i_0] [i_17] [i_13] [i_14] [i_17 + 1] [i_17 - 1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))) / (2835510337U)));
                    var_51 = ((/* implicit */unsigned int) ((short) ((unsigned short) arr_22 [(short)1] [(signed char)0] [i_17] [i_17])));
                    var_52 *= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_4)) ? (554859476U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_14])))))));
                    var_53 = ((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_0] [i_0])) | (((/* implicit */int) arr_42 [i_0 + 1]))));
                }
                for (unsigned long long int i_18 = 0; i_18 < 13; i_18 += 3) 
                {
                    var_54 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_13] [(signed char)0] [i_0 + 1] [i_18] [i_13] [i_18])) ? ((~(((/* implicit */int) arr_51 [i_0 + 1] [i_13] [i_0 + 1])))) : ((+(((/* implicit */int) var_14))))));
                    var_55 = ((/* implicit */unsigned short) max((var_55), (((/* implicit */unsigned short) ((((unsigned long long int) arr_3 [i_0])) << ((((~(((/* implicit */int) arr_19 [i_18])))) + (62))))))));
                }
                arr_58 [i_13] [(signed char)5] [i_13] [(signed char)9] = ((/* implicit */unsigned short) arr_28 [i_0 + 1] [i_0 - 1] [i_0 + 1]);
                var_56 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)5407)) <= (((/* implicit */int) (signed char)6)))))));
            }
            var_57 = ((/* implicit */unsigned int) arr_31 [i_13]);
            arr_59 [i_13] [(short)5] [i_0] = ((/* implicit */unsigned char) arr_3 [i_0]);
            var_58 = ((/* implicit */_Bool) (((((+(arr_45 [i_0] [i_13] [i_13] [(unsigned short)1]))) * (((809067876459137349ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)176))))))) / (((/* implicit */unsigned long long int) (((+(arr_17 [i_0] [i_0] [i_0]))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) 6867358695708710194LL)) ? (-1010072676) : (((/* implicit */int) (unsigned short)65535))))))))));
        }
    }
    var_59 *= ((/* implicit */unsigned long long int) var_5);
    var_60 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) ((_Bool) (unsigned char)176))), (((unsigned short) (unsigned short)0))))) / (((/* implicit */int) (!((!(((/* implicit */_Bool) -705045553)))))))));
}
