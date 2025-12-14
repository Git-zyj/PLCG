/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122057
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
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((long long int) max((((/* implicit */int) var_7)), (310590900))))))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((int) arr_1 [(signed char)6])))));
        var_14 ^= ((/* implicit */unsigned short) min((((/* implicit */long long int) (~(((((/* implicit */int) arr_0 [i_0] [i_0])) - (((/* implicit */int) (unsigned short)3871))))))), (((((((/* implicit */_Bool) (unsigned short)3867)) ? (((/* implicit */long long int) 1279934851U)) : (var_2))) - (((/* implicit */long long int) max((var_6), (arr_1 [(unsigned short)4]))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
    {
        var_15 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) var_11))) ? (((((/* implicit */_Bool) (unsigned short)3860)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
        arr_5 [i_1] |= ((/* implicit */unsigned int) ((5624747636990285628LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
        arr_6 [i_1] = ((/* implicit */unsigned char) (-((-(3015032462U)))));
        arr_7 [i_1] = ((/* implicit */long long int) ((int) (-(((/* implicit */int) var_0)))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_2)))) - ((+(arr_2 [i_2])))))) ? ((~(min((arr_2 [i_2]), (var_9))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_10 [i_2])))) ? (((((/* implicit */_Bool) arr_0 [2LL] [5U])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)61681)))) : (((/* implicit */int) min(((unsigned char)7), ((unsigned char)252))))))))))));
        var_17 = ((/* implicit */unsigned char) (~(((((1279934872U) - (((/* implicit */unsigned int) -967469511)))) - (((/* implicit */unsigned int) max((((/* implicit */int) var_5)), (220349862))))))));
        arr_11 [i_2] |= ((/* implicit */long long int) (-(((arr_10 [i_2]) - (((/* implicit */unsigned int) ((/* implicit */int) max((var_0), (((/* implicit */signed char) (_Bool)1))))))))));
    }
    var_18 = ((/* implicit */long long int) max((var_18), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)231))) - (((-406309742848644955LL) - (((/* implicit */long long int) ((int) var_4)))))))));
    /* LoopSeq 1 */
    for (int i_3 = 0; i_3 < 15; i_3 += 4) 
    {
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) arr_15 [i_3] [i_3]))));
        var_20 ^= ((/* implicit */unsigned short) var_3);
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_4 = 1; i_4 < 13; i_4 += 4) 
        {
            arr_18 [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_16 [i_4 + 2] [i_4 + 1]))));
            var_21 += ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) var_9)) - (arr_17 [i_3]))));
            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) 3296157361U)) : (((arr_15 [i_3] [i_3]) - (arr_17 [i_3]))))))));
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 15; i_5 += 3) 
            {
                arr_21 [i_3] [i_5] [i_3] = ((signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_16 [8ULL] [i_4 + 1])) : (((/* implicit */int) arr_13 [i_5]))));
                /* LoopSeq 2 */
                for (long long int i_6 = 4; i_6 < 13; i_6 += 4) /* same iter space */
                {
                    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) var_11))));
                    var_24 *= ((/* implicit */unsigned int) (unsigned short)61664);
                    /* LoopSeq 3 */
                    for (int i_7 = 0; i_7 < 15; i_7 += 2) /* same iter space */
                    {
                        var_25 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) - (((((/* implicit */_Bool) 1279934829U)) ? (17697404183250471000ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_3] [i_3])))))));
                        arr_28 [i_5] [i_4] [i_5] [2ULL] [i_4] = ((/* implicit */unsigned char) 3015032429U);
                    }
                    for (int i_8 = 0; i_8 < 15; i_8 += 2) /* same iter space */
                    {
                        var_26 = ((((/* implicit */_Bool) var_11)) ? (arr_17 [i_4 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))));
                        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_8))))))))));
                        var_28 = ((/* implicit */signed char) (unsigned char)255);
                        arr_31 [i_3] [i_3] [i_5] [i_3] [i_5] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_13 [i_3]))));
                    }
                    for (int i_9 = 0; i_9 < 15; i_9 += 4) 
                    {
                        var_29 ^= ((/* implicit */unsigned long long int) arr_32 [4U] [i_4 + 2] [i_6 + 1] [i_9]);
                        arr_35 [i_3] [i_4] [i_9] [i_6] [i_9] &= ((/* implicit */short) (unsigned short)61657);
                        arr_36 [i_4] [i_6 + 1] [i_5] = arr_14 [13];
                        arr_37 [i_5] [2U] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) var_6)) - (((unsigned int) var_4))));
                        arr_38 [i_5] [i_6] [i_9] = ((/* implicit */unsigned long long int) ((signed char) 1624179835));
                    }
                }
                for (long long int i_10 = 4; i_10 < 13; i_10 += 4) /* same iter space */
                {
                    arr_41 [i_3] [i_4 + 2] [0U] [i_5] [i_4 + 2] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_3] [i_4] [i_5] [i_3] [10U] [i_10])) ? (var_9) : (var_9)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-33)) - (((/* implicit */int) (unsigned char)12))))) : (var_10)));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 4) 
                    {
                        var_30 += ((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_3] [i_3])) - (((((/* implicit */int) arr_25 [i_3] [i_4] [i_5] [i_10 - 4] [i_11])) - (((/* implicit */int) var_0))))));
                        var_31 = ((/* implicit */unsigned int) (+(-308013423)));
                        arr_46 [1ULL] [i_10] [i_10] [i_10] [i_5] [i_10 + 2] = ((/* implicit */int) var_2);
                    }
                    var_32 ^= ((/* implicit */long long int) var_11);
                }
                var_33 += ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (-510005204)))) ? ((-(((/* implicit */int) arr_24 [i_3] [i_3] [i_4 - 1] [i_3] [i_5] [i_5])))) : (((/* implicit */int) (signed char)-118)));
                arr_47 [i_3] [i_4 + 2] [i_4 + 2] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 7030723054379279829LL)) ? (((/* implicit */int) (unsigned short)31289)) : (((/* implicit */int) var_8)))))));
            }
            var_34 = ((/* implicit */unsigned int) (((~(((/* implicit */int) var_7)))) - ((-(((/* implicit */int) (unsigned short)34246))))));
        }
    }
    var_35 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3015032467U)) ? (9963664445152959472ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-36)))));
}
