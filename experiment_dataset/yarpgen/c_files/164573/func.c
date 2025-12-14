/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164573
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
    var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((-3834360086504535778LL), (-3834360086504535778LL)))) ? (((18446744073709551615ULL) << (((((/* implicit */int) (unsigned short)60271)) - (60270))))) : (max((var_15), (((/* implicit */unsigned long long int) 1824419717U))))))) ? (((/* implicit */int) var_16)) : (var_13)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) (unsigned short)384);
        var_20 += ((/* implicit */unsigned int) arr_3 [i_0]);
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_0] [i_0] &= ((/* implicit */long long int) var_11);
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (2097152U) : (arr_2 [i_0] [i_1])));
            arr_8 [i_0] = ((9866140664700213095ULL) * (((/* implicit */unsigned long long int) arr_1 [i_1])));
        }
        for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            arr_12 [i_0] = ((((/* implicit */_Bool) (~(-3834360086504535776LL)))) ? (((/* implicit */long long int) arr_2 [i_0] [i_2])) : (arr_1 [i_0]));
            arr_13 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_2])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))));
        }
        for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            arr_17 [i_0] [i_3] [i_3] |= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_3 [(signed char)11])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)114))) : (3834360086504535778LL)))));
            /* LoopSeq 2 */
            for (long long int i_4 = 0; i_4 < 18; i_4 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_22 = (~(((/* implicit */int) arr_15 [i_4] [8LL])));
                    arr_24 [i_0] [i_0] |= ((/* implicit */unsigned int) var_14);
                }
                arr_25 [(unsigned char)4] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65162))) : (arr_6 [i_0] [i_3] [i_0])))));
                arr_26 [(unsigned char)6] [i_3] [i_3] = ((/* implicit */_Bool) arr_11 [i_0] [i_3]);
                arr_27 [(unsigned char)1] [3LL] [i_3] [3LL] = ((/* implicit */long long int) ((signed char) (signed char)-100));
            }
            for (long long int i_6 = 0; i_6 < 18; i_6 += 1) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4313873163621435922ULL)) ? (arr_28 [i_6]) : (((/* implicit */long long int) arr_2 [i_0] [i_0]))));
                var_24 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0])) / (((/* implicit */int) (unsigned short)52633))));
                arr_30 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) 8191U)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            }
        }
        for (short i_7 = 0; i_7 < 18; i_7 += 3) 
        {
            arr_33 [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */int) arr_15 [i_0] [(signed char)0])) << (((arr_2 [i_0] [i_0]) - (607918362U))))) : (arr_29 [i_0])));
            /* LoopNest 2 */
            for (long long int i_8 = 2; i_8 < 17; i_8 += 4) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_25 = ((/* implicit */long long int) ((((/* implicit */int) arr_31 [i_8 - 1] [i_7] [i_7])) > (((/* implicit */int) arr_36 [i_8 - 1] [i_7] [i_8] [i_9]))));
                        var_26 = (unsigned char)91;
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 8580603409009338521ULL)) ? (((/* implicit */int) var_9)) : (arr_38 [i_7])));
                        /* LoopSeq 1 */
                        for (short i_10 = 1; i_10 < 15; i_10 += 4) 
                        {
                            arr_43 [i_0] [i_7] [i_0] [(unsigned short)0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((((/* implicit */_Bool) (short)5242)) ? (((/* implicit */unsigned long long int) arr_21 [i_0] [i_7] [i_8] [i_8 + 1] [i_9] [i_10])) : (var_15))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)252)) || (((/* implicit */_Bool) -3834360086504535778LL))))))));
                            var_28 ^= ((/* implicit */_Bool) ((((-7505162355396823466LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)114))))) ? (((/* implicit */int) arr_15 [i_8 + 1] [i_10 + 2])) : (((((/* implicit */_Bool) arr_40 [i_0])) ? (-681176817) : (((/* implicit */int) (unsigned short)65151))))));
                            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1803552271)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_8]))) : (4508938851242453858ULL)))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_37 [(signed char)7] [(_Bool)1] [i_8] [i_9] [i_7])))))));
                            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) var_1))));
                        }
                    }
                } 
            } 
            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((arr_23 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551604ULL)) ? (((/* implicit */int) arr_16 [i_0])) : (((/* implicit */int) (unsigned short)384))))) : (((unsigned int) -1LL)))))));
        }
    }
    /* vectorizable */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_12 = 3; i_12 < 17; i_12 += 1) 
        {
            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1LL)) ? (2305843000623759360ULL) : (((/* implicit */unsigned long long int) 681176817))));
            arr_48 [i_11] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((1023) <= (((/* implicit */int) (unsigned short)54099))));
            arr_49 [i_11] [i_11] [i_11] = ((/* implicit */unsigned long long int) var_5);
        }
        var_33 = ((/* implicit */signed char) 1690969062);
        arr_50 [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) (short)21095)) ? (((/* implicit */int) arr_4 [i_11] [i_11] [i_11])) : (((((/* implicit */_Bool) 2305084323U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)97))))));
        var_34 = ((/* implicit */long long int) ((arr_22 [i_11] [i_11] [i_11]) ? (((/* implicit */int) (unsigned short)65151)) : (((/* implicit */int) arr_22 [i_11] [i_11] [i_11]))));
    }
    /* vectorizable */
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
    {
        var_35 = ((/* implicit */unsigned short) ((arr_41 [(_Bool)1] [i_13] [i_13] [i_13] [(unsigned char)11] [i_13] [i_13]) << (((arr_38 [6U]) + (571023521)))));
        arr_54 [(_Bool)1] [i_13] = ((/* implicit */unsigned int) arr_6 [i_13] [i_13] [i_13]);
    }
    var_36 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((var_4), (((/* implicit */int) var_8))))) ? (((/* implicit */int) ((_Bool) (short)19011))) : (((/* implicit */int) var_1)))), (((((((/* implicit */_Bool) 6049584749933855470LL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_16)))) >> (((/* implicit */int) (_Bool)1))))));
    var_37 = ((/* implicit */long long int) (+((~(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (1834595495U)))))));
}
