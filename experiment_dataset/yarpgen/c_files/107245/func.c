/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107245
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
    var_16 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) var_14)) * (var_6)));
    var_17 = ((/* implicit */_Bool) min((((/* implicit */int) var_11)), (((((/* implicit */int) (unsigned short)5175)) + (((/* implicit */int) var_8))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) / (arr_0 [i_0]))) : (((arr_0 [(signed char)7]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5182)))))));
        /* LoopSeq 3 */
        for (int i_1 = 3; i_1 < 14; i_1 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                var_19 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1 + 2] [i_0 + 1])) - (((/* implicit */int) arr_4 [i_1 + 2]))));
                var_20 &= ((/* implicit */signed char) arr_0 [i_0 - 1]);
            }
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 3; i_3 < 16; i_3 += 1) 
            {
                for (signed char i_4 = 2; i_4 < 16; i_4 += 2) 
                {
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        {
                            arr_15 [15U] [i_1] [15U] [i_3 - 2] [i_5] [1U] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_1 - 2]))));
                            var_21 = ((/* implicit */unsigned int) var_7);
                            arr_16 [(_Bool)1] [i_1] [i_3] [i_4] [i_5] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_1] [i_3]))));
                            arr_17 [i_5] [i_5] [i_4] [i_3] [i_1 - 2] [i_1] [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_8 [i_3 + 1] [i_0 + 3]))));
                        }
                    } 
                } 
            } 
            var_22 &= ((/* implicit */short) (~(((/* implicit */int) arr_4 [i_0]))));
        }
        for (int i_6 = 3; i_6 < 14; i_6 += 3) /* same iter space */
        {
            arr_21 [i_0 - 1] [i_0] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_8 [i_0] [i_6])) : (((/* implicit */int) arr_18 [i_0 + 3] [1U]))))));
            arr_22 [i_6] = ((/* implicit */unsigned char) (((_Bool)1) || (((/* implicit */_Bool) (signed char)-74))));
            arr_23 [i_0] = ((/* implicit */short) arr_0 [i_0]);
            var_23 = ((/* implicit */unsigned int) ((arr_7 [i_0] [i_6 + 2] [i_0 - 2] [i_6 + 1]) ? (((/* implicit */int) arr_8 [3] [3])) : (((/* implicit */int) arr_8 [(unsigned short)4] [(short)16]))));
        }
        for (int i_7 = 3; i_7 < 14; i_7 += 3) /* same iter space */
        {
            var_24 ^= ((/* implicit */short) arr_4 [(unsigned short)13]);
            var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)5178))));
            arr_28 [i_0 - 2] = ((/* implicit */unsigned int) (~(arr_12 [i_0] [i_0 + 3] [i_0] [i_7] [i_0])));
        }
        arr_29 [i_0] = ((/* implicit */unsigned short) -889311762721160943LL);
        /* LoopSeq 2 */
        for (unsigned int i_8 = 0; i_8 < 17; i_8 += 3) /* same iter space */
        {
            arr_33 [i_8] = ((/* implicit */signed char) arr_31 [(unsigned char)8] [i_0] [i_0]);
            var_26 = ((/* implicit */unsigned short) arr_0 [i_0]);
        }
        for (unsigned int i_9 = 0; i_9 < 17; i_9 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_10 = 0; i_10 < 17; i_10 += 3) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        arr_44 [i_0] [(signed char)3] [i_0] [i_10] [i_11] = arr_38 [i_0] [i_9] [i_0];
                        var_27 = ((/* implicit */unsigned int) var_10);
                        var_28 = ((/* implicit */unsigned short) arr_24 [i_11]);
                    }
                } 
            } 
            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_6 [i_0 - 1] [i_0 + 3])))))));
            /* LoopNest 2 */
            for (short i_12 = 1; i_12 < 14; i_12 += 3) 
            {
                for (int i_13 = 3; i_13 < 16; i_13 += 1) 
                {
                    {
                        var_30 = ((/* implicit */long long int) arr_6 [i_0 + 3] [i_0]);
                        arr_51 [i_0] [i_0] [i_9] [(unsigned short)2] [i_12] [i_13] = ((((/* implicit */_Bool) arr_26 [i_0 - 1] [i_13 - 3] [i_13])) ? (((/* implicit */int) arr_25 [i_0] [14ULL])) : (((/* implicit */int) arr_5 [i_12 + 2] [i_0 + 1])));
                        var_31 *= ((/* implicit */unsigned int) -278773372);
                        arr_52 [i_0] = ((/* implicit */_Bool) (unsigned short)5698);
                        var_32 = ((/* implicit */_Bool) arr_5 [8LL] [i_9]);
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned int i_14 = 0; i_14 < 15; i_14 += 3) 
    {
        arr_56 [i_14] [i_14] = ((/* implicit */unsigned short) (+(arr_35 [i_14] [i_14] [i_14])));
        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) arr_53 [i_14] [i_14]))));
        arr_57 [i_14] [i_14] = ((/* implicit */unsigned int) 889311762721160942LL);
    }
    /* vectorizable */
    for (long long int i_15 = 1; i_15 < 9; i_15 += 4) 
    {
        arr_60 [i_15] = ((/* implicit */short) (~(((arr_35 [i_15] [i_15] [i_15]) << (((((/* implicit */int) arr_47 [1ULL])) - (19276)))))));
        arr_61 [i_15] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-1)) | (((/* implicit */int) (unsigned char)163))));
    }
}
