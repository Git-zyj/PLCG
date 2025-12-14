/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131610
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned int i_2 = 4; i_2 < 6; i_2 += 3) 
            {
                var_11 += ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) << (((var_6) - (741558968106820012LL)))))), (((arr_2 [i_0] [i_1]) | (arr_2 [i_1] [i_2 - 4])))));
                arr_7 [i_2] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) (unsigned char)106)))));
            }
            /* vectorizable */
            for (long long int i_3 = 2; i_3 < 7; i_3 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    arr_12 [i_0] [i_3 - 1] [i_3] [i_0] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */int) (unsigned char)156)) >= (((/* implicit */int) (unsigned char)157))));
                    var_12 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (6551858698591853796ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3 + 1])))));
                    arr_13 [i_0] [(unsigned short)7] [i_3] [(unsigned short)7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned char)172)))) : (arr_5 [i_0])));
                }
                for (long long int i_5 = 2; i_5 < 7; i_5 += 4) 
                {
                    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) arr_4 [i_0] [i_1]))))))));
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_11 [i_3 + 1])) : (((/* implicit */int) arr_0 [i_3 + 1]))));
                    var_15 = ((/* implicit */int) ((((/* implicit */long long int) arr_17 [i_0] [i_3 + 2] [i_3] [i_5 - 1] [i_5 + 3])) | (((var_8) & (((/* implicit */long long int) 0))))));
                }
                var_16 = ((/* implicit */long long int) (((_Bool)1) ? (-2147483625) : (((/* implicit */int) (unsigned short)18211))));
            }
            /* LoopSeq 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_17 = ((((((/* implicit */_Bool) max((var_5), (((/* implicit */short) arr_3 [i_6]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (33554428) : (((/* implicit */int) (unsigned char)7))))) : (max((var_1), (((/* implicit */unsigned long long int) (signed char)-121)))))) < (((/* implicit */unsigned long long int) max((arr_8 [i_6] [i_1] [i_6] [i_0]), (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)61)), (var_9))))))));
                var_18 = arr_18 [i_6] [i_1] [i_0];
                /* LoopSeq 1 */
                for (unsigned short i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    /* LoopSeq 3 */
                    for (int i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        var_19 = ((/* implicit */int) max((((arr_10 [i_0] [i_0] [i_7] [i_8]) << (((((/* implicit */int) (unsigned short)47324)) - (47306))))), (max((arr_10 [i_0] [i_1] [(_Bool)0] [(signed char)6]), (arr_2 [i_7] [i_6])))));
                        arr_25 [i_7] [i_7] [i_7] [i_6] [i_7] [i_7] = ((/* implicit */unsigned int) (((+((-(((/* implicit */int) (_Bool)1)))))) / (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) (unsigned short)37106)) : (((/* implicit */int) (unsigned char)64))))))));
                    }
                    for (int i_9 = 0; i_9 < 10; i_9 += 3) 
                    {
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_16 [i_0] [i_0] [i_6] [i_7] [i_9]), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) 0LL))) ? (((/* implicit */int) (unsigned char)210)) : ((~(((/* implicit */int) (unsigned short)58895))))))) : (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_5)), (arr_19 [i_0] [i_1] [i_0])))), (arr_27 [i_6] [i_1] [i_9] [i_1] [i_9])))));
                        var_21 = ((/* implicit */int) min((((/* implicit */long long int) ((unsigned short) arr_5 [i_6]))), (max((arr_5 [i_6]), (((/* implicit */long long int) var_3))))));
                    }
                    for (short i_10 = 0; i_10 < 10; i_10 += 2) 
                    {
                        var_22 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (var_1) : (((/* implicit */unsigned long long int) 3167804547U))))) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) max((var_9), (((/* implicit */unsigned short) arr_4 [i_0] [i_7])))))))) ^ (5836313231803548309ULL));
                        var_23 = ((/* implicit */long long int) (~(3999052089869981323ULL)));
                    }
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) max((((((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */unsigned int) arr_9 [i_0] [i_0])))) >= (var_3))), (((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (arr_11 [i_1]))))) < (max((arr_23 [(signed char)2] [i_0] [i_0] [i_0] [(signed char)2] [i_6] [i_7]), (((/* implicit */long long int) (unsigned char)255)))))))))));
                }
            }
            /* vectorizable */
            for (unsigned char i_11 = 0; i_11 < 10; i_11 += 4) 
            {
                arr_34 [i_11] = (+(arr_6 [i_0] [i_0]));
                var_25 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)108))))) ? (((12LL) << (((739264485U) - (739264443U))))) : (((/* implicit */long long int) var_3))));
            }
            arr_35 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((long long int) arr_26 [i_0] [i_1] [i_0] [i_1] [i_1]))) + (min((arr_27 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_0]))))));
            var_26 = ((_Bool) (_Bool)1);
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                var_27 = ((/* implicit */signed char) ((int) (!(((/* implicit */_Bool) var_4)))));
                var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -7994416648370179693LL)) ? ((-(((/* implicit */int) (unsigned short)24413)))) : (((/* implicit */int) arr_18 [i_12] [i_12] [(unsigned short)8]))));
                var_29 = ((/* implicit */unsigned char) 17023201401323632757ULL);
            }
        }
        for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 3) /* same iter space */
        {
            var_30 = ((/* implicit */_Bool) (unsigned char)103);
            arr_42 [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_13] [i_13] [i_13] [i_13]))) : (((((/* implicit */_Bool) var_3)) ? (arr_5 [i_0]) : (-23LL)))))) ? (((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) arr_39 [i_0] [i_0])), (22LL))), (((/* implicit */long long int) var_9))))) : (min((0ULL), (((/* implicit */unsigned long long int) ((_Bool) arr_10 [i_0] [i_13] [i_0] [i_13])))))));
        }
        for (unsigned long long int i_14 = 2; i_14 < 9; i_14 += 4) 
        {
            var_31 = ((/* implicit */_Bool) (+(((/* implicit */int) var_7))));
            arr_45 [i_0] [i_14 - 2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)0)), ((signed char)93)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((2305280059260272640LL) != (((/* implicit */long long int) (-2147483647 - 1))))))) : (((unsigned int) 220458633))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (((((/* implicit */_Bool) 7785553888490243860ULL)) ? (-3945801435988991054LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
            arr_46 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)133)), (-7994416648370179693LL)))) ? (((((/* implicit */int) (unsigned char)153)) & (((/* implicit */int) arr_26 [i_14] [i_14 + 1] [i_14] [i_14 - 2] [i_14])))) : ((~(((/* implicit */int) arr_26 [i_0] [i_14 - 1] [i_14] [i_14 - 1] [i_14 + 1]))))));
            arr_47 [i_14] [i_14] [i_0] = (~(((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0] [i_14 + 1])) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)76)))) : (((/* implicit */int) ((_Bool) arr_6 [i_0] [i_0]))))));
        }
        /* vectorizable */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            arr_51 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_50 [(_Bool)1])) || (((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) 3945801435988991045LL)) ? (((/* implicit */int) arr_16 [i_0] [i_15] [i_15] [i_15] [i_0])) : (((/* implicit */int) arr_21 [i_0] [i_15] [i_15] [i_0])))) : ((-(((/* implicit */int) (_Bool)1))))));
            var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_15])) ? (((/* implicit */unsigned int) arr_50 [i_0])) : (3835679399U)));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_16 = 0; i_16 < 10; i_16 += 3) /* same iter space */
        {
            arr_55 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)63488)) : (((/* implicit */int) arr_39 [9] [9]))));
            var_33 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_16] [i_0] [i_16] [i_16] [i_0]))))));
            arr_56 [i_0] [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (unsigned short)4))) ? (((1576721711718034174LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 36028796985409536ULL)) ? (4294967274U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
        }
        for (long long int i_17 = 0; i_17 < 10; i_17 += 3) /* same iter space */
        {
            arr_60 [i_17] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_4)) ? (arr_5 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_17]))))));
            var_34 = ((/* implicit */unsigned short) (_Bool)1);
        }
        arr_61 [i_0] [i_0] = ((_Bool) ((unsigned char) (unsigned short)6644));
    }
    /* vectorizable */
    for (unsigned char i_18 = 1; i_18 < 22; i_18 += 2) 
    {
        var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_62 [i_18 + 1] [i_18 + 1])) ? (8ULL) : (((/* implicit */unsigned long long int) var_3))));
        arr_64 [i_18 + 2] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)0)))));
    }
    var_36 |= ((/* implicit */int) min((((/* implicit */unsigned int) var_0)), (((((/* implicit */_Bool) 18410715276724142079ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_7)))) : (((unsigned int) (_Bool)1))))));
    var_37 = ((/* implicit */short) ((unsigned short) 3ULL));
    var_38 = ((/* implicit */int) var_8);
}
