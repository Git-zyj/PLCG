/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106726
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
    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) var_6))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0] [i_0]) != (arr_1 [i_0]))))) : ((+(arr_1 [i_0])))));
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) (signed char)-116)))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (signed char)-116)) ? (1271006295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)166))))), (((/* implicit */unsigned int) max(((signed char)-116), ((signed char)116))))))) : (arr_0 [i_0] [i_0])));
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_15 |= ((/* implicit */unsigned int) ((int) (short)-27189));
        var_16 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */unsigned long long int) 1215390615U)) : (((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_1])))));
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (signed char)122))));
        /* LoopSeq 3 */
        for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            /* LoopSeq 4 */
            for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                arr_9 [i_1] [i_1] [i_2] [i_3] &= ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_7 [i_1] [(_Bool)1] [i_1] [i_1]))))), (((/* implicit */unsigned int) ((unsigned char) max(((signed char)-125), ((signed char)124)))))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        {
                            arr_16 [i_1] [i_1] [(signed char)1] [i_1] [i_4] |= ((/* implicit */_Bool) (+((+(arr_0 [i_1] [i_2])))));
                            var_18 = ((/* implicit */unsigned int) max((var_18), (var_7)));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (((~(((((((/* implicit */int) (short)-22602)) + (2147483647))) >> (((((/* implicit */int) (short)22612)) - (22611))))))) + (((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_2] [i_2] [i_3]))))), (var_9)))))))));
                arr_17 [(unsigned char)9] [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) (~(max((((/* implicit */int) (unsigned short)384)), (max((((/* implicit */int) (_Bool)1)), (2147483647)))))));
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 20; i_6 += 4) 
                {
                    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) arr_19 [i_1] [i_2] [i_3] [i_6] [i_7]))));
                            var_21 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))));
                            var_22 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_7] [i_2] [i_3] [(unsigned short)4])) ? (((/* implicit */int) (signed char)113)) : (((((/* implicit */_Bool) 513169572U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)28817))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_5))))))) : (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_11 [i_1] [i_2])), (2147483647U)))), (max((24977238198652386ULL), (((/* implicit */unsigned long long int) (unsigned short)36713))))))));
                        }
                    } 
                } 
            }
            for (unsigned char i_8 = 0; i_8 < 20; i_8 += 1) 
            {
                var_23 = ((/* implicit */unsigned int) min((var_23), (((unsigned int) 755525652U))));
                arr_26 [i_1] [i_1] [i_1] [14ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 4752387766518511361ULL)) ? (((/* implicit */unsigned int) -2079866623)) : (3432823176U))), (((/* implicit */unsigned int) (unsigned char)190))))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [16ULL]))))))) : (((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) (signed char)124)))))));
                arr_27 [i_1] [i_1] [i_1] [i_2] |= ((/* implicit */unsigned long long int) (~((~(arr_7 [i_1] [i_8] [i_1] [i_1])))));
            }
            /* vectorizable */
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                arr_31 [i_1] [i_2] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_2] [i_2] [(unsigned char)10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [13U] [i_2]))) : (6464625860812735000ULL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_14 [i_1] [i_2] [i_1]))));
                arr_32 [7ULL] = ((/* implicit */_Bool) (unsigned short)28821);
                arr_33 [i_1] [i_1] [16U] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_9 - 1] [i_9 - 1] [i_9]))) == (arr_21 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])));
                /* LoopSeq 1 */
                for (unsigned int i_10 = 0; i_10 < 20; i_10 += 2) 
                {
                    var_24 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36722))) : (3432823176U))));
                    var_25 &= ((/* implicit */unsigned int) arr_19 [12ULL] [10U] [i_9] [i_10] [i_10]);
                }
                arr_37 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) var_10);
            }
            for (unsigned int i_11 = 1; i_11 < 19; i_11 += 2) 
            {
                var_26 = max((max((arr_1 [i_11 + 1]), (arr_1 [i_11 + 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_11 + 1])) || (((/* implicit */_Bool) arr_1 [i_11 + 1]))))));
                arr_40 [i_1] [i_11] |= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) arr_20 [i_1] [i_1])) <= (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)-113)), (704738233U)))) > (((((/* implicit */_Bool) (unsigned short)52583)) ? (17251957450032882235ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-118))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 17251957450032882232ULL)) ? (arr_24 [i_1] [i_1] [i_2] [i_1]) : (arr_39 [i_1] [i_1] [i_1] [i_1])))) ? (((var_11) & (arr_5 [i_2] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_1] [i_1])))))));
                arr_41 [i_1] = ((/* implicit */_Bool) ((unsigned short) (-(arr_24 [i_11 - 1] [i_11 - 1] [i_11 + 1] [i_11]))));
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 2; i_12 < 16; i_12 += 4) 
                {
                    for (unsigned int i_13 = 0; i_13 < 20; i_13 += 4) 
                    {
                        {
                            var_27 -= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))));
                            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3297993315583291237LL)) ? (((unsigned long long int) arr_42 [i_1] [i_11] [i_12] [i_13])) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (558343185U)))))))));
                            arr_48 [i_2] [i_12] [i_11] [i_12] [i_13] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((short) var_3))))))));
                        }
                    } 
                } 
            }
            var_29 = ((/* implicit */unsigned int) min((var_29), (3638828963U)));
        }
        for (signed char i_14 = 0; i_14 < 20; i_14 += 1) 
        {
            var_30 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_18 [i_1] [i_1] [i_1] [i_1])));
            var_31 = ((/* implicit */unsigned long long int) ((1624357077U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36706)))));
            var_32 = ((/* implicit */short) ((signed char) max((((/* implicit */unsigned long long int) (unsigned short)12945)), (((((/* implicit */_Bool) arr_8 [i_14] [i_14] [2U])) ? (4752387766518511387ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-25))))))));
        }
        for (short i_15 = 1; i_15 < 16; i_15 += 4) 
        {
            var_33 += ((/* implicit */unsigned char) ((unsigned short) ((unsigned long long int) arr_34 [i_1] [i_15 + 2] [i_1])));
            var_34 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_20 [i_1] [i_1]))))), (arr_35 [i_1] [i_1] [i_1] [i_1])))), (((unsigned int) 4095ULL))));
            var_35 = ((/* implicit */_Bool) (+(min(((-(((/* implicit */int) var_3)))), (((/* implicit */int) ((558343185U) >= (var_7))))))));
        }
    }
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        var_36 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_54 [i_16] [i_16]))))) ? ((-(17487997030480396122ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))))));
        var_37 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)7153)), (558343177U)))) ? (((/* implicit */int) (short)-11455)) : ((+(((/* implicit */int) (short)-7969))))))) != (((((/* implicit */_Bool) 513169572U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28640))) : (439163489U)))));
        var_38 *= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)45)) ? (min((((/* implicit */unsigned long long int) (signed char)37)), (((((/* implicit */_Bool) 326103824)) ? (13204988210113450747ULL) : (3313611933588534631ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((0U), (((/* implicit */unsigned int) (unsigned short)61440))))) && (((/* implicit */_Bool) 8061900949049711017LL))))))));
    }
    for (unsigned long long int i_17 = 0; i_17 < 23; i_17 += 1) 
    {
        var_39 -= max((((unsigned int) var_11)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_57 [i_17])) ? (((/* implicit */int) arr_57 [i_17])) : (((/* implicit */int) arr_57 [i_17]))))));
        /* LoopNest 3 */
        for (unsigned int i_18 = 0; i_18 < 23; i_18 += 1) 
        {
            for (signed char i_19 = 2; i_19 < 22; i_19 += 4) 
            {
                for (unsigned int i_20 = 4; i_20 < 19; i_20 += 2) 
                {
                    {
                        var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (13204988210113450747ULL)))) ? (((/* implicit */unsigned long long int) arr_56 [i_20 - 2])) : (max((16664816729345740860ULL), (((/* implicit */unsigned long long int) arr_56 [i_20 + 4])))))))));
                        var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_63 [i_17] [i_18])) > (1383355421U))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_54 [i_19 - 1] [i_20 + 3])), ((unsigned short)16253))))) : (((((/* implicit */_Bool) arr_59 [i_19 - 1] [i_20 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)34))) : ((~(var_11))))))))));
                        var_42 = ((/* implicit */int) var_4);
                    }
                } 
            } 
        } 
    }
}
