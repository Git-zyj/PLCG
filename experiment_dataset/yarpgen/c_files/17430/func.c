/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17430
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
    var_17 -= ((/* implicit */signed char) (((~(((unsigned long long int) (unsigned char)84)))) >> (((((((/* implicit */unsigned long long int) -6140590163850394562LL)) + (0ULL))) - (12306153909859157007ULL)))));
    var_18 = ((/* implicit */signed char) -3625761135324259706LL);
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_19 -= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) + (18446744073709551615ULL)));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)153)) + (((/* implicit */int) (unsigned char)217))));
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))) < (arr_4 [14] [i_1] [i_1])));
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_5)) ? (arr_4 [i_1] [i_0] [(signed char)17]) : (((/* implicit */long long int) arr_0 [i_0]))))));
        }
        for (short i_2 = 2; i_2 < 16; i_2 += 1) 
        {
            var_21 -= ((/* implicit */short) var_3);
            var_22 = ((/* implicit */_Bool) var_4);
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                for (int i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    {
                        arr_15 [i_2] [i_2] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) var_13))) >> (((((/* implicit */int) (unsigned char)37)) - (28)))));
                        arr_16 [i_2] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_4 [(signed char)15] [1ULL] [(signed char)15])) ? (((/* implicit */int) (unsigned short)35059)) : (((/* implicit */int) var_10))))));
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            for (int i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                for (unsigned char i_7 = 0; i_7 < 20; i_7 += 3) 
                {
                    {
                        arr_25 [i_0] [8] [i_6] [i_7] [i_7] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_5] [i_5 - 1] [i_7])) ? (((/* implicit */int) arr_14 [i_5 - 1] [i_5 - 1] [(unsigned short)4])) : (((/* implicit */int) arr_21 [i_6] [i_5 - 1] [i_5 - 1]))));
                        /* LoopSeq 1 */
                        for (long long int i_8 = 3; i_8 < 17; i_8 += 3) 
                        {
                            arr_28 [i_0] [i_5 - 1] [i_6] [i_7] [i_8 - 1] = ((/* implicit */signed char) (-(((/* implicit */int) arr_26 [i_8 + 3] [i_8 - 3] [i_8 + 3] [i_8] [i_8 - 2]))));
                            arr_29 [i_0] [i_5] [i_6] [i_7] [i_6] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_9 [i_8 - 2] [i_5 - 1] [i_6])) : (((/* implicit */int) arr_13 [i_8 - 2] [i_6]))));
                            arr_30 [i_6] [(short)1] [i_7] [i_6] [i_6] [i_6] = ((/* implicit */int) ((arr_26 [i_8 + 2] [i_8 + 2] [i_8] [i_8 - 3] [i_8 - 2]) ? (-6140590163850394562LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)149)))));
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_8 - 2] [i_8 + 3])) * (((/* implicit */int) (unsigned char)219))));
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_6])) ? (((/* implicit */int) ((((/* implicit */int) arr_22 [i_0] [i_0] [16LL] [i_6])) < (((/* implicit */int) arr_11 [i_0] [i_5] [i_6]))))) : (((/* implicit */int) ((short) arr_22 [i_0] [i_0] [(signed char)2] [i_6])))));
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 22; i_9 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_10 = 2; i_10 < 21; i_10 += 3) 
        {
            arr_36 [i_9] [i_9] = ((/* implicit */_Bool) ((signed char) (unsigned short)35059));
            arr_37 [i_9] [i_9] [i_9] = ((/* implicit */signed char) (unsigned short)35059);
            var_25 = ((/* implicit */int) ((((/* implicit */int) var_11)) < (var_9)));
        }
        /* LoopSeq 1 */
        for (signed char i_11 = 0; i_11 < 22; i_11 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_12 = 2; i_12 < 19; i_12 += 3) 
            {
                arr_43 [i_9] = ((/* implicit */signed char) arr_41 [i_9] [(signed char)14] [i_12 + 3] [i_12 + 2]);
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_33 [i_12 + 1])) ? (((/* implicit */int) (unsigned short)21450)) : (((/* implicit */int) var_13))));
            }
            arr_44 [i_9] [(_Bool)1] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_9])) ? (((((/* implicit */int) (short)-31901)) | (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */int) (unsigned short)8376)) >> (((((/* implicit */int) (short)32746)) - (32735)))))));
        }
    }
    /* vectorizable */
    for (signed char i_13 = 0; i_13 < 22; i_13 += 3) 
    {
        arr_47 [i_13] = ((/* implicit */short) ((arr_41 [i_13] [i_13] [(signed char)4] [i_13]) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [(signed char)7])) ? (((/* implicit */int) arr_35 [i_13] [i_13] [i_13])) : (((/* implicit */int) arr_46 [i_13] [i_13])))))));
        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) arr_41 [i_13] [i_13] [10] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_13]))) : (arr_41 [(short)2] [i_13] [i_13] [i_13])));
    }
    /* vectorizable */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        arr_50 [i_14] = ((/* implicit */signed char) (+(arr_49 [i_14] [i_14])));
        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6140590163850394562LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30466))) : (10645506324946365642ULL)))) ? (arr_49 [i_14] [i_14]) : (((((/* implicit */_Bool) var_3)) ? (arr_49 [i_14] [i_14]) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))))));
    }
}
