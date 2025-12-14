/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14412
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
    /* vectorizable */
    for (short i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (~(((/* implicit */int) var_7)))))));
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 11318025412250692818ULL)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 3]))))))));
        /* LoopSeq 4 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            var_16 = ((/* implicit */long long int) arr_1 [i_0 - 2]);
            arr_6 [i_0] [i_1] [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0 - 3] [i_0 - 1])) ? (((((/* implicit */_Bool) arr_4 [(unsigned char)9] [i_1])) ? (arr_1 [i_1]) : (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
        }
        for (unsigned char i_2 = 2; i_2 < 9; i_2 += 1) 
        {
            var_17 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2 - 1])) ? (-5118401102033024532LL) : (((/* implicit */long long int) arr_7 [i_0] [i_0 - 3]))));
            arr_9 [(signed char)0] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_0 - 2])) * (((/* implicit */int) (unsigned char)65))));
            var_18 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_3 [i_2 - 1])) + (2147483647))) >> (((((/* implicit */int) (unsigned short)20860)) - (20844)))));
        }
        for (unsigned int i_3 = 1; i_3 < 9; i_3 += 3) 
        {
            var_19 = ((/* implicit */short) (!((!(((/* implicit */_Bool) (short)-13052))))));
            /* LoopSeq 2 */
            for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                var_20 = ((/* implicit */signed char) arr_2 [i_3 + 1] [i_0 - 3]);
                arr_15 [i_3] [i_3] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_0]))));
            }
            for (unsigned long long int i_5 = 2; i_5 < 9; i_5 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_6 = 2; i_6 < 9; i_6 += 1) 
                {
                    for (long long int i_7 = 1; i_7 < 7; i_7 += 2) 
                    {
                        {
                            var_21 = ((signed char) -1921430930887395430LL);
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [i_0] [i_0 - 2])) : (-876293163)))) - (((arr_13 [3ULL] [i_3 - 1] [i_0]) - (0U)))));
                            arr_24 [i_0 - 1] [i_3] [i_5] [i_5] [i_3] [i_6 + 1] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)100)) ? (((/* implicit */int) (short)18507)) : (((/* implicit */int) arr_22 [i_7 + 2] [i_7] [i_3] [i_7 + 3] [i_7] [i_7]))));
                            var_23 = ((/* implicit */unsigned char) 3360519737U);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 10; i_8 += 3) 
                {
                    for (long long int i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        {
                            arr_30 [i_3] [i_3] [i_3 + 1] [i_3 + 1] [i_3] = ((/* implicit */unsigned int) (-(arr_11 [i_0 - 3])));
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (unsigned short)20991))));
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 9223372036854775803LL)) | (arr_11 [i_5]))))));
                        }
                    } 
                } 
                arr_31 [(unsigned short)0] [i_3] |= ((/* implicit */unsigned short) var_8);
            }
            arr_32 [i_3] [i_3] = ((/* implicit */unsigned long long int) (short)-11508);
        }
        for (long long int i_10 = 0; i_10 < 10; i_10 += 4) 
        {
            arr_35 [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_34 [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16067))) : (12523828356300245930ULL)));
            var_26 = 3208296223016503516LL;
        }
        var_27 |= ((/* implicit */long long int) var_3);
    }
    for (short i_11 = 0; i_11 < 19; i_11 += 3) 
    {
        arr_38 [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_13)), (1046117693U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_37 [i_11])))))))) : (((/* implicit */int) (unsigned short)25630))));
        var_28 = ((/* implicit */long long int) min((var_28), (min((((((/* implicit */_Bool) 8738112932427269228LL)) ? (((((/* implicit */_Bool) var_3)) ? (-8738112932427269228LL) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_11] [i_11]))))) : (max((((/* implicit */long long int) var_1)), (5922012627920229902LL))))), (((/* implicit */long long int) min((0U), (2651574282U))))))));
        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) (short)-13052))));
    }
    /* vectorizable */
    for (signed char i_12 = 4; i_12 < 24; i_12 += 1) 
    {
        arr_42 [12U] [i_12] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) (unsigned short)6127)) ? (6212653724402051289ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_12]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_13 = 1; i_13 < 24; i_13 += 3) 
        {
            for (signed char i_14 = 0; i_14 < 25; i_14 += 1) 
            {
                {
                    arr_48 [i_12] [3LL] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_44 [i_12 - 4] [i_12 - 4] [i_13 - 1])) ? (((/* implicit */int) arr_45 [i_12 - 3] [i_13 + 1])) : (((/* implicit */int) arr_45 [i_12 + 1] [i_13 + 1]))));
                    var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) var_0))));
                }
            } 
        } 
    }
    for (long long int i_15 = 2; i_15 < 20; i_15 += 2) 
    {
        arr_51 [i_15] = ((/* implicit */unsigned int) arr_41 [i_15]);
        /* LoopNest 2 */
        for (unsigned int i_16 = 2; i_16 < 22; i_16 += 4) 
        {
            for (long long int i_17 = 0; i_17 < 23; i_17 += 1) 
            {
                {
                    arr_58 [i_15] [i_15 + 2] = ((/* implicit */unsigned short) ((7557493610256708859ULL) <= (((/* implicit */unsigned long long int) arr_49 [i_15] [i_15]))));
                    arr_59 [i_15] [i_15] = ((/* implicit */long long int) 11099992667648637190ULL);
                }
            } 
        } 
    }
    var_31 = ((/* implicit */unsigned int) min((var_5), (((/* implicit */unsigned short) (unsigned char)118))));
    var_32 -= ((/* implicit */short) var_2);
    /* LoopSeq 1 */
    for (unsigned long long int i_18 = 0; i_18 < 13; i_18 += 1) 
    {
        var_33 = ((((/* implicit */_Bool) (signed char)25)) ? (-3815115152919013765LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-84))));
        var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) var_10))));
        /* LoopNest 2 */
        for (unsigned int i_19 = 1; i_19 < 11; i_19 += 3) 
        {
            for (unsigned int i_20 = 1; i_20 < 10; i_20 += 1) 
            {
                {
                    var_35 = ((((/* implicit */_Bool) (short)-13052)) ? ((-(((/* implicit */int) (unsigned short)32390)))) : (((/* implicit */int) (unsigned short)48379)));
                    arr_68 [i_18] [i_18] [(unsigned short)6] |= ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1870688816U)) ? (((/* implicit */int) (unsigned short)24247)) : (((/* implicit */int) (signed char)43))))) ? (((/* implicit */int) min((var_13), ((short)6858)))) : (((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)-76))))))), (max((((/* implicit */long long int) max((var_6), (((/* implicit */short) var_0))))), (((((/* implicit */_Bool) (short)19702)) ? (-2941738746343292857LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-32317)))))))));
                }
            } 
        } 
        var_36 = ((/* implicit */short) (signed char)97);
    }
}
