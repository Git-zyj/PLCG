/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117983
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) + (((var_3) << (((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) var_7)))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0 - 1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((arr_2 [i_0 - 2]) == (((/* implicit */long long int) ((/* implicit */int) var_6)))))))) & (min((((/* implicit */unsigned long long int) arr_2 [i_0])), ((~(11017173125884665003ULL)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_14 = ((/* implicit */unsigned short) ((long long int) arr_2 [i_1]));
            arr_7 [i_0] = ((/* implicit */signed char) ((long long int) arr_2 [i_0 - 2]));
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    for (signed char i_4 = 4; i_4 < 11; i_4 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) arr_13 [i_0] [i_1] [i_2 + 1]))));
                            var_16 &= ((/* implicit */unsigned long long int) (signed char)111);
                            var_17 = var_3;
                        }
                    } 
                } 
            } 
            var_18 &= ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_0 - 2] [i_0 + 2])) + (((/* implicit */int) var_4))));
        }
        var_19 = ((/* implicit */unsigned short) max((var_19), (var_7)));
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (+((+(7429570947824886624ULL)))))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_8 [i_0] [i_0]))) >= (((((/* implicit */_Bool) arr_13 [i_0] [i_0 + 2] [6LL])) ? (((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1] [i_0])) : (((/* implicit */int) arr_11 [i_0] [i_0 - 1]))))))))));
    }
    for (signed char i_5 = 2; i_5 < 10; i_5 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)1)) | (((/* implicit */int) arr_5 [i_5] [i_5]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3))) : (arr_1 [i_5 + 1] [i_5 + 1])))))));
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_12))));
        var_23 = ((/* implicit */signed char) max((4160749568U), (32640U)));
        arr_17 [i_5 + 2] [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)61440))));
    }
    /* vectorizable */
    for (signed char i_6 = 2; i_6 < 10; i_6 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) arr_2 [i_6 - 1]))));
        /* LoopSeq 1 */
        for (unsigned char i_7 = 4; i_7 < 11; i_7 += 2) 
        {
            arr_24 [i_7] = ((/* implicit */unsigned long long int) ((unsigned short) arr_22 [i_7 - 3] [i_7] [i_6 + 2]));
            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) arr_13 [i_6] [i_6 - 2] [i_6]))));
            var_26 *= ((/* implicit */unsigned int) ((short) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) arr_11 [i_6 + 1] [i_7])))));
        }
        var_27 = ((/* implicit */int) arr_22 [i_6 + 2] [i_6] [i_6 + 2]);
    }
    /* LoopSeq 3 */
    for (long long int i_8 = 1; i_8 < 21; i_8 += 2) 
    {
        arr_27 [i_8] [i_8] = ((/* implicit */unsigned short) ((arr_25 [i_8]) ? (((/* implicit */int) ((arr_25 [i_8]) || (arr_25 [i_8])))) : (((/* implicit */int) arr_25 [i_8]))));
        arr_28 [i_8] [12U] |= ((/* implicit */_Bool) ((((/* implicit */int) arr_25 [(_Bool)1])) ^ (((/* implicit */int) arr_25 [4ULL]))));
    }
    for (signed char i_9 = 1; i_9 < 12; i_9 += 2) 
    {
        arr_33 [i_9 - 1] = ((/* implicit */unsigned short) ((long long int) max((var_2), (((/* implicit */long long int) min((arr_32 [i_9] [i_9]), (arr_25 [(signed char)18])))))));
        /* LoopNest 3 */
        for (long long int i_10 = 1; i_10 < 11; i_10 += 1) 
        {
            for (unsigned int i_11 = 1; i_11 < 10; i_11 += 2) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_42 [i_11 + 1] [i_11 + 1])), (arr_26 [i_10])))) ? (arr_38 [i_10]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_35 [i_10] [i_10 - 1])) << (((((/* implicit */int) arr_35 [i_10] [i_10])) - (25438))))))));
                        arr_43 [i_9] [i_9] [i_9 - 1] [i_10] = ((/* implicit */long long int) arr_29 [i_9 - 1]);
                    }
                } 
            } 
        } 
    }
    for (int i_13 = 2; i_13 < 10; i_13 += 3) 
    {
        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22766))) : (17422013816293147823ULL))))));
        var_30 = ((/* implicit */int) max((min((((/* implicit */long long int) var_11)), (-5429290663624253234LL))), (((((/* implicit */long long int) ((/* implicit */int) var_8))) / (((long long int) (signed char)93))))));
        /* LoopSeq 1 */
        for (int i_14 = 1; i_14 < 10; i_14 += 2) 
        {
            var_31 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_10)), (var_4)))) ? (arr_34 [i_14]) : ((+(((/* implicit */int) arr_40 [i_14 - 1])))))));
            arr_50 [i_13 - 1] [(unsigned short)8] &= ((/* implicit */long long int) max((arr_36 [(signed char)6] [(signed char)6] [(signed char)6]), ((~(((var_11) | (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_14 - 1])))))))));
        }
    }
    var_32 = ((/* implicit */unsigned int) var_1);
}
