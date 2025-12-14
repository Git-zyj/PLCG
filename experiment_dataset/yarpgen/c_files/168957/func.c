/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168957
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
    var_11 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */int) var_4)), (((((/* implicit */int) var_0)) & (((/* implicit */int) var_4)))))))));
    var_12 = ((/* implicit */_Bool) (~((+(((((/* implicit */_Bool) var_10)) ? (480078065) : (((/* implicit */int) var_1))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
        var_13 = ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_0]))));
        /* LoopNest 2 */
        for (signed char i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */int) min((var_1), (((/* implicit */unsigned short) arr_1 [i_1 - 3] [i_1 - 2]))))), (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_1 [i_1 - 2] [i_1 + 1]))))));
                    arr_11 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */long long int) max((((/* implicit */unsigned int) min((((((/* implicit */int) arr_9 [i_0])) + (((/* implicit */int) arr_7 [i_0] [i_1] [i_2])))), ((~(((/* implicit */int) var_1))))))), (var_10)));
                }
            } 
        } 
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) var_5))));
    }
    /* vectorizable */
    for (short i_3 = 1; i_3 < 19; i_3 += 4) 
    {
        arr_14 [i_3] = ((/* implicit */signed char) ((((/* implicit */int) var_9)) - (((((/* implicit */int) var_4)) * (((/* implicit */int) arr_9 [i_3]))))));
        var_15 = var_7;
    }
    /* LoopSeq 2 */
    for (unsigned short i_4 = 2; i_4 < 21; i_4 += 4) 
    {
        arr_19 [i_4] = (~(max((-987623455954497937LL), (((/* implicit */long long int) arr_15 [i_4 - 2])))));
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 23; i_6 += 1) 
            {
                for (short i_7 = 3; i_7 < 22; i_7 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_8 = 3; i_8 < 22; i_8 += 1) 
                        {
                            arr_31 [i_5] [i_5] = ((/* implicit */_Bool) min((((/* implicit */int) ((4756551639352733144ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))), (((((min((((/* implicit */int) var_1)), (arr_17 [i_4]))) + (2147483647))) << (((/* implicit */int) ((_Bool) (_Bool)1)))))));
                            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_8 + 1])) ? (arr_17 [i_8 - 3]) : (arr_17 [i_8 - 1])))))));
                            arr_32 [i_4] [i_5] [i_4] [i_5] [(unsigned short)2] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (-(((/* implicit */int) arr_27 [17LL] [i_5] [i_6] [i_7]))))) ? (min((((/* implicit */long long int) arr_23 [i_4] [i_4] [i_6] [i_8])), (-1070107246190250125LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_4] [i_5] [i_8 - 2])))))));
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_3) / (((/* implicit */int) arr_22 [i_8 - 1] [i_6] [i_6]))))) ? (max((((/* implicit */long long int) var_9)), (1874517060927481347LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_4 - 2] [i_4] [i_4])))));
                            var_18 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_15 [i_4]))))) ? (arr_17 [i_4]) : (((/* implicit */int) max((arr_27 [i_8] [i_5] [i_5] [i_4]), ((unsigned short)21767))))))));
                        }
                        for (signed char i_9 = 2; i_9 < 21; i_9 += 3) 
                        {
                            var_19 = ((/* implicit */_Bool) min((var_19), (max((arr_24 [i_4] [i_6] [i_4]), ((!((!(((/* implicit */_Bool) arr_33 [i_4] [i_4] [i_4]))))))))));
                            arr_35 [i_4] [i_5] [i_7] = ((/* implicit */_Bool) min((((/* implicit */int) arr_27 [i_4] [i_5] [(unsigned char)19] [i_4])), ((-(((/* implicit */int) var_7))))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 23; i_10 += 4) 
                        {
                            var_20 *= ((/* implicit */unsigned short) ((((((/* implicit */int) var_7)) / ((((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_2)))))) - (max((((/* implicit */int) ((short) arr_25 [(_Bool)1] [i_5] [i_5] [i_5] [(_Bool)1]))), ((-(((/* implicit */int) arr_37 [i_4] [i_5] [i_6] [i_4] [i_7] [i_4] [i_4]))))))));
                            var_21 = ((/* implicit */int) max((var_21), (((((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (16936699168855876093ULL) : (((/* implicit */unsigned long long int) 0))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_25 [i_4 - 2] [i_4] [i_4 - 2] [i_4] [i_4 + 2])))) : (min((arr_21 [i_6]), (((/* implicit */int) arr_37 [i_4] [i_4] [i_4] [i_4] [i_4] [(signed char)13] [i_4])))))) + (((/* implicit */int) ((((((/* implicit */int) var_0)) + (((/* implicit */int) arr_24 [i_4] [i_5] [i_7])))) == (((/* implicit */int) min((((/* implicit */short) var_2)), (arr_28 [i_10])))))))))));
                        }
                        var_22 = ((/* implicit */_Bool) min(((unsigned short)21762), (((/* implicit */unsigned short) (_Bool)1))));
                    }
                } 
            } 
        } 
        arr_38 [i_4] = ((/* implicit */_Bool) ((unsigned char) ((unsigned char) arr_29 [i_4 - 2] [i_4] [i_4] [i_4 + 2] [i_4 + 2] [i_4] [i_4 - 1])));
        /* LoopSeq 2 */
        for (short i_11 = 2; i_11 < 22; i_11 += 4) 
        {
            arr_43 [i_11] [i_11] [i_4] = ((/* implicit */unsigned short) var_5);
            /* LoopSeq 2 */
            for (signed char i_12 = 0; i_12 < 23; i_12 += 3) 
            {
                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) arr_40 [i_4]))));
                arr_46 [i_4] [i_4] [i_12] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_22 [i_4] [i_4 + 1] [i_4 + 1])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_4] [i_4] [i_4 + 1]))))), (((/* implicit */unsigned int) arr_22 [i_4] [i_4] [i_4 + 1]))));
            }
            for (signed char i_13 = 2; i_13 < 21; i_13 += 4) 
            {
                arr_51 [i_4] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))), (max((((/* implicit */long long int) var_9)), (var_6)))));
                /* LoopNest 2 */
                for (long long int i_14 = 2; i_14 < 22; i_14 += 4) 
                {
                    for (int i_15 = 1; i_15 < 22; i_15 += 1) 
                    {
                        {
                            var_24 &= ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((unsigned char) var_3))) ? (((/* implicit */int) arr_26 [i_13 - 1] [i_4] [(unsigned char)1])) : (((/* implicit */int) arr_40 [i_4 + 1])))), (((/* implicit */int) arr_16 [13]))));
                            var_25 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_8)), (max((((/* implicit */unsigned long long int) (_Bool)1)), (9691028483644306918ULL)))));
                            var_26 = ((/* implicit */long long int) (-(((/* implicit */int) max((max((((/* implicit */unsigned char) arr_34 [i_4] [i_11 - 2] [(unsigned short)3] [(unsigned char)4] [i_15])), (arr_33 [i_4] [i_15] [i_15]))), (((/* implicit */unsigned char) (_Bool)1)))))));
                        }
                    } 
                } 
            }
        }
        for (unsigned long long int i_16 = 2; i_16 < 21; i_16 += 4) 
        {
            var_27 = ((((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) 9691028483644306918ULL)) || (((/* implicit */_Bool) arr_41 [i_4] [i_16] [i_16]))))), (var_7)))) < (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_36 [i_4] [i_4] [i_4] [i_4] [i_4 + 2])), (var_4)))) < (((/* implicit */int) max((arr_56 [i_4] [i_4] [i_4]), (((/* implicit */unsigned short) var_0)))))))));
            arr_59 [i_4] [i_16] = min((((((/* implicit */_Bool) (signed char)7)) && (((/* implicit */_Bool) (unsigned short)43768)))), (((((/* implicit */_Bool) arr_45 [i_4] [i_4] [i_4] [i_4])) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)31)), (var_10)))))));
        }
    }
    for (unsigned short i_17 = 0; i_17 < 24; i_17 += 3) 
    {
        arr_62 [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((arr_60 [i_17]) ? (((/* implicit */int) arr_61 [i_17] [i_17])) : (((/* implicit */int) arr_60 [i_17])))) : (((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_61 [i_17] [i_17])))) - ((-(((/* implicit */int) arr_61 [i_17] [i_17]))))))));
        var_28 *= ((/* implicit */unsigned int) arr_61 [i_17] [(_Bool)1]);
        var_29 *= ((/* implicit */unsigned int) (-(min(((-(((/* implicit */int) arr_60 [14LL])))), (((/* implicit */int) (_Bool)1))))));
    }
    /* LoopSeq 2 */
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        arr_66 [i_18] [(unsigned char)6] &= ((unsigned char) min(((unsigned short)9863), (((/* implicit */unsigned short) (_Bool)1))));
        arr_67 [i_18] [i_18] = ((/* implicit */_Bool) var_8);
        /* LoopSeq 1 */
        for (unsigned short i_19 = 0; i_19 < 10; i_19 += 3) 
        {
            /* LoopNest 3 */
            for (short i_20 = 0; i_20 < 10; i_20 += 3) 
            {
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        {
                            var_30 *= ((/* implicit */unsigned char) ((var_2) ? ((~(((/* implicit */int) min((var_7), (((/* implicit */unsigned char) arr_54 [i_22] [9] [i_20] [i_19] [i_19] [i_18]))))))) : ((-(((/* implicit */int) arr_44 [i_18] [(unsigned char)14] [i_18]))))));
                            var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) max((arr_74 [i_18] [i_21] [i_20] [i_21]), (arr_52 [i_18] [i_19] [(_Bool)1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_48 [i_20] [i_21] [i_21])) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_58 [i_21])), (var_8)))) : (((var_3) >> (((/* implicit */int) arr_23 [i_18] [i_19] [i_21] [i_22]))))))) : (((max((var_6), (((/* implicit */long long int) var_4)))) - (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_18] [i_19] [i_20] [i_22]))))))))));
                            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) max((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) arr_21 [i_22]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_58 [i_22])) - (((/* implicit */int) var_2))))) : ((-(min((0ULL), (8755715590065244697ULL)))))));
                        }
                    } 
                } 
            } 
            var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_48 [i_18] [i_18] [i_18])) / (((/* implicit */int) arr_30 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_40 [i_18])), (-2759716360667553555LL)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_19] [i_18] [i_19] [i_18]))) : (11ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)17172)) ? (((/* implicit */int) arr_70 [i_18] [i_18] [i_19])) : (((/* implicit */int) arr_65 [i_18]))))))))))));
            var_34 = ((/* implicit */short) (((+(min((((/* implicit */long long int) arr_57 [i_18] [i_18])), (3029309249660277979LL))))) - (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_18] [i_18] [i_19])) / (((/* implicit */int) arr_50 [i_18] [i_18] [i_19])))))));
            arr_81 [i_18] [i_18] = arr_42 [i_18] [i_18];
        }
        arr_82 [i_18] = arr_68 [i_18];
        arr_83 [i_18] = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) arr_57 [i_18] [i_18])) == (((/* implicit */int) arr_34 [i_18] [i_18] [i_18] [(unsigned char)22] [i_18]))))), (((((/* implicit */int) (unsigned char)119)) - (((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned char i_23 = 0; i_23 < 13; i_23 += 4) 
    {
        var_35 ^= ((/* implicit */unsigned char) max(((+(((/* implicit */int) max(((unsigned char)22), (((/* implicit */unsigned char) var_2))))))), (min((((/* implicit */int) var_1)), ((~(((/* implicit */int) var_2))))))));
        var_36 = var_7;
        arr_86 [i_23] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_61 [i_23] [i_23])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) / (((/* implicit */int) arr_57 [i_23] [(unsigned char)7])))))))) : (((/* implicit */int) (_Bool)1))));
    }
}
