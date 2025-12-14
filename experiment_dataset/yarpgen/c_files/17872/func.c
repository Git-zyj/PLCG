/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17872
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_4 [6U] [i_0] = ((/* implicit */short) min((((/* implicit */long long int) (unsigned char)48)), (-1523031505643488720LL)));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) /* same iter space */
        {
            var_12 += ((/* implicit */unsigned short) 4091224700731820804LL);
            arr_7 [i_0] = ((/* implicit */unsigned short) (unsigned char)197);
        }
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) /* same iter space */
        {
            var_13 = ((/* implicit */unsigned char) ((arr_8 [i_2]) << (((arr_8 [i_0]) - (2983565548U)))));
            var_14 = ((/* implicit */unsigned short) ((unsigned char) (~(var_1))));
            arr_10 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) >= (((/* implicit */int) ((((/* implicit */unsigned long long int) -1206987253)) >= (5083976235091019671ULL))))));
        }
        for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_4 = 1; i_4 < 22; i_4 += 3) 
            {
                var_15 |= ((/* implicit */long long int) (~((((!(((/* implicit */_Bool) 0LL)))) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) var_10))))));
                /* LoopSeq 2 */
                for (unsigned char i_5 = 1; i_5 < 20; i_5 += 4) 
                {
                    var_16 += ((/* implicit */long long int) ((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) <= (min((((/* implicit */long long int) var_8)), (arr_16 [(unsigned char)22] [i_5 + 3] [i_5 + 3] [14])))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        arr_22 [i_3] [(short)7] [i_3] [i_3] = ((/* implicit */unsigned char) (signed char)94);
                        var_17 += ((/* implicit */signed char) ((unsigned long long int) 0U));
                    }
                    /* vectorizable */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_7))));
                        arr_26 [i_3] [i_3] [i_3] [13ULL] [i_3] = ((/* implicit */unsigned char) (unsigned short)49196);
                    }
                    arr_27 [(unsigned short)2] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)34))) <= (4761891705479599297LL)));
                    arr_28 [i_3] [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_2))));
                }
                for (unsigned char i_8 = 0; i_8 < 23; i_8 += 4) 
                {
                    var_19 |= ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_4 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_19 [i_4 + 1]))));
                    arr_31 [i_8] [i_4 + 1] [i_0] [i_0] [i_3] [i_0] |= ((/* implicit */unsigned short) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)18)));
                    arr_32 [i_8] [i_3] [i_3] [i_3] [i_0] = ((/* implicit */int) (~(((((/* implicit */_Bool) (unsigned char)7)) ? (2ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)207)))))));
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(min((arr_1 [i_8]), (((/* implicit */unsigned int) -1588020165))))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4] [i_3] [i_0]))) / (((unsigned long long int) 3807533654660508025ULL)))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 0; i_9 < 23; i_9 += 1) 
                    {
                        arr_37 [(unsigned char)2] [i_0] [(unsigned char)2] [(unsigned char)2] [(unsigned char)2] [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                        var_21 += ((/* implicit */unsigned short) min((var_11), (min((arr_9 [i_0] [i_0] [i_4 - 1]), (arr_9 [i_4 - 1] [14ULL] [i_4 - 1])))));
                    }
                }
            }
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_10 = 0; i_10 < 23; i_10 += 1) 
            {
                var_22 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) arr_8 [i_10]))));
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 23; i_11 += 2) 
                {
                    for (unsigned short i_12 = 0; i_12 < 23; i_12 += 1) 
                    {
                        {
                            arr_46 [i_0] [i_0] [i_10] [i_11] [i_3] = ((/* implicit */short) arr_9 [i_0] [i_3] [i_3]);
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) arr_15 [(unsigned short)11]))));
                            arr_47 [i_0] [i_3] [i_10] [i_0] [i_3] &= ((/* implicit */long long int) (~((+(((/* implicit */int) arr_3 [i_10]))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (short i_13 = 1; i_13 < 22; i_13 += 3) 
            {
                var_24 = (~(1359674215923451547LL));
                var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)17294))));
            }
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                arr_52 [i_0] [i_3] [i_3] [i_3] = ((_Bool) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)12493)) >= (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) arr_49 [i_3] [i_3] [i_3] [i_3])) ? (arr_16 [(unsigned char)6] [i_3] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_15 = 0; i_15 < 23; i_15 += 4) 
                {
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-37)) <= (((/* implicit */int) (unsigned char)157))));
                    arr_56 [i_0] [i_3] [i_3] [i_3] [i_3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)207)) ? (arr_12 [i_15] [i_15] [i_3]) : (((/* implicit */int) ((short) arr_33 [i_0] [5ULL] [16U] [(unsigned char)5] [i_15])))));
                    arr_57 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)57344)) << (((((/* implicit */int) (unsigned char)238)) - (223)))));
                }
                for (signed char i_16 = 0; i_16 < 23; i_16 += 4) 
                {
                    var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */_Bool) arr_33 [i_0] [i_0] [i_14] [22LL] [i_16])) ? (max((arr_45 [i_0] [i_3] [i_3] [i_14] [i_0]), (arr_45 [i_16] [i_3] [i_14] [i_16] [0ULL]))) : (((/* implicit */unsigned long long int) min((arr_33 [i_16] [i_14] [21] [i_3] [i_0]), (arr_33 [i_0] [i_0] [i_3] [i_14] [i_0])))))))));
                    arr_60 [i_3] = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)26521)) << (((-1206987253) + (1206987266))))) << ((((+(((/* implicit */int) (signed char)52)))) - (50)))));
                }
            }
        }
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(1486090227)))) ? ((~(((/* implicit */int) arr_50 [i_0] [i_0] [i_0])))) : ((~(((/* implicit */int) var_5))))))) ? (2156476815U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_36 [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
        arr_61 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2060832620)) ? (((/* implicit */int) ((short) arr_5 [i_0] [i_0]))) : ((+(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-40)), (var_3))))))));
    }
    for (unsigned int i_17 = 0; i_17 < 10; i_17 += 4) /* same iter space */
    {
        arr_65 [i_17] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)73)), (0U)))) ? (arr_20 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]) : (var_1)))));
        arr_66 [i_17] = ((/* implicit */unsigned short) min((6684782060464069616LL), (((/* implicit */long long int) max((1206987258), (((/* implicit */int) (!((_Bool)1)))))))));
    }
    for (unsigned int i_18 = 0; i_18 < 10; i_18 += 4) /* same iter space */
    {
        arr_70 [i_18] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)(-32767 - 1))) >= (min((((/* implicit */int) (_Bool)1)), (1761126935)))));
        arr_71 [i_18] [3] = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)49622))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1206987271)))))) : (((((unsigned long long int) var_8)) << (((/* implicit */int) (_Bool)0)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            arr_75 [i_18] [i_19] = ((/* implicit */signed char) ((unsigned short) (-(((/* implicit */int) var_3)))));
            var_29 = ((/* implicit */int) ((((/* implicit */int) arr_55 [14LL] [i_19] [14LL] [i_19])) <= (((/* implicit */int) arr_64 [i_18]))));
            arr_76 [i_18] [i_19] |= ((/* implicit */short) ((-2126732309) + (((/* implicit */int) arr_50 [i_18] [i_18] [i_18]))));
            var_30 = ((/* implicit */short) (((_Bool)1) ? (428799916410246072ULL) : (((/* implicit */unsigned long long int) 4966267759332100771LL))));
            var_31 = ((/* implicit */unsigned int) arr_36 [i_18] [i_18] [i_18] [i_18] [i_19]);
        }
    }
    for (long long int i_20 = 0; i_20 < 20; i_20 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_21 = 1; i_21 < 16; i_21 += 4) 
        {
            arr_81 [i_21] = ((/* implicit */_Bool) var_4);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_22 = 0; i_22 < 20; i_22 += 4) 
            {
                arr_86 [i_22] [(unsigned char)2] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? ((~(((/* implicit */int) (short)32767)))) : (((/* implicit */int) arr_77 [i_20] [(unsigned char)11]))));
                var_32 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_50 [i_21 + 4] [i_21] [i_22]))));
                arr_87 [(unsigned char)2] [i_22] = (+(3933841600U));
                arr_88 [5ULL] [5ULL] [(unsigned char)18] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_20] [i_21] [i_21]))) : (361125695U)))));
            }
            /* LoopSeq 1 */
            for (long long int i_23 = 2; i_23 < 19; i_23 += 2) 
            {
                arr_91 [i_20] [i_20] [i_23] [(unsigned short)5] = ((/* implicit */signed char) (~(((((long long int) 5692969845611215281LL)) << (((((/* implicit */int) (signed char)116)) - (116)))))));
                arr_92 [(unsigned char)19] [(unsigned char)19] [i_23] = ((/* implicit */_Bool) var_0);
            }
        }
        var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) (((+(((/* implicit */int) ((unsigned char) var_9))))) <= (((/* implicit */int) arr_90 [i_20] [i_20])))))));
        var_34 += ((/* implicit */unsigned long long int) (+((-((~(1784859119)))))));
        /* LoopNest 2 */
        for (unsigned char i_24 = 0; i_24 < 20; i_24 += 4) 
        {
            for (unsigned char i_25 = 3; i_25 < 19; i_25 += 1) 
            {
                {
                    var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (562949952897024ULL)))) ? (((/* implicit */int) ((-2060832621) >= (((/* implicit */int) (_Bool)1))))) : ((+(((/* implicit */int) arr_83 [i_25 - 1] [(unsigned char)7] [(_Bool)1])))))))));
                    var_36 = ((/* implicit */unsigned short) ((min((arr_5 [(unsigned short)5] [14]), (((/* implicit */long long int) arr_94 [(signed char)16] [(short)4] [(unsigned char)15])))) <= (((/* implicit */long long int) (~(((/* implicit */int) max((var_7), (((/* implicit */unsigned char) (signed char)9))))))))));
                    var_37 = ((/* implicit */unsigned char) max((((/* implicit */int) ((((262140U) << (((/* implicit */int) var_5)))) <= ((~(4294967295U)))))), (min((-1761126925), (((/* implicit */int) var_9))))));
                    var_38 |= ((((/* implicit */_Bool) arr_38 [i_24])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_82 [i_25 - 3] [i_25 - 1] [i_25 + 1]))) : (((arr_21 [i_24] [i_25 - 1] [i_25 - 1] [i_25 + 1] [i_25 - 3] [i_25]) << (((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
    }
    var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((((/* implicit */int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-43))) <= (2539814493U))))) >= (min(((+(1206987256))), (((/* implicit */int) var_3)))))))));
}
