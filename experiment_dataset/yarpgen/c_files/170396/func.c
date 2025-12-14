/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170396
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_6 [2ULL] |= ((/* implicit */unsigned long long int) arr_2 [10ULL] [i_1 + 1] [i_2]);
                    arr_7 [i_0 - 1] [i_1] [i_1] [i_2 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((-1789821124) / (((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))))) : (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 0LL)) : (arr_5 [i_2 + 1] [i_1 - 1] [i_0 + 1]))), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0 - 1]))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_10))))))));
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) var_4))));
    /* LoopSeq 1 */
    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((1996172388225228907ULL), (((/* implicit */unsigned long long int) (unsigned char)3))))))))));
        /* LoopNest 3 */
        for (unsigned int i_4 = 2; i_4 < 14; i_4 += 3) 
        {
            for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) 
            {
                for (short i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    {
                        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (((-(((/* implicit */int) (unsigned char)2)))) & (((/* implicit */int) arr_13 [i_4 - 1] [i_4])))))));
                        arr_20 [i_3] = ((/* implicit */long long int) ((min((min((4294967285U), (((/* implicit */unsigned int) (unsigned short)65535)))), (((/* implicit */unsigned int) ((unsigned short) (unsigned short)15))))) | (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                    }
                } 
            } 
        } 
        arr_21 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_3] [i_3] [i_3]))))) ? (((((/* implicit */_Bool) arr_2 [i_3] [i_3] [i_3])) ? (arr_3 [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_5 [i_3] [i_3] [i_3]))))))) || (((/* implicit */_Bool) (+(4294967295U))))));
        /* LoopSeq 1 */
        for (unsigned int i_7 = 1; i_7 < 14; i_7 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned short i_8 = 2; i_8 < 14; i_8 += 1) 
            {
                for (unsigned short i_9 = 0; i_9 < 15; i_9 += 1) 
                {
                    for (unsigned int i_10 = 0; i_10 < 15; i_10 += 1) 
                    {
                        {
                            arr_34 [i_9] [i_3] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_26 [i_3] [i_3] [i_3]))));
                            var_19 = ((/* implicit */unsigned long long int) arr_8 [i_3] [i_3]);
                            arr_35 [i_3] [i_3] [i_10] = ((/* implicit */unsigned int) ((long long int) ((short) min((((/* implicit */long long int) var_13)), (arr_15 [i_3] [i_7 - 1] [i_9] [i_10])))));
                            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_22 [i_3] [i_3])) : (-19))), (((int) (short)0))))) ? (((arr_33 [i_3] [i_3] [i_8 - 1] [i_9] [i_10]) / (((/* implicit */int) var_10)))) : (((/* implicit */int) ((unsigned short) arr_13 [i_7 - 1] [i_8 + 1])))));
                            arr_36 [i_3] [i_3] [(unsigned short)10] [i_3] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) || (var_11)))), ((unsigned short)44396))))));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */unsigned long long int) ((int) -862827500));
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_3] [i_3] [i_7 - 1] [i_7 - 1] [i_7] [(unsigned char)6])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) (unsigned short)33416))))), (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3] [i_7]))) : (0LL))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_11 = 1; i_11 < 14; i_11 += 3) 
            {
                arr_41 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)27060)) % (((/* implicit */int) arr_28 [i_7 + 1] [i_7 - 1] [i_7 + 1]))));
                /* LoopSeq 2 */
                for (unsigned int i_12 = 0; i_12 < 15; i_12 += 3) 
                {
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)2)) / (((/* implicit */int) arr_29 [i_11 - 1] [i_11] [i_11 - 1] [i_11 + 1] [i_11]))));
                    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (~(arr_25 [i_11 - 1] [i_7]))))));
                    arr_45 [i_3] [i_12] [i_11] [i_7 - 1] [i_7 - 1] [i_3] = ((/* implicit */unsigned int) var_4);
                }
                for (unsigned short i_13 = 0; i_13 < 15; i_13 += 1) 
                {
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -862827500)) ? (((/* implicit */int) ((unsigned short) var_8))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_3] [i_7] [i_11] [i_13])))))));
                    arr_49 [i_3] [i_7 - 1] [i_11] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4240018464526880398LL)) ? (((/* implicit */int) (unsigned short)65509)) : (((/* implicit */int) arr_42 [i_13]))));
                }
            }
        }
    }
    /* LoopSeq 1 */
    for (unsigned short i_14 = 1; i_14 < 7; i_14 += 3) 
    {
        arr_52 [i_14] [i_14 + 3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_32 [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_32 [i_14]))) - (((/* implicit */long long int) ((unsigned int) (unsigned short)39055)))));
        /* LoopSeq 1 */
        for (unsigned char i_15 = 3; i_15 < 8; i_15 += 3) 
        {
            var_26 = min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (unsigned short)33942)))) ? (((/* implicit */int) min(((unsigned short)65535), ((unsigned short)65520)))) : (((int) arr_17 [i_14 - 1] [i_15 + 1] [i_15] [i_14] [i_15]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_47 [i_14] [i_14] [i_14] [i_14 - 1] [i_14 + 1]) : (-3452438151985043095LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (min((18446744073709551608ULL), (((/* implicit */unsigned long long int) var_12)))))));
            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 881254416U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3669874436U))))));
            var_28 |= ((/* implicit */long long int) 625092856U);
            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) min((((arr_8 [i_14] [i_14 + 3]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24))))), (min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (4294967295U)))), (((((/* implicit */long long int) 3702931350U)) ^ (arr_16 [i_14] [12ULL] [i_15 - 3]))))))))));
        }
        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_33 [i_14 - 1] [i_14] [i_14] [i_14] [i_14])))) ? (((-3452438151985043095LL) / (((/* implicit */long long int) arr_33 [i_14] [i_14] [i_14] [i_14] [i_14 - 1])))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_6))))));
    }
}
