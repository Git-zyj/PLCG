/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174856
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
    for (int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
        {
            var_16 -= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) var_6)))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)15146)))))));
            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 1] [i_0 + 3])) ? ((~(((/* implicit */int) (short)15146)))) : (((/* implicit */int) (short)15146))))))))));
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((arr_2 [i_0] [i_0] [i_1]) > (((/* implicit */long long int) ((/* implicit */int) var_10))))) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (((/* implicit */int) arr_1 [i_0 + 1]))))) | (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_0 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_0 [i_0])) >= (arr_2 [i_0 + 1] [i_0] [i_0])))))))));
            var_19 = ((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */unsigned int) arr_3 [i_0] [i_1])), (arr_0 [i_1]))));
        }
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) /* same iter space */
        {
            var_20 = max(((+(((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1])))), (min((((((/* implicit */int) (unsigned short)43889)) - (((/* implicit */int) (unsigned char)248)))), (((/* implicit */int) arr_6 [i_0] [i_0])))));
            var_21 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0] [i_0 + 3])) && (((/* implicit */_Bool) (signed char)-59)))), ((!(((/* implicit */_Bool) arr_2 [i_0] [i_2] [i_0 + 2]))))));
            var_22 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)43894)))))));
        }
        for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            /* LoopSeq 2 */
            for (short i_4 = 0; i_4 < 15; i_4 += 1) /* same iter space */
            {
                /* LoopSeq 3 */
                for (short i_5 = 1; i_5 < 11; i_5 += 3) 
                {
                    var_23 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)21641)) : (((/* implicit */int) arr_8 [i_3] [i_3] [i_5]))))), (arr_13 [i_3] [i_3] [i_5 + 1] [i_0 + 1])))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_5] [i_5 + 1] [i_0 - 1])))))));
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned short)65535)) | (((/* implicit */int) (unsigned short)65528))))))) ? (((/* implicit */int) arr_10 [i_5] [i_3])) : ((~((~(var_14))))))))));
                        var_25 = ((/* implicit */unsigned int) min((var_25), (max((((/* implicit */unsigned int) ((short) arr_17 [i_0 - 1] [i_0] [12LL] [i_4] [i_4] [i_4] [i_6]))), (((((unsigned int) (_Bool)0)) & (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [(unsigned char)3] [i_5])) | (((/* implicit */int) var_8)))))))))));
                    }
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_0] [i_3] [i_3] [i_5 + 3] [i_5] [i_5 + 3] [i_4])) | (((/* implicit */int) var_11))))) | (arr_15 [i_0 + 2] [i_5 + 1] [i_5])));
                }
                for (unsigned short i_7 = 0; i_7 < 15; i_7 += 4) 
                {
                    var_27 = (_Bool)1;
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_28 = arr_10 [i_4] [i_4];
                        var_29 = ((/* implicit */unsigned int) 137438953471LL);
                        var_30 = ((/* implicit */signed char) (~(((((/* implicit */int) arr_21 [i_0 + 2] [(_Bool)1] [i_0 + 2] [i_0 + 3] [i_0 + 1])) ^ (((/* implicit */int) arr_21 [i_8] [i_3] [i_0 + 1] [i_0 + 3] [i_0 + 3]))))));
                        var_31 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0])))))));
                    }
                    for (unsigned char i_9 = 4; i_9 < 14; i_9 += 4) 
                    {
                        var_32 = ((/* implicit */signed char) ((((/* implicit */int) var_4)) ^ (((((/* implicit */_Bool) arr_23 [i_9] [i_9] [i_9 - 4] [i_9 - 3] [i_9 + 1] [i_9 - 2] [i_9])) ? (((/* implicit */int) arr_21 [i_0] [i_3] [i_4] [i_7] [i_3])) : (((/* implicit */int) arr_21 [i_0] [i_3] [i_0] [i_7] [(unsigned char)2]))))));
                        var_33 = ((/* implicit */unsigned char) (unsigned short)43889);
                    }
                    var_34 = ((/* implicit */_Bool) min((max((arr_15 [i_0] [i_3] [i_3]), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_0 + 3])))))));
                }
                for (unsigned char i_10 = 4; i_10 < 14; i_10 += 3) 
                {
                    var_35 = ((/* implicit */unsigned short) ((((var_14) + (2147483647))) >> (((((((/* implicit */_Bool) (unsigned short)43898)) ? (((/* implicit */int) (signed char)69)) : (((/* implicit */int) (unsigned short)43907)))) - (39)))));
                    /* LoopSeq 2 */
                    for (unsigned short i_11 = 2; i_11 < 14; i_11 += 2) 
                    {
                        var_36 += ((/* implicit */unsigned int) (((+((+(((/* implicit */int) var_11)))))) ^ (((((/* implicit */_Bool) min(((-2147483647 - 1)), (((/* implicit */int) var_15))))) ? (((/* implicit */int) arr_6 [i_0] [i_11 - 2])) : (((/* implicit */int) arr_27 [(unsigned char)3] [(unsigned char)3] [(unsigned char)3] [i_4] [(signed char)6] [i_11]))))));
                        var_37 = ((/* implicit */short) (+(min((((((/* implicit */_Bool) (short)31282)) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) var_12)))), (((/* implicit */int) arr_16 [i_3] [i_4] [i_10] [i_11]))))));
                    }
                    for (unsigned short i_12 = 4; i_12 < 12; i_12 += 1) 
                    {
                        var_38 = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_27 [i_0 + 1] [i_3] [i_4] [i_10 - 2] [i_12] [i_12 - 1])) + (((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_10 - 3] [i_0] [i_12])))), (((arr_28 [i_0] [i_3] [i_4] [i_10]) ? (((/* implicit */int) arr_27 [i_0 + 2] [i_0 + 2] [i_4] [i_10 - 4] [i_4] [i_12 - 2])) : (((/* implicit */int) arr_1 [i_0 + 3]))))));
                        var_39 = ((/* implicit */_Bool) min(((~(((((/* implicit */_Bool) arr_27 [i_3] [i_10] [i_4] [i_4] [i_3] [(signed char)3])) ? (((/* implicit */int) arr_5 [i_0] [i_12])) : (((/* implicit */int) var_13)))))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_26 [i_0] [i_0]))))) ? (((((/* implicit */int) (short)-24117)) | (((/* implicit */int) arr_26 [i_3] [(unsigned short)14])))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_25 [12LL] [i_4] [i_4] [i_0] [i_3] [i_0] [i_0])) : (((/* implicit */int) arr_33 [i_0] [i_3] [(unsigned char)10] [i_0] [i_12]))))))));
                    }
                }
                var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)43889), (arr_22 [i_4] [i_4] [i_4] [i_4])))) ? (((((/* implicit */int) arr_16 [i_0] [i_0] [i_3] [i_4])) + (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) (unsigned char)123)) ? (((/* implicit */int) arr_6 [i_0] [i_3])) : (((/* implicit */int) arr_8 [i_4] [i_3] [i_0]))))))) ? (((unsigned int) (~(((/* implicit */int) arr_9 [i_0] [i_3] [i_4]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)57301))))));
                var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) var_13))));
                var_42 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) arr_7 [i_0 + 2] [i_0 + 1])) >= (((/* implicit */int) (_Bool)0)))))));
            }
            /* vectorizable */
            for (short i_13 = 0; i_13 < 15; i_13 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (unsigned long long int i_15 = 2; i_15 < 11; i_15 += 2) 
                    {
                        {
                            var_43 = ((/* implicit */short) (unsigned short)7);
                            var_44 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_35 [i_0 + 3])) != (((/* implicit */int) arr_7 [i_15 + 4] [i_15]))));
                            var_45 = ((/* implicit */unsigned char) var_15);
                            var_46 = ((/* implicit */unsigned long long int) (unsigned char)205);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_16 = 2; i_16 < 11; i_16 += 3) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        {
                            var_47 = ((/* implicit */long long int) arr_19 [5U] [i_0 + 3] [i_3] [i_13] [i_0 + 3] [i_17]);
                            var_48 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_16 + 1])) ? (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) 8651215136231826447LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))));
                            var_49 = ((/* implicit */short) ((((/* implicit */int) arr_10 [i_0 + 1] [i_0 - 1])) + (((/* implicit */int) arr_10 [i_0 + 2] [i_0 + 3]))));
                        }
                    } 
                } 
                var_50 = 8651215136231826447LL;
            }
            /* LoopSeq 1 */
            for (short i_18 = 0; i_18 < 15; i_18 += 4) 
            {
                var_51 = ((/* implicit */long long int) (unsigned short)43894);
                var_52 *= ((/* implicit */short) arr_15 [(unsigned char)0] [i_3] [i_3]);
                /* LoopNest 2 */
                for (unsigned short i_19 = 0; i_19 < 15; i_19 += 2) 
                {
                    for (long long int i_20 = 0; i_20 < 15; i_20 += 2) 
                    {
                        {
                            var_53 = max(((+(((unsigned int) arr_10 [i_3] [i_3])))), (((/* implicit */unsigned int) ((((/* implicit */int) ((0ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43894)))))) * (((/* implicit */int) var_11))))));
                            var_54 = ((/* implicit */short) (unsigned short)38861);
                            var_55 = ((/* implicit */int) (unsigned short)30735);
                            var_56 = ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_20] [i_20] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (13911832439931742570ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)-69))) + (5476372328895329432LL))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))))) : (min((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-92))))), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-92))) + (4294967295U))))));
                        }
                    } 
                } 
                var_57 = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_0] [i_0 + 2] [i_3] [i_0])))))) == (((long long int) arr_48 [i_0 + 1] [i_0 + 2])));
            }
        }
        var_58 = ((((/* implicit */_Bool) ((max((((/* implicit */long long int) arr_0 [i_0])), (arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) / ((+(-952484194860277738LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((arr_41 [i_0] [i_0] [i_0] [i_0]) >> (((/* implicit */int) (_Bool)0)))) < (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))) : (((((/* implicit */_Bool) max(((signed char)30), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (min((-5637536020853150061LL), (((/* implicit */long long int) arr_5 [i_0] [i_0])))))));
        var_59 = ((/* implicit */long long int) 1236972399U);
        var_60 = ((/* implicit */short) (!(((/* implicit */_Bool) ((short) -8651215136231826459LL)))));
        /* LoopNest 2 */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            for (unsigned char i_22 = 0; i_22 < 15; i_22 += 1) 
            {
                {
                    var_61 = ((/* implicit */long long int) (~((-(((/* implicit */int) arr_23 [i_0 + 1] [i_0] [i_0 + 1] [(short)0] [i_0 - 1] [i_0 + 2] [i_21]))))));
                    var_62 = ((/* implicit */short) max(((~(5637536020853150091LL))), (min((((/* implicit */long long int) arr_29 [i_0] [i_21] [i_21] [i_22])), (arr_43 [i_21] [(_Bool)1] [i_22] [i_21] [i_22])))));
                    /* LoopSeq 1 */
                    for (int i_23 = 0; i_23 < 15; i_23 += 4) 
                    {
                        var_63 = ((/* implicit */unsigned short) (-(arr_15 [i_23] [i_21] [i_23])));
                        var_64 -= ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_12 [i_0 + 2] [i_0 + 2] [i_0 - 1])), (var_0)))) - (((/* implicit */int) var_5))));
                        var_65 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */int) arr_35 [i_23])) - (((/* implicit */int) arr_7 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_10)) - (((/* implicit */int) (_Bool)1))))) : (arr_14 [i_0] [3U] [i_0 - 1] [i_0 + 3] [i_0])))));
                        var_66 |= ((/* implicit */short) arr_31 [i_22]);
                        var_67 |= 4294967279U;
                    }
                }
            } 
        } 
    }
    var_68 = ((/* implicit */unsigned char) 4016988605U);
    var_69 = ((/* implicit */unsigned long long int) var_4);
    var_70 = ((/* implicit */short) ((var_1) ? ((+(((((/* implicit */_Bool) 3923486992U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_15)))))) : ((~(((/* implicit */int) var_4))))));
    var_71 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_2))))))) ? (min((((/* implicit */int) var_12)), (var_7))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)239)))))));
}
