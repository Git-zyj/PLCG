/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111933
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) max((var_8), (((/* implicit */long long int) (!(((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) arr_0 [i_0])))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) arr_0 [i_0]))))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            var_17 = ((/* implicit */int) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))) : (max((((/* implicit */long long int) var_3)), (var_8)))))));
            var_18 += ((/* implicit */int) (-(((unsigned int) max((arr_4 [i_0] [i_1]), (((/* implicit */unsigned char) arr_3 [12U] [i_1] [(_Bool)1])))))));
            arr_6 [i_1] = ((/* implicit */_Bool) (+((-(((/* implicit */int) arr_0 [i_0]))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) max((arr_9 [i_0]), (arr_9 [i_0]))))));
            var_19 = ((/* implicit */unsigned char) (+((~(8190ULL)))));
        }
    }
    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
    {
        var_20 += ((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_3] [i_3]))));
        arr_13 [i_3] = ((/* implicit */unsigned int) ((((((((((/* implicit */_Bool) var_8)) ? (var_8) : (var_6))) / (((/* implicit */long long int) (+(((/* implicit */int) var_14))))))) + (9223372036854775807LL))) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_3 [i_3] [i_3] [i_3]))))))))));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_16 [i_4] = ((/* implicit */int) ((((var_11) + (9223372036854775807LL))) >> ((((+(((/* implicit */int) arr_1 [i_4])))) - (62677)))));
        var_21 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_4] [(_Bool)1])) << (((((unsigned long long int) var_12)) - (554ULL)))));
        var_22 *= ((/* implicit */unsigned char) ((((long long int) arr_12 [i_4])) < (((/* implicit */long long int) arr_11 [i_4] [i_4]))));
    }
    for (short i_5 = 2; i_5 < 12; i_5 += 4) 
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 1) 
            {
                for (signed char i_8 = 0; i_8 < 13; i_8 += 1) 
                {
                    {
                        arr_27 [i_6] [i_7] [i_6] = ((/* implicit */_Bool) max((((unsigned int) ((((/* implicit */int) arr_21 [i_5 - 2] [i_5 - 2] [i_5])) < (((/* implicit */int) arr_26 [i_5] [i_7] [i_5] [i_5]))))), (((/* implicit */unsigned int) (+(min((12288), (-12301))))))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_4 [i_5 - 1] [i_6]), (arr_17 [i_5 - 1])))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_5 + 1] [i_6])) | (((/* implicit */int) arr_4 [i_5 - 2] [7U])))))));
                    }
                } 
            } 
        } 
        arr_28 [i_5] = arr_3 [i_5] [i_5 - 1] [i_5];
        /* LoopNest 2 */
        for (unsigned short i_9 = 3; i_9 < 11; i_9 += 3) 
        {
            for (long long int i_10 = 1; i_10 < 11; i_10 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 4) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 13; i_12 += 2) 
                        {
                            {
                                var_24 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_9 + 2] [i_5 - 2]))));
                                arr_39 [i_5] [i_5] [(signed char)7] [i_12] [i_12] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [i_5] [i_9 - 1] [i_10]))))) ? (((/* implicit */long long int) arr_11 [8] [i_10])) : (min((8820053903434949582LL), (((/* implicit */long long int) (_Bool)1))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_13 = 0; i_13 < 13; i_13 += 4) 
                    {
                        var_25 = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_19 [i_5 - 1] [i_5 - 1] [i_5 - 1]))))), (arr_34 [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_13] [(unsigned short)0] [(unsigned short)0]))), (((max((((/* implicit */unsigned long long int) var_4)), (var_5))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_13] [i_9] [i_13])) + (((/* implicit */int) arr_26 [i_5] [i_5] [i_5] [i_5 + 1])))))))));
                        var_26 += ((/* implicit */short) min((((((((/* implicit */unsigned long long int) var_6)) & (arr_33 [i_13] [12LL] [12LL] [8]))) | (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_38 [i_5 - 1] [i_5] [(unsigned char)1] [i_13] [i_5] [12ULL]))))))), ((+(arr_40 [i_10 + 1] [i_10 + 2] [i_10 - 1])))));
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_37 [i_9 + 2] [i_9 - 1]), (arr_37 [i_9 - 3] [i_9 + 1])))) ? (min((((/* implicit */unsigned long long int) var_13)), (arr_37 [i_9 + 2] [i_9 - 2]))) : ((-(arr_37 [i_9 + 1] [i_9 + 1])))));
                    }
                }
            } 
        } 
        arr_42 [i_5] = ((/* implicit */int) ((max(((~(-8820053903434949578LL))), (((/* implicit */long long int) min((var_7), (arr_31 [i_5] [i_5 - 2] [i_5])))))) >= (((/* implicit */long long int) (+(max((arr_8 [i_5 - 2] [i_5 - 2]), (var_3))))))));
        arr_43 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (min((min((var_3), (arr_29 [i_5 - 2] [(unsigned short)7]))), (((/* implicit */unsigned int) arr_24 [i_5] [i_5] [i_5] [i_5]))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_14 = 3; i_14 < 11; i_14 += 1) 
    {
        arr_47 [i_14] [i_14] = ((/* implicit */long long int) ((unsigned int) ((var_2) | (arr_46 [i_14]))));
        var_28 &= ((/* implicit */unsigned char) (+(arr_44 [i_14 + 2])));
        var_29 -= ((/* implicit */_Bool) (+(arr_44 [i_14 - 3])));
        var_30 += ((/* implicit */signed char) arr_45 [i_14 - 3] [(unsigned short)12]);
    }
    for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 3) 
    {
        var_31 += ((/* implicit */long long int) max((arr_4 [i_15] [i_15]), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_32 [i_15] [i_15] [i_15]))))) >= (((unsigned int) var_11)))))));
        arr_50 [i_15] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (((+(var_3))) / (((unsigned int) 17410903325804089779ULL))))), (((((/* implicit */_Bool) max((arr_12 [i_15]), (((/* implicit */unsigned char) var_13))))) ? (min((((/* implicit */unsigned long long int) arr_32 [i_15] [i_15] [i_15])), (var_0))) : (((/* implicit */unsigned long long int) (-(arr_11 [i_15] [i_15]))))))));
    }
}
