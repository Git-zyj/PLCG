/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10923
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
    var_11 &= var_1;
    var_12 |= ((/* implicit */unsigned int) var_0);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) | (291612830)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) : (3678696480U)));
        /* LoopSeq 4 */
        for (signed char i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) max(((+(((/* implicit */int) arr_2 [i_0] [i_1 - 1])))), (((/* implicit */int) arr_5 [i_0] [i_0] [i_1]))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((unsigned long long int) 5776844081900585905ULL)))));
                    var_15 = ((/* implicit */_Bool) var_9);
                }
                for (short i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
                {
                    var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_1 [i_4] [i_1 - 1]))));
                    arr_15 [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */int) var_5)) + (((/* implicit */int) (short)-2298))));
                    var_17 |= ((/* implicit */short) arr_0 [i_2]);
                }
                for (short i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
                {
                    arr_18 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 - 2] [i_1])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) ((var_1) != (((/* implicit */long long int) 511))))))));
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        var_18 ^= ((((/* implicit */int) (signed char)3)) != (((arr_19 [i_1] [i_1] [i_6] [i_5] [i_6] [i_6] [i_2]) ? (((/* implicit */int) arr_11 [i_5] [i_1] [i_2])) : (((/* implicit */int) arr_1 [i_0] [i_5])))));
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_2])) && (((/* implicit */_Bool) arr_9 [i_1 + 1] [i_2]))));
                        var_20 |= ((/* implicit */unsigned short) (((_Bool)0) ? (((((/* implicit */_Bool) 16512796024036308252ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24509))) : (16512796024036308252ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)127)) >> (((((/* implicit */int) (unsigned char)109)) - (79))))))));
                        arr_22 [i_0] [i_0] [i_2] [i_0] = (i_2 % 2 == 0) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_6]))))) << (((((/* implicit */int) arr_14 [i_1 + 1] [i_1 - 1] [i_2])) - (58021)))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_6]))))) << (((((((((/* implicit */int) arr_14 [i_1 + 1] [i_1 - 1] [i_2])) - (58021))) + (9622))) - (37))))));
                    }
                }
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 511)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((((/* implicit */int) arr_2 [i_0] [i_1])) / (((/* implicit */int) (short)-24509))))));
            }
            /* vectorizable */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_8 = 2; i_8 < 18; i_8 += 1) 
                {
                    arr_28 [i_7] [i_1] [i_1] [i_1] [i_8] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_5 [i_1] [i_1 - 2] [i_1])) + (((/* implicit */int) (short)24508)))) > (((/* implicit */int) arr_21 [i_1]))));
                    arr_29 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-15445)) ? (var_1) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)159)) << (((18446744073709551615ULL) - (18446744073709551612ULL))))))));
                    /* LoopSeq 3 */
                    for (int i_9 = 0; i_9 < 19; i_9 += 2) 
                    {
                        var_22 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_9] [i_9])) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_17 [i_0] [i_9] [i_0])) : (((/* implicit */int) arr_21 [i_7])))) : (((/* implicit */int) arr_6 [i_1 + 1] [i_7]))));
                        var_23 &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -2060421422308489457LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_1]))) : (var_0))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5506)))));
                    }
                    for (short i_10 = 2; i_10 < 18; i_10 += 4) 
                    {
                        arr_34 [i_0] [i_0] [i_0] [i_0] [i_7] = ((/* implicit */long long int) 370017837);
                        var_24 = ((/* implicit */_Bool) arr_21 [i_0]);
                    }
                    for (signed char i_11 = 0; i_11 < 19; i_11 += 1) 
                    {
                        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (signed char)-126))));
                        var_26 = ((/* implicit */_Bool) (~((-(((/* implicit */int) (short)-7185))))));
                        var_27 = ((((/* implicit */_Bool) 4398214471747330524LL)) && (((/* implicit */_Bool) -1280529680)));
                    }
                }
                for (unsigned int i_12 = 0; i_12 < 19; i_12 += 2) 
                {
                    arr_40 [i_0] [i_0] [i_1] [i_7] [i_0] [i_12] |= ((/* implicit */int) (short)16384);
                    arr_41 [i_7] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (short)-24509)) && (((/* implicit */_Bool) arr_36 [i_0] [i_7] [i_7] [i_0] [i_0] [i_0])))));
                }
                arr_42 [i_7] [i_1] [i_7] = (-(((/* implicit */int) arr_35 [i_7] [i_1] [i_0] [i_0])));
                /* LoopSeq 1 */
                for (int i_13 = 1; i_13 < 17; i_13 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_14 = 0; i_14 < 19; i_14 += 4) 
                    {
                        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -512)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (var_4))) : (2079289654291019004LL))))));
                        arr_49 [i_0] [i_0] [i_7] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_35 [i_1] [i_13 + 2] [i_7] [i_13 + 2]))));
                    }
                    var_29 = ((/* implicit */_Bool) -1526820735);
                }
            }
            arr_50 [i_0] [i_1] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) max((1933948049673243363ULL), (var_0)))) ? (((/* implicit */int) arr_44 [i_0] [i_0] [i_0] [i_1])) : ((((_Bool)0) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_38 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1]))))))));
            arr_51 [i_1 - 2] = ((/* implicit */signed char) arr_48 [i_0]);
        }
        for (int i_15 = 0; i_15 < 19; i_15 += 2) 
        {
            /* LoopNest 3 */
            for (short i_16 = 1; i_16 < 18; i_16 += 2) 
            {
                for (unsigned short i_17 = 3; i_17 < 18; i_17 += 2) 
                {
                    for (signed char i_18 = 2; i_18 < 18; i_18 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned int) 511)) % (616270812U))));
                            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? ((((_Bool)0) ? (58720256) : (((/* implicit */int) (signed char)-126)))) : (((/* implicit */int) (signed char)125))))) ? (min((((/* implicit */int) arr_19 [i_16 - 1] [i_18] [i_0] [i_16] [i_0] [i_16] [i_16 - 1])), (((((/* implicit */_Bool) 1933948049673243363ULL)) ? (((/* implicit */int) (short)17613)) : (((/* implicit */int) var_2)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                        }
                    } 
                } 
            } 
            arr_64 [i_15] = ((/* implicit */_Bool) min(((((((+(((/* implicit */int) arr_3 [i_0] [i_15] [i_15])))) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) (short)14361)) ? (((/* implicit */int) ((short) (unsigned short)26455))) : (((/* implicit */int) (signed char)120))))));
            /* LoopSeq 2 */
            for (short i_19 = 0; i_19 < 19; i_19 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_20 = 1; i_20 < 17; i_20 += 2) 
                {
                    for (short i_21 = 2; i_21 < 18; i_21 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) min((((/* implicit */long long int) arr_25 [i_0] [i_0] [i_0] [i_19] [i_0] [i_0])), (arr_37 [i_0] [i_19]))))));
                            var_33 = ((/* implicit */int) max((((/* implicit */unsigned int) arr_67 [i_21 + 1] [i_21 - 2] [i_21] [i_21] [i_21] [i_21])), (((unsigned int) (_Bool)1))));
                        }
                    } 
                } 
                arr_74 [i_0] [i_15] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) max(((short)4725), (var_5)))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_72 [i_0] [i_15] [i_19] [i_15] [i_19]))) * (552910747U)))));
                var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((18446744073709551602ULL) | (18446744073709551606ULL))))));
                var_35 *= ((/* implicit */signed char) min(((((_Bool)1) ? (((/* implicit */int) arr_55 [i_0] [i_15] [i_0])) : (((/* implicit */int) arr_55 [i_0] [i_0] [i_19])))), (((/* implicit */int) (short)-1))));
                var_36 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2623)) ? (-2493488946345513019LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)187), (((/* implicit */unsigned char) arr_2 [i_15] [i_0])))))) : ((~(var_6))))) << (((((((/* implicit */_Bool) arr_27 [i_0] [i_15])) ? ((-(((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) arr_59 [i_15])))))) + (42)))));
            }
            for (short i_22 = 0; i_22 < 19; i_22 += 4) /* same iter space */
            {
                var_37 = min((min((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) arr_1 [i_22] [i_0]))))), (((((/* implicit */_Bool) arr_39 [i_0] [i_0] [i_15] [i_15] [i_15] [i_22])) ? (((/* implicit */int) arr_52 [i_0] [i_15] [i_22])) : (((/* implicit */int) arr_24 [i_0] [i_15] [i_15] [i_15])))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)511)) - (((/* implicit */int) (short)24519)))))))));
                var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_58 [i_0])) ? (((((/* implicit */int) (unsigned char)120)) + (((/* implicit */int) arr_30 [i_22] [i_22] [i_15] [i_22] [i_0])))) : ((-(((/* implicit */int) var_9))))))), (((max((((/* implicit */unsigned long long int) arr_27 [i_0] [i_0])), (0ULL))) / (var_0))))))));
            }
        }
        for (short i_23 = 0; i_23 < 19; i_23 += 2) 
        {
            var_39 = ((/* implicit */long long int) arr_70 [i_23] [i_23] [i_0] [i_0] [i_0]);
            var_40 = ((/* implicit */short) (unsigned char)6);
            var_41 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_57 [i_0] [i_23] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (arr_48 [i_0]))), (((/* implicit */int) ((short) max(((short)-24508), (((/* implicit */short) (signed char)127))))))));
            arr_79 [i_0] [i_23] = ((/* implicit */short) (-(min((((((((/* implicit */int) var_5)) + (2147483647))) >> (((arr_46 [i_0] [i_0]) - (914521332U))))), ((~(((/* implicit */int) (_Bool)1))))))));
        }
        for (short i_24 = 2; i_24 < 18; i_24 += 2) 
        {
            var_42 = ((/* implicit */short) arr_43 [i_0] [i_0] [i_24] [i_24]);
            var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) 1751919096U))));
        }
    }
    for (short i_25 = 0; i_25 < 15; i_25 += 3) 
    {
        var_44 ^= ((/* implicit */signed char) arr_13 [i_25] [i_25] [i_25] [i_25] [i_25]);
        var_45 = ((((/* implicit */int) arr_72 [i_25] [i_25] [i_25] [i_25] [i_25])) < (min(((+(((/* implicit */int) (short)-24520)))), ((+(((/* implicit */int) arr_20 [i_25] [i_25] [i_25] [i_25] [i_25])))))));
        arr_87 [i_25] [i_25] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((9223372036854775807LL), (((/* implicit */long long int) 14))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)15222)) % (((/* implicit */int) arr_24 [i_25] [i_25] [i_25] [i_25]))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-24520))) : (arr_39 [i_25] [i_25] [i_25] [i_25] [i_25] [i_25]))))) + (((/* implicit */unsigned int) ((((/* implicit */int) arr_68 [i_25] [i_25] [i_25] [i_25])) & (((var_10) ^ (((/* implicit */int) (unsigned char)98)))))))));
        var_46 = ((/* implicit */short) max((var_0), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)22926)))))));
        arr_88 [(signed char)12] [i_25] |= ((/* implicit */int) arr_4 [i_25] [i_25]);
    }
    for (short i_26 = 0; i_26 < 19; i_26 += 2) 
    {
        var_47 = max((max((arr_17 [i_26] [i_26] [i_26]), ((short)24511))), (((/* implicit */short) max((arr_5 [i_26] [i_26] [i_26]), (arr_38 [i_26] [i_26] [i_26] [i_26] [i_26] [i_26])))));
        var_48 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) >= (((((/* implicit */_Bool) 0ULL)) ? (1057665818U) : (1465419332U)))));
    }
}
