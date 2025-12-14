/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12102
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
    var_16 = ((/* implicit */long long int) var_13);
    var_17 = ((/* implicit */long long int) min((-81901897), (((/* implicit */int) (_Bool)0))));
    /* LoopSeq 4 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0 - 1] = ((((/* implicit */_Bool) ((var_7) / (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((arr_1 [i_0 + 2] [i_0 - 2]) ? (81901918) : (((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 2])))) : ((+(((/* implicit */int) arr_1 [i_0 + 2] [i_0 - 1])))));
        var_18 = ((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1])))));
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((long long int) (~((~(((/* implicit */int) arr_0 [i_0 + 2]))))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 2; i_1 < 20; i_1 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) -81901914);
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            for (short i_3 = 1; i_3 < 21; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        for (signed char i_5 = 4; i_5 < 21; i_5 += 1) 
                        {
                            {
                                var_21 = arr_16 [i_3] [i_3 + 1] [i_3 + 1] [i_5] [i_5];
                                var_22 = ((/* implicit */short) ((arr_12 [i_3] [i_2] [i_3] [i_4] [i_3] [i_1]) == (((arr_12 [i_1] [20] [i_3] [i_1] [i_3 - 1] [i_1]) / (((/* implicit */unsigned int) 81901896))))));
                                arr_17 [i_1] [i_1] [i_1] [i_1 - 1] [i_1] [i_1] = ((/* implicit */_Bool) -81901902);
                            }
                        } 
                    } 
                    arr_18 [i_1] [i_1] [i_1] = ((/* implicit */int) ((signed char) arr_4 [i_3]));
                    var_23 -= ((/* implicit */_Bool) ((long long int) arr_13 [i_1 - 2] [i_2] [i_1 + 1] [i_1 - 2]));
                }
            } 
        } 
        arr_19 [i_1 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1] [i_1])) ? (((int) arr_2 [i_1 + 2])) : (((/* implicit */int) arr_10 [i_1 + 2]))));
    }
    for (short i_6 = 0; i_6 < 21; i_6 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_7 = 1; i_7 < 18; i_7 += 3) 
        {
            var_24 += ((/* implicit */short) ((((/* implicit */_Bool) min(((unsigned short)4902), (((/* implicit */unsigned short) arr_4 [i_7 + 1]))))) || (((/* implicit */_Bool) ((var_0) ^ (((/* implicit */int) arr_4 [i_7 + 3])))))));
            /* LoopSeq 1 */
            for (unsigned char i_8 = 2; i_8 < 19; i_8 += 1) 
            {
                /* LoopSeq 3 */
                for (long long int i_9 = 1; i_9 < 18; i_9 += 2) 
                {
                    var_25 += ((/* implicit */_Bool) -2931677699259334973LL);
                    var_26 = ((/* implicit */_Bool) 0LL);
                }
                /* vectorizable */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                {
                    arr_31 [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) var_13);
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                    {
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_6])) >> (((-81901914) + (81901933)))))) ? (((/* implicit */int) arr_13 [i_8 - 2] [i_11 + 1] [i_11] [i_11])) : (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) var_5)))))));
                        arr_34 [i_6] [i_6] [i_6] [i_6] = ((((/* implicit */_Bool) (+(arr_12 [i_6] [i_11] [i_8] [i_10] [i_11 + 1] [i_11])))) ? (((/* implicit */int) (unsigned short)255)) : ((~(((/* implicit */int) var_15)))));
                    }
                    var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((unsigned short) (~(arr_12 [i_8 + 1] [i_8 + 1] [i_6] [i_7 - 1] [i_6] [i_6])))))));
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                {
                    var_29 -= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) min((((/* implicit */int) (_Bool)1)), (var_3)))))) | (((((/* implicit */long long int) ((/* implicit */int) var_5))) / (var_10)))));
                    /* LoopSeq 3 */
                    for (signed char i_13 = 2; i_13 < 20; i_13 += 3) /* same iter space */
                    {
                        arr_41 [i_6] [i_7] [i_7] [i_8 - 1] [i_6] [8LL] [i_13] = ((/* implicit */signed char) arr_5 [i_12]);
                        var_30 = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_8] [i_13] [i_13 - 1] [i_8] [i_7 + 1] [i_6]))))) < ((+(((/* implicit */int) arr_15 [i_8] [i_8] [i_8] [i_8 - 2] [i_8] [i_13 + 1])))));
                    }
                    for (signed char i_14 = 2; i_14 < 20; i_14 += 3) /* same iter space */
                    {
                        var_31 = min((((/* implicit */long long int) var_9)), (((((/* implicit */_Bool) min((-2648361751038734041LL), (((/* implicit */long long int) arr_40 [i_6] [i_7] [i_12]))))) ? (min((arr_21 [i_6]), (var_7))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65281)))))))));
                        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)73))))) & (((((/* implicit */_Bool) var_11)) ? (1185588773780642179LL) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_6] [i_7] [i_7] [i_14] [i_12] [i_7])))))))) ? (arr_33 [i_14] [i_8] [i_7]) : (((/* implicit */int) arr_10 [i_6])))))));
                        arr_44 [i_6] [i_7] [i_6] [i_8] [i_6] [i_14] = ((/* implicit */long long int) (-(((/* implicit */int) ((signed char) 1119231569298455801LL)))));
                    }
                    for (signed char i_15 = 2; i_15 < 20; i_15 += 3) /* same iter space */
                    {
                        var_33 -= ((/* implicit */unsigned short) (-(arr_22 [(short)6] [i_15 - 2])));
                        arr_47 [i_6] [i_6] [i_6] [i_7] [i_8 + 1] [i_12] [i_15 + 1] = ((/* implicit */signed char) (-(((/* implicit */int) var_8))));
                        arr_48 [i_6] [i_7 + 3] [i_8] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) -1603599560901339837LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_9 [i_12] [i_12] [i_12] [i_12]), (((/* implicit */unsigned short) (signed char)-4)))))))) : (arr_7 [i_6])));
                    }
                    var_34 = ((/* implicit */long long int) (((_Bool)1) ? (((((/* implicit */_Bool) -7850645367009028268LL)) ? (arr_25 [i_6]) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_15 [i_6] [i_6] [i_7 + 1] [i_7] [i_6] [(signed char)2])) : (((/* implicit */int) (signed char)77)))))) : (((((/* implicit */int) (signed char)77)) * (((/* implicit */int) arr_23 [i_7] [i_8]))))));
                    var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((max((arr_16 [i_7 + 2] [i_7 + 2] [(short)5] [i_12] [20LL]), (((/* implicit */unsigned long long int) var_10)))) * (min((((/* implicit */unsigned long long int) var_5)), (arr_16 [i_7 + 1] [i_7] [(_Bool)1] [i_7] [i_7 + 1]))))))));
                }
                arr_49 [i_6] [i_7 - 1] [i_8 + 1] [i_6] = ((((/* implicit */int) (unsigned short)11763)) & (((/* implicit */int) var_5)));
                var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_39 [i_6] [i_6] [(signed char)12] [(_Bool)1] [(_Bool)1] [i_8])))))));
                arr_50 [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)6728)) / (arr_33 [i_7 - 1] [i_8] [i_8 - 2])));
                /* LoopNest 2 */
                for (signed char i_16 = 3; i_16 < 18; i_16 += 4) 
                {
                    for (int i_17 = 0; i_17 < 21; i_17 += 4) 
                    {
                        {
                            var_37 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_21 [(_Bool)1])) <= (((((/* implicit */_Bool) ((-5112631862837395180LL) ^ (-1320799378045638644LL)))) ? (min((((/* implicit */unsigned long long int) var_13)), (11791987582313745934ULL))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)-73)) : (((/* implicit */int) arr_26 [i_6] [i_8] [i_17])))))))));
                            var_38 -= ((/* implicit */_Bool) ((unsigned char) (((_Bool)1) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_27 [i_17]))))) : (((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */unsigned long long int) -1LL)) : (18446744073709551615ULL))))));
                        }
                    } 
                } 
            }
            arr_55 [(_Bool)1] [(_Bool)1] |= ((/* implicit */unsigned short) min((arr_46 [i_6] [i_6] [(_Bool)1] [i_7 + 3] [(signed char)11]), (((/* implicit */long long int) (+(((/* implicit */int) var_9)))))));
            var_39 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (-((-(-81901914))))))));
        }
        var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_12))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), (var_14)))) && ((_Bool)1))))) : ((+(arr_16 [i_6] [i_6] [i_6] [i_6] [i_6])))));
        /* LoopSeq 2 */
        for (int i_18 = 0; i_18 < 21; i_18 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
            {
                var_41 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_51 [i_6])) ? (((/* implicit */int) arr_27 [i_6])) : (((/* implicit */int) var_9)))));
                arr_60 [i_6] [i_18] [i_6] [i_6] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_45 [(unsigned short)11] [i_19 + 1] [11] [(unsigned short)2] [i_19 + 1] [11])) ? (arr_45 [i_6] [i_19 + 1] [i_19 + 1] [i_19 + 1] [i_19] [i_19]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)77)))))));
                /* LoopSeq 1 */
                for (short i_20 = 3; i_20 < 20; i_20 += 1) 
                {
                    var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) arr_27 [(unsigned short)14]))));
                    var_43 = ((/* implicit */_Bool) -4739584913893188365LL);
                    arr_64 [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) -1769720212)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-24))) : (var_7)))))) + (var_10)));
                }
            }
            arr_65 [12] &= ((/* implicit */_Bool) ((unsigned char) (short)-23937));
        }
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            /* LoopSeq 4 */
            for (long long int i_22 = 0; i_22 < 21; i_22 += 3) 
            {
                var_44 |= ((/* implicit */short) ((min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_3)) ? (14ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23930))))))) & (((/* implicit */unsigned long long int) (-(((long long int) arr_67 [(signed char)12] [i_21] [(signed char)5])))))));
                var_45 = ((/* implicit */_Bool) (((+(((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_6] [i_6] [i_22] [i_21] [i_6] [i_22])) && (((/* implicit */_Bool) var_10))))))) >> (((((/* implicit */int) var_5)) - (20206)))));
                arr_72 [i_6] [i_6] [i_22] = ((/* implicit */short) arr_7 [i_21]);
                var_46 = ((/* implicit */unsigned short) arr_6 [i_6]);
                var_47 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (short)1)) <= (((/* implicit */int) ((_Bool) -1185588773780642180LL))))))));
            }
            for (unsigned short i_23 = 0; i_23 < 21; i_23 += 4) 
            {
                var_48 = ((/* implicit */signed char) (unsigned short)65002);
                var_49 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_6)) && ((_Bool)0)))) & (((((/* implicit */_Bool) arr_46 [i_6] [(unsigned char)1] [i_6] [i_21] [i_23])) ? (((/* implicit */int) arr_73 [i_6] [i_21] [i_21] [i_23])) : (((/* implicit */int) (_Bool)0))))))), (min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (6702763165665021448LL))), (((/* implicit */long long int) (_Bool)1))))));
            }
            for (unsigned char i_24 = 0; i_24 < 21; i_24 += 1) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_25 = 0; i_25 < 21; i_25 += 3) 
                {
                    arr_79 [i_25] [i_6] [i_21] [i_6] [i_6] = ((/* implicit */long long int) var_14);
                    arr_80 [i_6] [i_6] [i_24] [i_6] = ((/* implicit */long long int) (_Bool)1);
                    var_50 = ((/* implicit */long long int) ((arr_33 [i_6] [i_21] [i_24]) != (((/* implicit */int) var_13))));
                }
                for (long long int i_26 = 0; i_26 < 21; i_26 += 1) 
                {
                    var_51 = ((/* implicit */unsigned short) min((var_51), (((/* implicit */unsigned short) max(((((!(var_9))) ? (((/* implicit */int) max((arr_52 [i_6] [i_21] [i_21] [i_26]), (var_2)))) : (((arr_1 [i_21] [i_24]) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) var_2)))))), (((/* implicit */int) arr_69 [(unsigned char)2] [(unsigned char)2] [i_26] [i_26])))))));
                    arr_83 [i_26] [i_21] [i_6] [i_21] = (-(arr_46 [i_26] [i_24] [i_21] [0LL] [i_6]));
                    arr_84 [i_6] [i_21] [i_21] [i_21] [i_6] [i_26] = ((signed char) var_7);
                    var_52 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((var_4), (((/* implicit */int) arr_29 [i_6]))))) && (((/* implicit */_Bool) arr_7 [i_26])))) ? (max((((/* implicit */int) min((((/* implicit */short) (signed char)106)), ((short)29165)))), (((((/* implicit */_Bool) 8556397194962643710LL)) ? (var_6) : (arr_82 [i_21] [(unsigned char)2] [i_24] [i_24]))))) : (((/* implicit */int) ((((/* implicit */unsigned int) arr_82 [i_26] [i_21] [i_24] [i_21])) <= (((((/* implicit */_Bool) (signed char)-114)) ? (arr_12 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                    arr_85 [i_26] [i_6] [i_6] [i_6] = ((/* implicit */signed char) min((min((((/* implicit */long long int) max((-946044207), (((/* implicit */int) (signed char)(-127 - 1)))))), (((((/* implicit */_Bool) (short)-15908)) ? (var_10) : (1185588773780642179LL))))), (((/* implicit */long long int) (~(((/* implicit */int) arr_75 [i_6] [i_21] [i_21])))))));
                }
                arr_86 [(short)16] [(short)16] [i_24] [i_6] = (unsigned short)37204;
                var_53 = ((/* implicit */unsigned char) var_9);
                var_54 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_5)) > (1514712788)))) + (((((/* implicit */_Bool) -1922247758)) ? (arr_42 [i_24] [i_24]) : (((/* implicit */int) arr_27 [i_6]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_57 [i_6] [i_21]), (var_2)))) ? (((/* implicit */int) arr_66 [i_6])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) : ((~(arr_54 [i_6] [i_6] [i_24])))));
            }
            /* vectorizable */
            for (unsigned int i_27 = 0; i_27 < 21; i_27 += 3) 
            {
                arr_90 [i_6] [i_21] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (signed char)21))) ? (arr_54 [i_27] [i_6] [i_6]) : (((arr_8 [i_6] [i_6] [i_6] [i_27]) >> (((6702763165665021438LL) - (6702763165665021401LL)))))));
                arr_91 [i_6] [i_21] [i_27] = ((/* implicit */unsigned short) ((-1514712800) == (((/* implicit */int) arr_4 [1ULL]))));
            }
            arr_92 [i_6] [i_21] = arr_73 [i_6] [(_Bool)1] [i_6] [i_6];
        }
    }
    /* vectorizable */
    for (short i_28 = 0; i_28 < 13; i_28 += 2) 
    {
        arr_95 [i_28] [i_28] = ((/* implicit */unsigned short) (((_Bool)1) ? ((+(((/* implicit */int) arr_38 [i_28] [13U])))) : (((/* implicit */int) arr_30 [i_28]))));
        arr_96 [i_28] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_28]))))) ? (8972894272259391279ULL) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_74 [i_28] [(signed char)16] [i_28])) : (((/* implicit */int) arr_75 [i_28] [i_28] [i_28])))))));
    }
    var_55 = ((/* implicit */short) ((max((((/* implicit */long long int) (!(((/* implicit */_Bool) 1469564456))))), (((((/* implicit */_Bool) (short)-25730)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-107))) : (var_10))))) == (((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */long long int) (unsigned short)28331)), (-1268075307529209341LL))) > (((/* implicit */long long int) max((((/* implicit */int) var_8)), (var_6))))))))));
    var_56 += ((/* implicit */short) ((((/* implicit */int) var_1)) / ((-(var_0)))));
}
