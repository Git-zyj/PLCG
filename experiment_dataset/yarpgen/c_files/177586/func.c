/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177586
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_12 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) arr_0 [i_0]))))) * (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        arr_4 [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_11)) * ((((_Bool)0) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)92)))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_9 [i_1] [i_0] = ((/* implicit */long long int) 16929577353395581181ULL);
            var_13 = ((/* implicit */unsigned int) arr_7 [i_1] [i_0] [i_0]);
            arr_10 [i_0] [i_0] [i_1] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (~(7910828905426916968LL)))) ? (-826615498) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))))));
        }
        for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_3 = 1; i_3 < 23; i_3 += 3) 
            {
                /* LoopSeq 1 */
                for (short i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    /* LoopSeq 2 */
                    for (short i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        arr_21 [i_0] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) 7910828905426916968LL)) ? (((/* implicit */unsigned long long int) 1592630873)) : (6299311163220806588ULL)));
                        arr_22 [i_5] [i_4] [i_3] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_7);
                        arr_23 [i_3] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_3] [i_3 - 1] [i_0] [i_0]))) >= (var_7)));
                        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */unsigned long long int) var_9))));
                    }
                    for (short i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)140))) < (16929577353395581193ULL)));
                        arr_26 [21ULL] [i_0] [i_0] [i_0] [i_3] [i_4] [i_6] = (!(((/* implicit */_Bool) (unsigned short)20773)));
                    }
                    arr_27 [i_4] [i_3] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_2) ? (2147483619) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (signed char)70)) : (((/* implicit */int) (short)0))));
                    arr_28 [i_2] [i_3] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_0 [i_3])) && (var_3))));
                }
                /* LoopSeq 1 */
                for (signed char i_7 = 0; i_7 < 25; i_7 += 3) 
                {
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (+(arr_7 [i_3 - 1] [i_2] [i_3 - 1]))))));
                    var_17 *= ((/* implicit */unsigned char) arr_6 [i_3 - 1] [i_0] [i_0]);
                    /* LoopSeq 2 */
                    for (short i_8 = 0; i_8 < 25; i_8 += 4) /* same iter space */
                    {
                        var_18 &= ((/* implicit */signed char) ((unsigned long long int) 1999859596U));
                        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_0))));
                    }
                    for (short i_9 = 0; i_9 < 25; i_9 += 4) /* same iter space */
                    {
                        arr_36 [i_9] [(signed char)2] [i_3] [i_3] [(short)20] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_3 + 2])) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3] [i_3 + 1])))));
                        var_20 = ((((/* implicit */int) (short)(-32767 - 1))) * (((/* implicit */int) (_Bool)1)));
                        arr_37 [i_0] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) 7910828905426916968LL))) ? (((/* implicit */int) arr_17 [i_3] [11U] [(short)9] [i_3 - 1])) : (((/* implicit */int) ((short) arr_19 [i_0])))));
                        arr_38 [i_3] [(signed char)15] [i_3] [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) (!(((var_6) != (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
                    }
                }
                arr_39 [i_3] [i_2] = ((/* implicit */short) var_10);
            }
            for (signed char i_10 = 1; i_10 < 24; i_10 += 3) 
            {
                arr_42 [i_10] = ((/* implicit */unsigned char) var_11);
                var_21 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_10] [i_10]))) - (arr_14 [i_10 + 1]))));
                arr_43 [i_10] [i_0] [i_10] = ((/* implicit */unsigned short) (short)-29101);
                var_22 += ((/* implicit */signed char) arr_2 [i_10]);
            }
            /* LoopSeq 1 */
            for (unsigned int i_11 = 0; i_11 < 25; i_11 += 1) 
            {
                arr_47 [i_11] [i_0] [i_11] = ((/* implicit */unsigned char) arr_11 [i_2] [i_2]);
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) /* same iter space */
                {
                    arr_50 [i_0] [i_11] [i_11] [i_11] = (!(((/* implicit */_Bool) arr_20 [i_11] [i_11])));
                    var_23 = ((/* implicit */short) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_2] [i_11] [i_2] [i_0]))) != (1517166720313970435ULL))));
                    var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_9)) / (((((/* implicit */_Bool) var_8)) ? (var_1) : (arr_34 [(short)5])))));
                }
                for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), ((~(var_1)))));
                    var_26 += ((/* implicit */unsigned int) var_5);
                    var_27 = ((/* implicit */int) 1999859596U);
                }
                for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (signed char i_15 = 2; i_15 < 22; i_15 += 3) 
                    {
                        arr_59 [i_0] [i_0] [i_0] [i_11] [i_0] = ((/* implicit */unsigned int) min((var_1), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_55 [i_14] [i_14] [i_15 + 1] [i_14 + 1] [i_14] [i_11])))))));
                        arr_60 [i_11] [i_14] [i_11] [i_2] [i_2] [i_11] = (~(((/* implicit */int) max((arr_55 [i_15 + 2] [i_15 - 1] [i_15 - 2] [i_15] [(short)23] [i_15 - 1]), (arr_55 [16LL] [i_15 + 2] [i_15 - 1] [i_15] [i_15] [i_15])))));
                        var_28 = ((/* implicit */short) ((_Bool) 3338585179U));
                        arr_61 [i_0] [0ULL] [i_11] [i_11] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) ((((/* implicit */int) (short)1)) >= (((/* implicit */int) (signed char)-124)))))) * (((/* implicit */int) var_5))));
                        arr_62 [i_0] [i_11] [i_11] [i_14] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)23435)) ? (((/* implicit */long long int) (((_Bool)0) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44763)))))) : (max((((((/* implicit */_Bool) (signed char)-102)) ? (arr_12 [i_15]) : (-1534822640202214585LL))), (((/* implicit */long long int) var_2))))));
                    }
                    var_29 = ((/* implicit */signed char) ((((/* implicit */long long int) var_7)) == (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_46 [23U] [i_2] [23U] [i_2])) ? (((/* implicit */int) arr_33 [(_Bool)1] [i_11] [(_Bool)1] [i_2] [i_0])) : (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) arr_13 [i_0] [i_2] [(short)9] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_9)))))));
                }
                var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) 819981467713265648ULL))));
            }
        }
    }
    var_31 = ((/* implicit */short) ((var_7) + (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_6)))));
    /* LoopNest 2 */
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        for (long long int i_17 = 3; i_17 < 17; i_17 += 2) 
        {
            {
                var_32 = ((/* implicit */unsigned int) var_2);
                var_33 = ((/* implicit */signed char) max(((+(max((((/* implicit */long long int) (short)-6481)), (18LL))))), (((/* implicit */long long int) (((!(((/* implicit */_Bool) (signed char)-45)))) ? (((/* implicit */int) ((((/* implicit */int) arr_57 [i_17] [i_17])) != (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) var_3)))))))));
            }
        } 
    } 
    var_34 = ((/* implicit */signed char) var_5);
}
