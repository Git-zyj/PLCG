/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131997
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
    var_13 = ((/* implicit */long long int) (short)-1);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */short) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) (short)-27338))));
                        var_15 = ((/* implicit */signed char) (+(arr_0 [i_1])));
                        var_16 = ((/* implicit */short) ((((/* implicit */int) var_6)) % (((/* implicit */int) var_0))));
                    }
                } 
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0]);
        /* LoopSeq 3 */
        for (short i_4 = 2; i_4 < 19; i_4 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */_Bool) (((-(((/* implicit */int) var_0)))) & (((int) arr_8 [i_0]))));
            /* LoopSeq 3 */
            for (unsigned int i_5 = 2; i_5 < 20; i_5 += 3) /* same iter space */
            {
                arr_15 [i_0 + 1] [i_4 + 2] [i_5] [i_5] = ((/* implicit */long long int) (-(arr_14 [i_0 - 2] [i_5])));
                var_18 = ((/* implicit */unsigned short) ((var_7) - (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_4 + 1])))));
            }
            for (unsigned int i_6 = 2; i_6 < 20; i_6 += 3) /* same iter space */
            {
                var_19 -= ((/* implicit */signed char) ((arr_11 [i_6 - 2] [i_4 - 1]) != (arr_11 [i_6 - 2] [i_4 - 1])));
                var_20 = ((/* implicit */_Bool) var_11);
            }
            for (unsigned int i_7 = 2; i_7 < 20; i_7 += 3) /* same iter space */
            {
                arr_21 [i_0] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_4 [i_0 + 3] [i_4 + 1])) : (((/* implicit */int) arr_4 [i_0 + 3] [i_4 + 1]))));
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) arr_19 [i_7] [i_0] [i_7])) : (9223372036854775807LL)));
            }
        }
        for (short i_8 = 2; i_8 < 19; i_8 += 4) /* same iter space */
        {
            arr_25 [i_0] [(short)12] [i_0] = ((/* implicit */unsigned int) arr_7 [i_0 + 2]);
            var_22 = ((/* implicit */unsigned int) arr_0 [i_0 + 2]);
            var_23 = ((/* implicit */int) var_6);
        }
        for (short i_9 = 2; i_9 < 19; i_9 += 4) /* same iter space */
        {
            arr_29 [i_9 + 2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_0] [i_0] [i_0]))))) ? (((((/* implicit */int) arr_17 [i_0] [(unsigned char)8] [i_0])) / (((/* implicit */int) var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_0 + 2] [i_0 + 2])))))));
            var_24 = ((/* implicit */long long int) (!((_Bool)1)));
        }
    }
    for (unsigned int i_10 = 1; i_10 < 19; i_10 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_11 = 0; i_11 < 20; i_11 += 3) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    arr_40 [i_10] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)48))));
                    var_25 = (!(((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))))), (max((((/* implicit */long long int) (signed char)10)), ((-9223372036854775807LL - 1LL))))))));
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 17; i_13 += 1) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                arr_46 [i_10] [i_10] [i_11] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */signed char) min((((/* implicit */long long int) var_7)), (min((((/* implicit */long long int) ((var_12) ? (((/* implicit */int) arr_17 [i_10] [i_11] [i_10])) : (((/* implicit */int) (short)28002))))), (9223372036854775807LL)))));
                                arr_47 [i_10] [i_10] [i_10] [(_Bool)1] [i_10 - 1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((arr_23 [i_10] [i_13] [i_13]) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) >= (arr_34 [i_10 - 1] [i_13 + 2]))))) != (max((((/* implicit */long long int) (unsigned char)243)), (-9077801191936112673LL)))));
                                var_26 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) min((((((/* implicit */int) (unsigned char)248)) * (((/* implicit */int) (short)32765)))), (((var_12) ? (((/* implicit */int) (unsigned short)60769)) : (((/* implicit */int) (unsigned char)120))))))) - (min((((((/* implicit */_Bool) 4294967295U)) ? (var_7) : (arr_23 [i_14] [i_11] [11LL]))), (((/* implicit */unsigned int) arr_39 [i_13 + 1] [i_13 + 3] [i_14] [13]))))));
                                var_27 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_14])) ? (arr_19 [10LL] [10LL] [10LL]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)1792)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_13 - 1] [i_10 + 1] [i_10 + 1])) * ((+(((/* implicit */int) (short)-32765))))))) : (arr_6 [(_Bool)1] [i_13] [i_14])));
                                arr_48 [i_10] [i_10] [i_10] [i_11] [i_10] [i_10] [(signed char)13] = ((/* implicit */short) arr_20 [i_11] [i_10] [i_12]);
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_20 [11LL] [i_10] [i_10 + 1]))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_14 [i_10] [i_10])))) | (18102168041818979110ULL)))));
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)0));
        var_30 += ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_5 [i_10] [(unsigned short)9] [i_10])) : (((/* implicit */int) arr_17 [i_10] [i_10] [12]))))) ? (((/* implicit */int) arr_36 [i_10] [(_Bool)1] [i_10])) : (((/* implicit */int) arr_17 [i_10] [i_10] [20LL])))))));
        var_31 &= ((/* implicit */unsigned short) arr_1 [i_10]);
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        arr_53 [i_15] = ((/* implicit */unsigned short) (~(((((/* implicit */int) (short)-32758)) | (((/* implicit */int) arr_17 [i_15] [i_15] [18LL]))))));
        var_32 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)0)), (2147483648U)))), (arr_6 [i_15] [i_15] [i_15])));
        var_33 = ((/* implicit */unsigned short) arr_0 [14LL]);
        var_34 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */int) arr_27 [i_15])) % (((/* implicit */int) arr_4 [i_15] [i_15]))))) ? (arr_52 [(short)13]) : (((/* implicit */int) var_10))))));
    }
}
