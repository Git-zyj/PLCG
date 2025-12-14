/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108405
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2173470633U)) ? (var_10) : (var_12)));
    var_15 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) 2121932036)) ? (((/* implicit */int) (unsigned short)28175)) : (((/* implicit */int) (unsigned short)48488)))), ((((+(((/* implicit */int) var_8)))) * (((/* implicit */int) var_9))))));
    var_16 = ((/* implicit */signed char) max((var_16), (var_6)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        arr_3 [i_0] &= ((/* implicit */unsigned short) var_2);
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                /* LoopSeq 3 */
                for (signed char i_3 = 1; i_3 < 19; i_3 += 4) 
                {
                    arr_11 [10LL] [i_2] = (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)28175))))));
                    var_17 = ((/* implicit */long long int) (signed char)-13);
                    var_18 += ((/* implicit */unsigned short) var_3);
                    var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_13) ? (((/* implicit */int) var_5)) : (var_3))))));
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((arr_7 [i_1]) < (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) (unsigned char)178)))))))));
                }
                for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    var_21 = ((/* implicit */signed char) var_9);
                    var_22 = ((/* implicit */signed char) ((((/* implicit */int) var_13)) * (((/* implicit */int) (signed char)-37))));
                    var_23 = ((/* implicit */unsigned char) ((var_0) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_0))) - (-8876494283611858172LL))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 3; i_5 < 21; i_5 += 1) 
                    {
                        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_0] [(short)10] [i_4])) / (((/* implicit */int) ((unsigned char) (signed char)5))))))));
                        arr_16 [i_4] [(short)10] [i_5] [i_4] [i_5] [i_1] [i_0] = var_6;
                    }
                    for (unsigned short i_6 = 4; i_6 < 20; i_6 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -8876494283611858172LL)) ? (((/* implicit */int) (short)-32746)) : (((/* implicit */int) (signed char)-67)))))));
                        var_26 ^= (-(((/* implicit */int) arr_6 [i_0] [i_1] [i_4])));
                    }
                }
                for (int i_7 = 2; i_7 < 21; i_7 += 4) 
                {
                    var_27 += ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_11)) ? (arr_7 [i_7 + 1]) : (((/* implicit */int) var_13))))));
                    arr_22 [14] [i_1] [i_1] [(unsigned char)0] [i_1] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_17 [i_7 - 2] [i_7] [i_7 - 1] [(_Bool)1] [i_7 - 2]))));
                    arr_23 [i_0] [i_1] [i_2] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_10 [i_1] [i_7 - 1] [i_7 - 2] [i_7] [i_7] [i_7]))));
                    arr_24 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_6 [i_0] [i_1] [i_2]) ? (var_3) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_2]))));
                }
                var_28 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_11)) ? (arr_10 [i_1] [21ULL] [i_2] [i_0] [i_0] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) arr_17 [i_0] [i_0] [i_1] [i_2] [i_2]))));
                var_30 = ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
                var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((unsigned char) var_7)))));
            }
            for (int i_8 = 1; i_8 < 18; i_8 += 3) 
            {
                /* LoopSeq 2 */
                for (int i_9 = 0; i_9 < 22; i_9 += 1) /* same iter space */
                {
                    var_32 = ((/* implicit */_Bool) var_1);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_10 = 4; i_10 < 20; i_10 += 2) 
                    {
                        arr_33 [i_0] [i_8 + 3] [i_8] [i_10] = ((/* implicit */unsigned long long int) ((var_0) ? (var_3) : (((/* implicit */int) arr_15 [i_10 - 3] [i_1] [21] [i_8 + 1] [i_8]))));
                        arr_34 [i_8] [i_1] [i_1] [i_1] [i_10] [i_1] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_4)))) + (var_2)));
                        var_33 *= ((/* implicit */unsigned int) arr_18 [i_8 + 1] [i_10]);
                    }
                    for (unsigned short i_11 = 4; i_11 < 18; i_11 += 4) 
                    {
                        var_34 = ((/* implicit */int) var_13);
                        var_35 = ((/* implicit */signed char) arr_9 [i_11] [i_9] [i_8] [i_1] [i_0]);
                    }
                }
                for (int i_12 = 0; i_12 < 22; i_12 += 1) /* same iter space */
                {
                    arr_41 [i_0] [i_1] [i_8 + 4] [i_8] = ((/* implicit */unsigned long long int) arr_36 [i_0] [i_8] [i_0] [i_0] [i_0] [(unsigned short)2] [14ULL]);
                    var_36 = (signed char)-4;
                    var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_8 - 1] [i_12] [i_8])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))) ? (((var_3) + (var_10))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_26 [i_0] [i_8] [(short)11])) : (((/* implicit */int) arr_4 [i_8 + 3] [i_1] [i_0])))))))));
                }
                var_38 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_14 [i_8 + 1] [0] [i_8 + 1] [0] [i_8]))));
            }
            var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) arr_18 [i_0] [2U]))));
            var_40 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((short) var_4))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
            var_41 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_11))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_13 = 3; i_13 < 19; i_13 += 2) 
        {
            var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_13 + 1] [i_13 - 1] [21ULL] [i_13] [i_13 + 2])) ? ((-(((/* implicit */int) arr_43 [i_0] [i_13] [i_0])))) : ((+(((/* implicit */int) var_0))))));
            arr_44 [i_0] [(unsigned char)21] [i_13] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-67)) : (((/* implicit */int) var_11)))) != (((/* implicit */int) var_11))));
            var_43 |= ((/* implicit */unsigned short) ((((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_5)) - (57363))))) / (((((/* implicit */int) arr_15 [i_0] [(short)6] [i_0] [i_0] [(unsigned short)8])) ^ (((/* implicit */int) arr_18 [i_0] [(unsigned short)10]))))));
        }
    }
    /* LoopSeq 2 */
    for (short i_14 = 1; i_14 < 16; i_14 += 4) 
    {
        var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6)))))));
        var_45 *= ((/* implicit */unsigned char) arr_19 [i_14 + 3] [(unsigned short)20] [i_14] [i_14 - 1] [i_14] [i_14 + 2] [i_14]);
    }
    for (int i_15 = 0; i_15 < 24; i_15 += 3) 
    {
        arr_49 [(short)16] &= ((((/* implicit */_Bool) var_7)) ? (max((((/* implicit */unsigned long long int) ((unsigned short) var_12))), (max((arr_48 [i_15]), (arr_48 [i_15]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)28187), (((/* implicit */unsigned short) (signed char)0)))))));
        arr_50 [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)12)) + (((/* implicit */int) (signed char)-82))));
    }
}
