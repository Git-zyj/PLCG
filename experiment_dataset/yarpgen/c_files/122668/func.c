/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122668
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (signed char i_2 = 2; i_2 < 24; i_2 += 2) 
                {
                    arr_7 [i_2] [i_1 - 1] [i_0] |= ((/* implicit */unsigned short) (((((!((_Bool)1))) ? (0U) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)1))))))) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_11), (var_9))))))))));
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_0))) > (2551945997887132305LL))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) var_7)), (arr_6 [i_2 - 1] [i_2 - 1])))) : (max((var_5), (((/* implicit */long long int) (signed char)-105))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((-1694634895) - (((/* implicit */int) (_Bool)1)))))))) : (max((((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) var_0))))), ((+(((/* implicit */int) (unsigned char)45))))))));
                }
                for (int i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    var_16 = ((((((/* implicit */unsigned long long int) arr_0 [i_1 - 1] [i_1 + 1])) < (max((var_13), (((/* implicit */unsigned long long int) arr_1 [i_3])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_8)))) ? (max((((/* implicit */int) (short)-11813)), (arr_0 [i_1] [i_1]))) : (((/* implicit */int) max((var_1), (((/* implicit */short) var_0))))))) : ((-(arr_0 [i_1 - 1] [i_1 + 1]))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        for (short i_5 = 3; i_5 < 23; i_5 += 2) 
                        {
                            {
                                arr_17 [i_0] [i_1 - 1] [i_1] [i_4] [i_5 + 2] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)11813)) : (((/* implicit */int) arr_5 [i_0]))))) : (((unsigned int) var_10))))) != (min((min((((/* implicit */unsigned long long int) var_4)), (var_13))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) var_10)), (var_6))))))));
                                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_5 - 1] [i_5] [i_1 - 1] [i_5 - 3] [i_1 - 1])) ? ((+((+(var_13))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-95)) : (((/* implicit */int) (short)-32665))))) ? (((/* implicit */int) max((((/* implicit */short) arr_5 [i_0])), (var_3)))) : (((/* implicit */int) (_Bool)0)))))));
                                arr_18 [i_0] [18LL] [i_3] [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-11797)) ? (max(((-(((/* implicit */int) (short)-30450)))), (((/* implicit */int) ((_Bool) var_0))))) : (((/* implicit */int) max((max((((/* implicit */unsigned short) var_1)), ((unsigned short)36592))), (((/* implicit */unsigned short) min((((/* implicit */unsigned char) (signed char)-31)), (var_11)))))))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_6 = 2; i_6 < 23; i_6 += 4) 
                {
                    arr_22 [i_6 + 2] [i_0] [i_0] = 3958112189U;
                    /* LoopSeq 1 */
                    for (long long int i_7 = 0; i_7 < 25; i_7 += 3) 
                    {
                        var_18 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) arr_20 [i_6 - 1] [i_6 - 1] [i_6] [i_6]))))) : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) arr_16 [i_1] [i_6] [24LL])) : (max((max((arr_12 [i_0] [i_0] [i_6 - 2] [i_6]), (1610612736))), (((/* implicit */int) ((((/* implicit */int) arr_20 [i_6 - 2] [i_6 - 2] [(signed char)10] [24])) == (((/* implicit */int) arr_16 [i_0] [i_0] [19LL])))))))));
                        arr_25 [i_0] = min(((~((-(((/* implicit */int) var_10)))))), (max((((/* implicit */int) min(((signed char)-95), ((signed char)-109)))), ((-(arr_10 [(short)14] [i_1] [(short)14] [i_1] [i_1]))))));
                        var_19 = ((/* implicit */short) 336855117U);
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 0; i_8 < 25; i_8 += 1) 
                        {
                            arr_28 [i_8] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((min((2188741633U), (190214493U))) + (((/* implicit */unsigned int) ((/* implicit */int) ((arr_19 [(unsigned char)24] [3LL] [(unsigned char)24]) || (((/* implicit */_Bool) (signed char)-36))))))))), ((~(((((/* implicit */_Bool) var_10)) ? (arr_26 [i_0] [i_1] [i_6 + 1] [i_7] [i_7] [i_7] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1])))))))));
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_14 [(unsigned char)9] [(unsigned char)9] [i_1] [i_6] [(unsigned char)9] [i_8])), (var_13)))) ? (((/* implicit */int) min((arr_2 [i_6]), (((/* implicit */unsigned short) var_4))))) : (((/* implicit */int) arr_5 [i_6 - 1]))))), ((~(4294967278U))))))));
                            var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) ((var_0) && ((_Bool)1)))) <= (((/* implicit */int) max((((/* implicit */short) (signed char)(-127 - 1))), ((short)-11813)))))))));
                        }
                    }
                }
                for (int i_9 = 1; i_9 < 23; i_9 += 4) 
                {
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)(-127 - 1))) ^ ((~(((((/* implicit */int) (unsigned short)65535)) ^ (((/* implicit */int) (signed char)20))))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_10 = 0; i_10 < 25; i_10 += 2) 
                    {
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (signed char)36)))))))) ? (max((((7949058704399812312LL) >> (((((/* implicit */int) var_9)) - (137))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))))))) : (((/* implicit */long long int) min((((/* implicit */int) var_4)), (((((/* implicit */int) (unsigned char)0)) >> (((((/* implicit */int) var_1)) + (31062))))))))));
                        arr_34 [i_0] [i_0] [i_1 + 1] [(unsigned short)20] [i_10] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_10 [i_9 - 1] [i_9] [i_9 + 1] [i_9 - 1] [i_1 + 1])) ? (((arr_14 [i_0] [(unsigned short)1] [i_1 + 1] [i_9] [1ULL] [i_10]) + (((/* implicit */long long int) arr_10 [5U] [5U] [i_9] [i_10] [5U])))) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65512)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_1] [i_1] [i_1 + 1]))))))));
                        var_24 = ((/* implicit */unsigned short) min((((/* implicit */long long int) min((((arr_4 [i_1]) % (((/* implicit */int) var_12)))), (((/* implicit */int) max(((signed char)-119), (((/* implicit */signed char) (_Bool)1)))))))), (((max((((/* implicit */long long int) var_14)), (var_5))) * (0LL)))));
                    }
                    for (unsigned int i_11 = 2; i_11 < 23; i_11 += 4) 
                    {
                        var_25 = ((/* implicit */signed char) var_7);
                        arr_38 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((unsigned long long int) ((((long long int) (unsigned char)255)) >> ((((+(-2551945997887132304LL))) + (2551945997887132323LL))))));
                    }
                    for (signed char i_12 = 0; i_12 < 25; i_12 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_13 = 0; i_13 < 25; i_13 += 1) 
                        {
                            arr_43 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_37 [i_0])))) | (((/* implicit */int) arr_30 [i_0]))));
                            arr_44 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) max((((/* implicit */int) var_10)), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])));
                        }
                        var_26 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)54))) ? (((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7)))) : (arr_10 [i_9] [i_9] [i_9] [i_9 - 1] [i_9 - 1])))) || (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)201)) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_12])) : (((/* implicit */int) (signed char)-63))))) || (((/* implicit */_Bool) ((unsigned int) (short)2124)))))));
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) min(((~((~(((/* implicit */int) (short)-2105)))))), (((/* implicit */int) ((((/* implicit */int) min(((unsigned char)255), ((unsigned char)2)))) > (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_15 [i_12] [i_9] [i_1 + 1] [i_0])) : (((/* implicit */int) arr_37 [i_0]))))))))))));
                        /* LoopSeq 1 */
                        for (long long int i_14 = 4; i_14 < 24; i_14 += 2) 
                        {
                            var_28 = ((/* implicit */signed char) min((((/* implicit */long long int) min(((-(582780918U))), (min((((/* implicit */unsigned int) (short)2124)), (arr_40 [i_0] [i_9] [i_9] [i_14 - 1])))))), ((-(((long long int) (unsigned char)255))))));
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_2), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (3958112162U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))))) ? (((/* implicit */long long int) arr_3 [(short)23])) : ((+(min((((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0])), (arr_9 [i_9] [i_1] [i_0])))))));
                        }
                        arr_48 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) (unsigned char)228)))) ? (127) : (((/* implicit */int) (signed char)-97)))) < (((((/* implicit */int) max((((/* implicit */short) var_14)), (var_12)))) % (((/* implicit */int) var_11))))));
                    }
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_15 = 0; i_15 < 25; i_15 += 4) 
                {
                    arr_53 [i_1 + 1] [i_1 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_1 - 1] [i_1 + 1] [i_1]))) : (8589934591LL)));
                    /* LoopNest 2 */
                    for (signed char i_16 = 0; i_16 < 25; i_16 += 3) 
                    {
                        for (short i_17 = 0; i_17 < 25; i_17 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */short) ((unsigned char) (-(((/* implicit */int) (unsigned char)23)))));
                                var_31 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)35060)) >> (((var_13) - (8244324121668544536ULL)))));
                                arr_60 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_9);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (int i_18 = 3; i_18 < 23; i_18 += 1) 
                {
                    arr_63 [(signed char)24] = ((/* implicit */_Bool) (~(arr_14 [i_0] [i_0] [i_1 - 1] [i_18] [i_18 + 2] [i_0])));
                    arr_64 [i_0] [i_1] [i_18] = ((/* implicit */_Bool) (unsigned char)0);
                    var_32 = ((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) < (4117491325U))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [(unsigned char)8] [(unsigned char)16] [i_0]))) : (0LL))) : (((/* implicit */long long int) ((((/* implicit */int) arr_46 [i_18 + 2] [i_18 + 2] [i_1] [i_0] [i_0])) << (((4294967295U) - (4294967288U)))))));
                }
                var_33 = ((/* implicit */short) ((((/* implicit */long long int) ((((unsigned int) (short)-5)) >> (((((((/* implicit */int) var_12)) & (((/* implicit */int) (signed char)-97)))) + (29293)))))) == ((+(min((((/* implicit */long long int) var_1)), (-14LL)))))));
                arr_65 [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_0])) ? (383267795U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) : (((((/* implicit */long long int) ((/* implicit */int) (short)-32764))) % (13LL))))), (((/* implicit */long long int) arr_24 [i_0] [i_0] [(signed char)13]))));
            }
        } 
    } 
    var_34 += ((/* implicit */long long int) var_10);
    /* LoopNest 3 */
    for (long long int i_19 = 0; i_19 < 22; i_19 += 4) 
    {
        for (unsigned char i_20 = 0; i_20 < 22; i_20 += 3) 
        {
            for (unsigned long long int i_21 = 0; i_21 < 22; i_21 += 1) 
            {
                {
                    arr_75 [4U] [i_19] [i_19] |= ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) min((8589934583LL), (((/* implicit */long long int) (short)2047))))), (var_13))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) max(((unsigned char)202), ((unsigned char)219)))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_22 = 0; i_22 < 22; i_22 += 4) 
                    {
                        for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) 
                        {
                            {
                                var_35 = ((/* implicit */unsigned short) ((short) (-(((/* implicit */int) min(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)1))))))));
                                var_36 = ((/* implicit */long long int) (+(18446744073709551614ULL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_37 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned char) var_4)))));
}
