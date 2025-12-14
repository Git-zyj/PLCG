/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107592
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
    for (signed char i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */short) (+(12629832804289099547ULL)));
                                arr_12 [i_0] [i_3] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_5 [i_4] [i_2] [i_1]))))));
                                arr_13 [i_3] [i_1] [i_2] [(unsigned char)9] [i_3] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((-1564031242) + (2147483647))) >> (min((0), (0)))))) ? (-1564031242) : (((/* implicit */int) ((unsigned char) 7112582884619679885LL)))));
                            }
                        } 
                    } 
                    arr_14 [3ULL] [8LL] [i_2] = ((/* implicit */unsigned short) var_2);
                    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(min((var_4), (((/* implicit */long long int) -1564031242))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) var_4)) & (arr_3 [i_2] [i_1] [(unsigned char)1])))))) : (min((((var_5) ? (var_4) : (((/* implicit */long long int) 0U)))), (max((((/* implicit */long long int) (unsigned short)0)), (arr_0 [i_0])))))));
                }
            } 
        } 
        var_13 = ((/* implicit */int) var_5);
        arr_15 [i_0 - 2] = ((/* implicit */unsigned char) var_5);
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) var_4))));
        var_15 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)49)) * (((/* implicit */int) (unsigned short)0))));
    }
    /* vectorizable */
    for (signed char i_5 = 4; i_5 < 23; i_5 += 1) 
    {
        arr_19 [i_5] [i_5 - 1] = ((/* implicit */unsigned char) -1564031242);
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (~(((/* implicit */int) arr_18 [i_5 - 2] [i_5 - 1])))))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_6 = 1; i_6 < 16; i_6 += 1) 
    {
        arr_22 [(unsigned char)12] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned char) (_Bool)1))))) ? ((~(((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) arr_18 [i_6 - 1] [i_6 - 1]))))));
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (long long int i_8 = 0; i_8 < 18; i_8 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_9 = 0; i_9 < 18; i_9 += 1) 
                    {
                        var_17 = ((/* implicit */signed char) (unsigned short)65535);
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((max((((/* implicit */int) ((unsigned short) var_5))), (max((((/* implicit */int) arr_20 [i_6])), (var_10))))) - ((~((~(((/* implicit */int) var_1)))))))))));
                        var_19 = ((/* implicit */long long int) ((((((/* implicit */int) ((0) != (((/* implicit */int) arr_29 [i_7]))))) ^ ((+(0))))) & ((+(((int) var_7))))));
                        arr_31 [i_7] [i_7] [i_8] [i_7] [i_7] = ((/* implicit */unsigned char) arr_29 [i_7]);
                        /* LoopSeq 1 */
                        for (unsigned int i_10 = 3; i_10 < 17; i_10 += 2) 
                        {
                            var_20 = ((/* implicit */long long int) min((var_20), (((long long int) (+(-1))))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((~(arr_23 [i_7] [(unsigned char)11] [(unsigned char)11]))), (((/* implicit */unsigned int) (~(((/* implicit */int) (short)1534)))))))) ? (min((((0LL) >> (((((/* implicit */int) (short)6462)) - (6430))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) -5136066725670567121LL))) ? ((~(((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) max((arr_28 [i_6] [i_7] [i_6] [i_9]), (((/* implicit */unsigned short) var_5))))))))));
                            arr_36 [i_8] [i_8] [i_8] [i_8] [i_7] [i_8] = ((/* implicit */short) min((var_10), ((+(((/* implicit */int) var_5))))));
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-6042)) != (((((/* implicit */_Bool) ((((/* implicit */long long int) 2431503596U)) ^ (-1338037642389801330LL)))) ? ((~(((/* implicit */int) (unsigned short)45168)))) : ((~(((/* implicit */int) arr_33 [i_10] [i_10] [i_10] [(signed char)16] [i_10 - 1] [i_10 + 1] [i_10])))))))))));
                        }
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((signed char) (short)-6042))) ? (((/* implicit */int) arr_38 [i_6 + 1] [9U])) : (((/* implicit */int) arr_17 [i_6 + 1] [i_6 + 1])))) <= (((/* implicit */int) (unsigned char)237))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_12 = 1; i_12 < 14; i_12 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */int) arr_42 [i_12 + 2] [i_11] [i_11] [i_8] [i_7] [i_6] [(unsigned char)7])) != (((/* implicit */int) arr_25 [i_6] [12LL] [i_6] [i_12 + 3])))))));
                            arr_43 [(unsigned char)3] [i_6] [i_7] [i_7] [i_7] [i_7] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (1667648806U) : (((/* implicit */unsigned int) -1))))) >= ((~(-1147952544018843383LL)))));
                            var_25 = ((/* implicit */_Bool) (short)-31081);
                            var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) != (36028797018963967ULL)));
                        }
                        for (unsigned long long int i_13 = 3; i_13 < 17; i_13 += 4) 
                        {
                            arr_48 [i_6 - 1] [i_6] [i_7] [11ULL] [(signed char)11] [(signed char)11] [i_7] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (2768904392274105400LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_5))))) : (max((((-1147952544018843383LL) / (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)7)))))))));
                            var_27 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (unsigned short)5331)), (arr_39 [i_6] [i_6] [i_6 - 1] [i_6] [i_7])));
                        }
                        /* vectorizable */
                        for (unsigned char i_14 = 0; i_14 < 18; i_14 += 3) 
                        {
                            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (+(((/* implicit */int) var_5)))))));
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (+(((/* implicit */int) var_3)))))));
                        }
                    }
                    var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (~((+((~(((/* implicit */int) (signed char)-9)))))))))));
                    var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) (((+((((-9223372036854775807LL - 1LL)) / (var_4))))) / (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
                    arr_52 [11LL] [i_7] [i_6 + 1] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_21 [i_6])) ? (((/* implicit */int) arr_18 [i_6] [i_7])) : (((/* implicit */int) (unsigned short)65535)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 2) 
                    {
                        for (signed char i_16 = 0; i_16 < 18; i_16 += 2) 
                        {
                            {
                                arr_57 [(signed char)12] [(unsigned short)9] [i_7] [(signed char)12] [i_15] [15LL] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(3016416421733514121LL)))))))));
                                var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) (~((~(arr_23 [i_15] [i_8] [i_15]))))))));
                                var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_55 [i_6 + 2] [i_7] [i_16])))))))), (arr_54 [i_6] [i_7] [i_8] [i_15] [(unsigned short)3]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_58 [i_6] = min((((/* implicit */int) (!(((/* implicit */_Bool) max((2147483647), (((/* implicit */int) var_0)))))))), (((int) arr_46 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6] [i_6] [i_6 + 1])));
    }
    /* LoopSeq 2 */
    for (long long int i_17 = 0; i_17 < 25; i_17 += 1) /* same iter space */
    {
        var_34 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max(((short)0), (((/* implicit */short) (_Bool)0))))), (((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_16 [(unsigned char)7] [(short)9])))))));
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 25; i_18 += 2) 
        {
            for (signed char i_19 = 3; i_19 < 23; i_19 += 1) 
            {
                {
                    var_35 = ((/* implicit */unsigned char) 8974792797430455096ULL);
                    var_36 = var_3;
                }
            } 
        } 
        var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) ((36028797018963967ULL) >> (((-1147952544018843383LL) + (1147952544018843398LL))))))));
        /* LoopSeq 2 */
        for (unsigned char i_20 = 1; i_20 < 24; i_20 += 2) 
        {
            var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) ((((/* implicit */_Bool) arr_66 [i_17] [i_17])) ? ((-(((/* implicit */int) arr_69 [i_17])))) : (((((/* implicit */_Bool) (((-2147483647 - 1)) - (((/* implicit */int) var_7))))) ? ((~(((/* implicit */int) var_3)))) : ((~(((/* implicit */int) var_8)))))))))));
            /* LoopNest 3 */
            for (unsigned int i_21 = 3; i_21 < 24; i_21 += 1) 
            {
                for (unsigned short i_22 = 4; i_22 < 22; i_22 += 1) 
                {
                    for (unsigned char i_23 = 0; i_23 < 25; i_23 += 1) 
                    {
                        {
                            var_39 = (signed char)74;
                            var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~((~(arr_65 [i_23] [(short)18])))))))))));
                            var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) (((~((~(((/* implicit */int) var_3)))))) == (((/* implicit */int) (((~(-5119292897915118359LL))) != ((~(-2984310828811795773LL)))))))))));
                        }
                    } 
                } 
            } 
            arr_77 [i_17] = ((/* implicit */signed char) (((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))))) & (((/* implicit */int) var_5))));
            /* LoopNest 3 */
            for (short i_24 = 0; i_24 < 25; i_24 += 2) 
            {
                for (unsigned short i_25 = 0; i_25 < 25; i_25 += 2) 
                {
                    for (int i_26 = 0; i_26 < 25; i_26 += 4) 
                    {
                        {
                            arr_86 [i_24] = (+(((/* implicit */int) (!(((/* implicit */_Bool) var_0))))));
                            var_42 = ((/* implicit */_Bool) var_8);
                        }
                    } 
                } 
            } 
            arr_87 [i_20 - 1] [i_17] = ((/* implicit */long long int) (-(((int) ((arr_68 [i_17] [i_20]) != (((/* implicit */long long int) ((/* implicit */int) arr_82 [i_17] [i_20]))))))));
        }
        for (unsigned char i_27 = 0; i_27 < 25; i_27 += 3) 
        {
            var_43 = ((/* implicit */int) min((var_43), ((+(((/* implicit */int) ((((/* implicit */int) arr_83 [i_17] [i_17] [i_17] [21LL] [(short)13] [i_27])) != (((((/* implicit */_Bool) (short)-2946)) ? (((/* implicit */int) arr_62 [(signed char)11] [(signed char)11])) : (0))))))))));
            var_44 = ((/* implicit */int) max((var_44), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((-5119292897915118359LL) - (((/* implicit */long long int) ((/* implicit */int) arr_76 [i_17] [(signed char)7] [i_17] [i_17] [i_27] [i_27])))))) != (min((((/* implicit */unsigned long long int) (short)-3305)), (13626494408918635589ULL))))))));
        }
        arr_92 [i_17] = ((long long int) max(((+(((/* implicit */int) (unsigned char)0)))), (((((/* implicit */int) arr_74 [i_17] [(unsigned short)2] [(unsigned short)2])) % (((/* implicit */int) arr_79 [i_17] [i_17] [i_17] [i_17]))))));
    }
    for (long long int i_28 = 0; i_28 < 25; i_28 += 1) /* same iter space */
    {
        arr_95 [(short)7] = ((/* implicit */long long int) max((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : ((~(18410715276690587649ULL))))), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (unsigned short)7144)))))))));
        /* LoopNest 2 */
        for (int i_29 = 0; i_29 < 25; i_29 += 3) 
        {
            for (unsigned char i_30 = 3; i_30 < 23; i_30 += 2) 
            {
                {
                    arr_102 [i_28] [i_28] [i_29] = ((/* implicit */unsigned char) (_Bool)0);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_31 = 0; i_31 < 25; i_31 += 4) 
                    {
                        arr_105 [i_28] [i_28] [i_28] [i_28] [i_29] [11ULL] = (!(((/* implicit */_Bool) arr_79 [i_28] [i_30 + 1] [i_30] [i_31])));
                        var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) (+(((/* implicit */int) arr_97 [i_31])))))));
                        arr_106 [i_29] [i_29] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_72 [i_29] [i_29])))) ? ((+(((/* implicit */int) var_7)))) : ((+(((/* implicit */int) (_Bool)0))))));
                        var_46 = ((/* implicit */unsigned char) max((var_46), (((/* implicit */unsigned char) 10378827429871632705ULL))));
                        var_47 = ((/* implicit */unsigned char) min((var_47), (var_0)));
                    }
                }
            } 
        } 
    }
    var_48 = ((/* implicit */unsigned char) ((((long long int) (+(36028797018963967ULL)))) / (((/* implicit */long long int) ((/* implicit */int) var_7)))));
}
