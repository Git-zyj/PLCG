/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146287
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
    var_13 = ((/* implicit */signed char) (((-(((((/* implicit */_Bool) var_11)) ? (-7297556518449454684LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))) / (((/* implicit */long long int) ((/* implicit */int) var_5)))));
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) -7297556518449454684LL))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)91))))) : (max((var_10), (((/* implicit */unsigned int) (unsigned short)32050))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((0U), (((/* implicit */unsigned int) (signed char)115)))))))) : (((/* implicit */int) (signed char)91))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (-5001096247641267521LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)124)))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)122)) % (((/* implicit */int) var_0))))) : (arr_0 [(unsigned char)13])));
        arr_2 [i_0] = ((/* implicit */int) var_5);
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                for (int i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    {
                        arr_13 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) ((unsigned long long int) max((arr_8 [i_1] [i_4]), (((/* implicit */unsigned short) arr_12 [10U] [i_2] [i_2] [10U])))));
                        var_16 += ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)217)) ? (1152921504606846975LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46605)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -1152921504606846989LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_7 [(unsigned char)22] [(unsigned char)22])))) : ((-(-1152921504606846968LL))))))));
                    }
                } 
            } 
        } 
        arr_14 [7ULL] [(unsigned char)9] = ((/* implicit */int) arr_3 [i_1]);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_5 = 2; i_5 < 21; i_5 += 3) 
        {
            var_17 = ((/* implicit */unsigned int) (signed char)-100);
            var_18 = ((/* implicit */unsigned char) var_6);
        }
        /* vectorizable */
        for (int i_6 = 2; i_6 < 22; i_6 += 3) 
        {
            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((unsigned short) 1426280288)))));
            /* LoopSeq 2 */
            for (int i_7 = 0; i_7 < 23; i_7 += 3) 
            {
                arr_22 [i_7] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)182)) && (((/* implicit */_Bool) arr_7 [i_7] [i_6 + 1]))))) : (((((/* implicit */_Bool) (unsigned char)131)) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (-1426280289)))));
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 23; i_8 += 3) 
                {
                    for (unsigned int i_9 = 4; i_9 < 19; i_9 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) -9223372036854775803LL);
                            arr_29 [2U] [i_6] [i_6] [i_6] [i_9 - 3] [i_7] [i_6] = ((/* implicit */unsigned int) var_9);
                        }
                    } 
                } 
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_33 [i_1] [i_10] [(unsigned char)9] = ((/* implicit */unsigned long long int) ((unsigned short) arr_7 [i_6 - 2] [i_6 - 2]));
                var_21 = (+(3718523146U));
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 23; i_11 += 3) 
                {
                    for (short i_12 = 0; i_12 < 23; i_12 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */short) ((0ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1984)))));
                            arr_41 [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)10718)) / (((/* implicit */int) arr_26 [i_12] [i_6] [i_6 + 1] [i_11] [i_6 + 1]))));
                        }
                    } 
                } 
            }
            var_23 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)73))) ? (((/* implicit */int) (unsigned short)34470)) : ((-(((/* implicit */int) (unsigned short)54792))))));
        }
        var_24 = ((/* implicit */unsigned char) ((unsigned int) max((((((/* implicit */_Bool) 33554431LL)) ? (33554431LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)116))))), (((/* implicit */long long int) (unsigned char)110)))));
    }
    /* LoopSeq 3 */
    for (signed char i_13 = 0; i_13 < 23; i_13 += 3) /* same iter space */
    {
        var_25 = 389279954U;
        arr_45 [i_13] = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned int) (unsigned char)137)), (var_3)))));
        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)143)) ? (((/* implicit */int) (unsigned short)23132)) : (((/* implicit */int) (unsigned short)127))));
    }
    for (signed char i_14 = 0; i_14 < 23; i_14 += 3) /* same iter space */
    {
        var_27 = ((/* implicit */signed char) ((int) 9222246136947933184ULL));
        /* LoopSeq 1 */
        for (unsigned short i_15 = 0; i_15 < 23; i_15 += 3) 
        {
            var_28 += ((/* implicit */short) ((unsigned long long int) (-(max((var_6), (((/* implicit */long long int) -1881265956)))))));
            /* LoopNest 3 */
            for (short i_16 = 1; i_16 < 21; i_16 += 3) 
            {
                for (unsigned long long int i_17 = 0; i_17 < 23; i_17 += 3) 
                {
                    for (int i_18 = 0; i_18 < 23; i_18 += 3) 
                    {
                        {
                            var_29 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_16 + 2] [i_16 + 1] [i_16 + 1] [i_16 + 1] [(short)1] [3ULL])) ? (4611686018427387903LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)7168)) ? (17ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))))) ? ((-((+(((/* implicit */int) var_11)))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((int) 17ULL))) && (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))))))));
                            var_31 = ((/* implicit */unsigned char) (signed char)56);
                        }
                    } 
                } 
            } 
            var_32 = ((/* implicit */unsigned int) var_9);
        }
    }
    /* vectorizable */
    for (signed char i_19 = 0; i_19 < 23; i_19 += 3) /* same iter space */
    {
        arr_66 [i_19] = ((/* implicit */_Bool) ((((/* implicit */int) var_0)) >> ((~(((/* implicit */int) (signed char)-1))))));
        var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-25)) ? (((/* implicit */int) (unsigned short)10743)) : (((/* implicit */int) (unsigned char)255))));
    }
    var_34 |= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(17ULL)))) ? (var_6) : (((/* implicit */long long int) var_3))))), (var_12)));
}
