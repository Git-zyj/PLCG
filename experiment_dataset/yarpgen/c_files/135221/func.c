/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135221
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
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_17 |= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) max((arr_2 [i_0]), (arr_1 [i_0])))) ? ((-(-4160420388505958607LL))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0])))))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            var_18 = var_2;
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) var_13)) | (((/* implicit */int) var_7))))))) ? (((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) var_13))))) : (((/* implicit */int) arr_8 [i_2] [i_1] [i_0]))));
                var_20 &= ((((max((((/* implicit */long long int) (unsigned char)237)), (arr_5 [i_2] [i_1] [i_0]))) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))))) + (arr_3 [(unsigned short)2] [(_Bool)1]));
                /* LoopSeq 3 */
                for (unsigned char i_3 = 3; i_3 < 6; i_3 += 2) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned short) (_Bool)1);
                    /* LoopSeq 4 */
                    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (~(((/* implicit */int) (unsigned char)90)))))));
                        var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))), (arr_14 [i_3 - 2] [i_3 - 2] [i_1] [i_1]))))));
                        var_24 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_7 [i_1] [i_3])) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_3] [i_4] [i_2] [i_1])) : (((/* implicit */int) (unsigned char)57)))) > (((/* implicit */int) ((((/* implicit */_Bool) 7989118102529245642ULL)) || (((/* implicit */_Bool) -1693163113))))))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_15)))));
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        var_25 |= ((/* implicit */unsigned short) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_26 |= (!(var_15));
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_12 [i_3] [(short)0] [i_3 + 3] [i_3] [i_3 + 4] [i_3 + 3] [i_3 + 1])) - (((/* implicit */int) arr_12 [(unsigned short)7] [i_2] [i_3] [(unsigned short)7] [i_3 + 3] [i_3 + 4] [i_3 + 4]))));
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_1)))) : (((/* implicit */int) var_14))));
                        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) 7989118102529245647ULL)) ? (arr_3 [i_3 + 2] [i_3 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3 + 1])))));
                    }
                    for (unsigned char i_6 = 2; i_6 < 8; i_6 += 4) 
                    {
                        var_30 = 2422699035935201550LL;
                        var_31 &= ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                    }
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        var_32 = ((/* implicit */long long int) (-(((/* implicit */int) arr_10 [i_0] [i_0] [(short)5] [i_0]))));
                        var_33 = ((/* implicit */int) arr_20 [i_7] [i_3] [i_1] [i_1] [i_0] [i_0]);
                    }
                    var_34 = (_Bool)1;
                    var_35 |= ((/* implicit */short) var_8);
                    /* LoopSeq 4 */
                    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        var_36 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) <= (min((((/* implicit */long long int) ((((/* implicit */int) arr_11 [5LL] [i_1] [i_2] [i_2] [i_2])) % (((/* implicit */int) var_14))))), (max((-4160420388505958607LL), (((/* implicit */long long int) (short)-27371))))))));
                        var_37 = var_8;
                        var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (arr_23 [i_0] [i_1] [i_1] [i_3 + 2] [i_8] [i_3 + 4] [i_3 + 2])))) ? (((/* implicit */int) arr_6 [i_1] [i_1] [i_8])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : ((-(((/* implicit */int) arr_1 [i_0]))))))));
                        var_39 = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_10 [i_3 + 3] [i_3] [i_3] [i_3 - 1])) / (((/* implicit */int) var_6)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_11 [i_0] [i_1] [9ULL] [i_3] [i_0]))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_18 [i_1]))))))));
                        var_40 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)217)) + ((~(((/* implicit */int) var_2))))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 10; i_9 += 2) 
                    {
                        var_41 = ((/* implicit */unsigned int) var_14);
                        var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_1)))) / (((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_2] [i_2] [i_0] [i_2] [i_1])) ? (((/* implicit */int) (unsigned short)5158)) : (((/* implicit */int) var_4))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((var_13) ? (((/* implicit */int) arr_25 [i_0] [i_1] [i_1] [(unsigned char)7] [i_9] [i_9] [i_2])) : (((/* implicit */int) var_14))))) || (((((/* implicit */_Bool) var_0)) && (var_13)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_16 [i_9] [i_3] [i_3] [i_2] [i_1] [i_1] [i_0]))))))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 10; i_10 += 4) /* same iter space */
                    {
                        var_43 = ((/* implicit */unsigned short) var_16);
                        var_44 -= ((/* implicit */long long int) (!(((((/* implicit */_Bool) (unsigned short)39277)) || (((/* implicit */_Bool) var_8))))));
                    }
                    for (unsigned short i_11 = 0; i_11 < 10; i_11 += 4) /* same iter space */
                    {
                        var_45 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_0 [i_3 - 3])) ? (((/* implicit */int) arr_9 [i_1] [i_1] [i_2] [i_3 + 3])) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_3 + 3]))))));
                        var_46 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_2))))))))));
                    }
                }
                /* vectorizable */
                for (unsigned char i_12 = 3; i_12 < 6; i_12 += 2) /* same iter space */
                {
                    var_47 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)2047))));
                    var_48 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_1] [i_1] [i_1] [i_1] [i_12] [(unsigned char)4] [i_12])) ? (((/* implicit */int) arr_24 [i_12 - 1] [i_12 + 4])) : ((~(((/* implicit */int) var_14))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_13 = 0; i_13 < 10; i_13 += 4) 
                    {
                        var_49 = ((/* implicit */long long int) min((var_49), (((/* implicit */long long int) ((-1693163093) & (((/* implicit */int) (_Bool)1)))))));
                        var_50 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_28 [i_0] [i_1] [i_2] [i_2] [i_13])) ^ (-1693163090)));
                        var_51 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-10779)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4221744340U)));
                    }
                    for (short i_14 = 4; i_14 < 6; i_14 += 3) 
                    {
                        var_52 = (!(((/* implicit */_Bool) (short)768)));
                        var_53 = ((/* implicit */long long int) min((var_53), (((/* implicit */long long int) arr_8 [i_2] [i_14 - 2] [i_2]))));
                    }
                    for (unsigned short i_15 = 0; i_15 < 10; i_15 += 3) 
                    {
                        var_54 = ((/* implicit */unsigned short) max((var_54), (((/* implicit */unsigned short) ((((/* implicit */int) var_2)) % ((~(((/* implicit */int) var_0)))))))));
                        var_55 = ((/* implicit */signed char) (+(((((/* implicit */int) var_10)) | (((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0] [i_1]))))));
                    }
                    for (unsigned short i_16 = 0; i_16 < 10; i_16 += 2) 
                    {
                        var_56 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_8)) * (((/* implicit */int) var_13)))) >= (((/* implicit */int) var_16))));
                        var_57 = ((/* implicit */short) (-(((/* implicit */int) var_7))));
                        var_58 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_44 [i_16] [i_1] [i_16] [i_16] [i_12 + 1] [i_1] [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_9 [i_1] [i_12] [i_12 + 1] [i_1]))));
                    }
                    var_59 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_35 [i_1])) : (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_9 [i_1] [i_1] [i_2] [i_12 - 1]))))) : (((var_5) * (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
                    var_60 = (i_1 % 2 == zero) ? (((((((/* implicit */_Bool) arr_30 [i_0] [i_1] [i_2] [i_12] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_0] [i_1] [i_1] [i_2] [i_12]))) : (var_5))) >> (((arr_20 [i_12 + 2] [i_12] [i_1] [i_1] [i_12 - 2] [i_1]) - (2799749055U))))) : (((((((/* implicit */_Bool) arr_30 [i_0] [i_1] [i_2] [i_12] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_0] [i_1] [i_1] [i_2] [i_12]))) : (var_5))) >> (((((arr_20 [i_12 + 2] [i_12] [i_1] [i_1] [i_12 - 2] [i_1]) - (2799749055U))) - (2526012566U)))));
                }
                /* vectorizable */
                for (unsigned char i_17 = 3; i_17 < 6; i_17 += 2) /* same iter space */
                {
                    var_61 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (-6770305212592193726LL)))) ? (((/* implicit */int) (unsigned short)52943)) : ((+(((/* implicit */int) arr_48 [i_1] [i_1] [i_2] [i_2]))))));
                    var_62 = ((arr_39 [i_1] [i_2] [i_1]) && (arr_39 [i_1] [i_1] [i_17 - 1]));
                }
            }
            var_63 = ((/* implicit */unsigned char) max((min(((+(((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) arr_24 [i_0] [i_1])) * (((/* implicit */int) arr_42 [i_1])))))), (((/* implicit */int) arr_18 [i_1]))));
            var_64 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_8)) ? (arr_17 [i_0] [i_1] [i_1] [(unsigned short)3] [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) > (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_1] [i_1] [i_1])) / (((/* implicit */int) arr_6 [i_1] [i_0] [i_1])))))));
        }
    }
    var_65 = ((((((/* implicit */_Bool) ((((/* implicit */int) var_7)) | (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) var_12)) | (((/* implicit */int) var_15)))))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))));
    var_66 = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) != ((~(((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_14))))))));
}
