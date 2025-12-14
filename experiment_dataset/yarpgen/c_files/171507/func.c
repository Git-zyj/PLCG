/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171507
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
    var_18 = (+(18014123631575040ULL));
    var_19 = ((/* implicit */long long int) max((((0ULL) >> (((var_7) - (2547415018U))))), (((/* implicit */unsigned long long int) ((_Bool) 9604728024158415165ULL)))));
    var_20 = ((/* implicit */unsigned int) (unsigned char)62);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (unsigned short)49152))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_0 [2] [i_0])) ? (6896743848126683739ULL) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_0 [6ULL] [i_0])), (0U))))))));
    }
    /* LoopSeq 4 */
    for (unsigned short i_1 = 1; i_1 < 24; i_1 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 25; i_2 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)73))));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    {
                        var_22 = ((/* implicit */short) (~(arr_4 [i_1 + 1])));
                        /* LoopSeq 4 */
                        for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) /* same iter space */
                        {
                            arr_19 [16ULL] [i_2] [21ULL] [i_3] [i_4] [(unsigned short)15] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_1 + 1]))));
                            arr_20 [i_1 + 1] [(short)6] [23LL] [22U] [(short)6] [i_2] = ((/* implicit */unsigned int) ((unsigned short) 11550000225582867874ULL));
                        }
                        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 3) /* same iter space */
                        {
                            arr_23 [i_2] = ((arr_22 [i_2] [i_2] [8U] [8U] [i_2] [i_4] [i_6]) >> (((/* implicit */int) arr_18 [i_2])));
                            arr_24 [i_2] = ((/* implicit */int) ((_Bool) var_10));
                            arr_25 [i_2] [i_6] = (~(arr_5 [i_1 + 1]));
                            var_23 = ((/* implicit */unsigned int) arr_11 [i_2]);
                        }
                        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 3) /* same iter space */
                        {
                            var_24 = (i_2 % 2 == 0) ? (((arr_13 [i_2] [i_1 + 1] [i_1 + 1]) >> (((arr_13 [i_2] [i_1 - 1] [i_1 - 1]) - (6914404271714171759ULL))))) : (((arr_13 [i_2] [i_1 + 1] [i_1 + 1]) >> (((((arr_13 [i_2] [i_1 - 1] [i_1 - 1]) - (6914404271714171759ULL))) - (13243194849269949855ULL)))));
                            arr_29 [i_1 + 1] [i_1 + 1] [i_3] [22] [i_3] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_4])) ? (((((/* implicit */_Bool) var_1)) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27454))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 25; i_8 += 3) /* same iter space */
                        {
                            var_25 ^= ((/* implicit */unsigned int) (+(arr_16 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1])));
                            arr_33 [i_1] [i_1] [i_2] [i_3] [i_3] [i_4] [i_1] = ((/* implicit */unsigned int) ((unsigned char) var_9));
                        }
                    }
                } 
            } 
            arr_34 [i_2] [i_2] [(unsigned char)22] = ((/* implicit */unsigned char) (!(arr_15 [i_2] [i_2] [i_2] [i_1] [i_1 + 1])));
            arr_35 [i_2] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(3602029328U)))) / ((~(arr_4 [i_1 - 1])))));
        }
        for (signed char i_9 = 0; i_9 < 25; i_9 += 1) /* same iter space */
        {
            arr_40 [i_9] = ((/* implicit */unsigned long long int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)73))))), ((signed char)0)));
            var_26 = ((/* implicit */unsigned char) (((-(0ULL))) >> ((((+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (4070944577U))))) - (4294967131U)))));
        }
        var_27 = ((((/* implicit */_Bool) (signed char)114)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (unsigned int i_10 = 3; i_10 < 21; i_10 += 3) 
    {
        var_28 = ((/* implicit */unsigned long long int) min((var_28), (36028797016866816ULL)));
        var_29 = ((/* implicit */_Bool) (unsigned char)0);
        arr_43 [i_10] = ((/* implicit */unsigned char) var_13);
        var_30 = ((/* implicit */unsigned int) ((((36028797016866816ULL) / (36028797016866816ULL))) >> (((240518168576ULL) - (240518168533ULL)))));
    }
    for (unsigned char i_11 = 3; i_11 < 24; i_11 += 4) 
    {
        var_31 = ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 469762048)))))))) ? (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))), (((17648793777262115895ULL) >> (((((/* implicit */int) (unsigned char)211)) - (203))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))));
        arr_48 [i_11] [i_11 - 3] = ((/* implicit */_Bool) ((max((((unsigned long long int) 2169997118U)), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_37 [i_11 - 3])) | (((/* implicit */int) arr_10 [18ULL] [10U]))))))) & ((~(((7530987158745630774ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [(unsigned char)22] [(unsigned char)22] [16ULL])))))))));
        var_32 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(arr_47 [17ULL])))) / (((unsigned long long int) (~(((/* implicit */int) arr_15 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1])))))));
    }
    for (unsigned long long int i_12 = 3; i_12 < 12; i_12 += 4) 
    {
        var_33 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (!(arr_18 [(unsigned char)14])))), (((((/* implicit */_Bool) 1625060426U)) ? (0U) : (arr_47 [i_12 - 1])))));
        var_34 = ((/* implicit */unsigned long long int) (_Bool)1);
        /* LoopSeq 1 */
        for (long long int i_13 = 1; i_13 < 13; i_13 += 3) 
        {
            arr_55 [i_13] [i_13] [i_13] = ((/* implicit */int) arr_13 [i_13] [i_13] [(signed char)4]);
            arr_56 [i_12] [i_13] = ((/* implicit */unsigned int) max(((+(((/* implicit */int) (_Bool)0)))), ((~(((/* implicit */int) arr_15 [i_13 + 2] [i_13 + 1] [i_13] [i_13 + 2] [i_13 - 1]))))));
            var_35 = ((/* implicit */unsigned int) max((max((arr_7 [i_12 - 3]), (((/* implicit */unsigned long long int) var_7)))), (arr_7 [i_12 + 3])));
        }
        var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (unsigned char)95)), (arr_39 [(_Bool)1] [i_12 - 2])))), (((15673130394252470748ULL) / (((/* implicit */unsigned long long int) arr_47 [20])))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)219)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (short)2518))))), (9U)))))))));
    }
}
