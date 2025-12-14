/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1763
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
    var_12 = ((/* implicit */unsigned char) var_5);
    var_13 = ((/* implicit */signed char) ((var_3) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
    var_14 = ((/* implicit */unsigned char) min((((/* implicit */int) ((short) var_1))), ((~(((((/* implicit */int) var_10)) & (((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) arr_1 [i_0])) | (var_3))) >> (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)21524)) : (((/* implicit */int) (short)2098)))) - (21509)))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (_Bool)1);
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        arr_7 [(short)17] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-29940))));
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            arr_10 [i_1] |= ((/* implicit */signed char) (_Bool)1);
            arr_11 [i_1] [(_Bool)1] = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_6 [i_1])))));
            arr_12 [i_2] = ((/* implicit */_Bool) ((arr_5 [i_1]) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1])) && (((/* implicit */_Bool) arr_5 [i_1])))))));
        }
        arr_13 [i_1] &= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((long long int) arr_4 [i_1] [i_1])) >> (((arr_6 [i_1]) - (1902321189U)))))) / (arr_8 [i_1])));
        arr_14 [i_1] = ((/* implicit */long long int) var_7);
    }
    for (long long int i_3 = 2; i_3 < 17; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (signed char i_5 = 2; i_5 < 17; i_5 += 1) 
            {
                for (unsigned int i_6 = 0; i_6 < 20; i_6 += 4) 
                {
                    {
                        arr_27 [10U] [i_4] [i_4] [i_3] [i_3 - 1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_18 [i_5 - 2])) ^ ((-(var_3)))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            arr_30 [i_4] [6LL] [i_5] [i_4] [i_6] [i_3] |= ((/* implicit */short) ((unsigned char) ((unsigned long long int) var_11)));
                            arr_31 [i_7] [i_4] [i_4] [i_4] [i_7] = ((/* implicit */unsigned long long int) var_11);
                            arr_32 [8ULL] [i_4] [i_6] [i_6] [i_7 - 1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_23 [i_7 - 1] [i_5 + 2] [i_3 - 2])) ^ (((/* implicit */int) arr_4 [i_7 - 1] [i_5 + 2]))));
                            arr_33 [i_3 - 1] [i_7] [i_7] [i_6] [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_29 [i_4] [i_5 + 2] [i_7 - 1]))));
                        }
                    }
                } 
            } 
        } 
        arr_34 [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-25730)) + (2147483647))) >> (((((/* implicit */int) ((unsigned short) ((var_2) / (((/* implicit */long long int) ((/* implicit */int) var_8))))))) - (14200)))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_8 = 0; i_8 < 20; i_8 += 2) 
        {
            arr_38 [i_3 - 2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_3] [i_3 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)825))) : (var_9)));
            arr_39 [i_3] = ((/* implicit */_Bool) (-((((_Bool)1) ? (var_9) : (4294967295U)))));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_43 [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_15 [i_3 + 2])) ? (arr_15 [i_3 + 3]) : (arr_15 [i_3 - 1]))) | (((/* implicit */unsigned int) ((/* implicit */int) max((arr_28 [i_9] [i_9] [i_3] [i_3] [i_3]), (((/* implicit */unsigned short) (signed char)127))))))));
            arr_44 [i_3] [7LL] = ((/* implicit */_Bool) (-(var_2)));
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_11 = 0; i_11 < 20; i_11 += 3) 
            {
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                {
                    for (unsigned int i_13 = 0; i_13 < 20; i_13 += 3) 
                    {
                        {
                            arr_54 [12U] [i_12] [2U] [(unsigned char)2] [(unsigned char)2] [2U] [12U] |= ((/* implicit */int) (((+(((/* implicit */int) arr_53 [i_12 - 1] [i_12 - 1] [i_3] [(signed char)2] [i_3 - 2] [(unsigned short)4] [(unsigned short)4])))) > (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_53 [i_12 - 1] [i_12 - 1] [i_10] [i_3] [i_3 - 2] [i_3] [i_3]))) > (arr_19 [i_3 + 1]))))));
                            arr_55 [i_3] [i_3] [i_11] [i_10] [i_3] = ((/* implicit */int) arr_53 [(_Bool)1] [(_Bool)1] [i_13] [i_12] [i_13] [i_12 - 1] [i_10]);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_14 = 0; i_14 < 20; i_14 += 1) 
            {
                for (signed char i_15 = 0; i_15 < 20; i_15 += 3) 
                {
                    {
                        arr_61 [i_15] [14LL] [i_14] [i_14] [14LL] [i_3 + 1] = ((/* implicit */unsigned int) ((unsigned long long int) min(((-(var_5))), (((/* implicit */int) max((var_10), (((/* implicit */unsigned char) arr_20 [i_3] [i_15]))))))));
                        arr_62 [i_15] [18] [(signed char)0] [(signed char)0] [i_10] [i_3] = ((/* implicit */unsigned int) ((_Bool) ((unsigned long long int) arr_25 [i_3 - 2] [i_3 - 2] [i_14] [i_15])));
                    }
                } 
            } 
        }
        arr_63 [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(arr_57 [i_3 + 3] [i_3 + 3] [i_3]))))));
        arr_64 [(unsigned char)9] = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_24 [i_3 + 2] [i_3 + 1] [i_3] [i_3 + 2])) - (((/* implicit */int) arr_21 [i_3] [i_3 + 3] [i_3]))))));
    }
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        arr_67 [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)29929)) ? (((((/* implicit */int) (unsigned char)21)) / (((/* implicit */int) arr_60 [i_16] [i_16] [i_16] [i_16] [i_16])))) : (((/* implicit */int) arr_23 [i_16] [i_16] [i_16]))));
        arr_68 [i_16] = ((/* implicit */_Bool) ((unsigned short) var_3));
    }
}
