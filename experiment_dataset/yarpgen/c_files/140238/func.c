/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140238
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) (+(min((((arr_1 [i_0] [10LL]) - (((/* implicit */int) arr_0 [i_0])))), ((~(arr_1 [5] [i_0])))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            var_17 = ((/* implicit */short) (-(arr_3 [i_0] [7ULL] [i_1 - 3])));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) ((signed char) ((arr_7 [(_Bool)0] [i_1] [i_0]) >= (arr_1 [i_0] [i_1]))));
                            arr_12 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_7 [i_4] [3] [i_0]);
                        }
                    } 
                } 
                arr_13 [i_0] = ((/* implicit */int) arr_9 [i_0] [i_1 - 2] [i_2 - 1] [i_0] [i_2 + 1]);
            }
            arr_14 [i_0] [12] |= (-(((/* implicit */int) arr_6 [(unsigned short)10] [i_0] [(unsigned short)10] [i_0])));
            arr_15 [i_0] [(short)15] = ((/* implicit */short) ((((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1])) | (((/* implicit */int) arr_6 [i_1 + 1] [i_1 - 2] [(_Bool)1] [i_1 - 1]))));
            arr_16 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 1] [i_1 - 3])) <= (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1] [i_1 - 1]))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
        {
            var_19 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)83)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_6 [14] [i_0] [14] [14])))) / (((/* implicit */int) ((((/* implicit */_Bool) (signed char)78)) || (((/* implicit */_Bool) (unsigned short)21)))))));
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 16; i_6 += 3) 
            {
                for (unsigned short i_7 = 0; i_7 < 18; i_7 += 1) 
                {
                    for (int i_8 = 0; i_8 < 18; i_8 += 4) 
                    {
                        {
                            var_20 ^= ((/* implicit */unsigned int) max((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), (arr_6 [i_6 - 1] [i_6 + 2] [i_6 + 1] [i_6 - 1])))), (((int) arr_6 [i_6 + 2] [i_6 + 1] [i_6 - 1] [i_6 - 1]))));
                            arr_26 [i_5] [i_5] [i_6] [i_7] [(unsigned char)17] [i_0] [i_5] = ((/* implicit */signed char) max((1147953033), (((/* implicit */int) ((((((/* implicit */_Bool) arr_9 [i_0] [i_7] [(short)11] [i_0] [i_0])) ? (arr_3 [i_0] [i_5] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))) >= (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0])))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_9 = 0; i_9 < 18; i_9 += 3) 
            {
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (-(3327687076U))))));
                arr_29 [i_0] = ((/* implicit */_Bool) arr_18 [i_0] [i_0]);
            }
        }
        /* vectorizable */
        for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_0])) ? (arr_1 [i_10] [(short)6]) : (arr_21 [(_Bool)1] [i_10] [4] [(unsigned char)3])))) <= (((((/* implicit */_Bool) arr_21 [i_0] [i_10] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_17 [7ULL])) : (arr_3 [(unsigned short)8] [(unsigned short)8] [i_10]))))))));
            var_23 ^= ((/* implicit */long long int) (((~(0ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [6] [i_10] [i_10] [i_10] [i_10] [3])))));
            /* LoopSeq 2 */
            for (int i_11 = 0; i_11 < 18; i_11 += 3) /* same iter space */
            {
                var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [(_Bool)1] [(_Bool)1] [i_11] [i_11])) ? (5718530417955112735LL) : (((/* implicit */long long int) 2147483647)))))));
                arr_34 [i_0] [7] [i_10] [i_0] = ((/* implicit */short) arr_19 [i_0] [i_0] [i_11] [i_10]);
            }
            for (int i_12 = 0; i_12 < 18; i_12 += 3) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((int) arr_5 [12U] [i_0] [i_0])))));
                arr_38 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_0] [i_0] [i_0])) >> (((((int) arr_2 [i_10] [i_12])) - (13573)))));
                arr_39 [i_0] [i_0] [i_0] = ((((/* implicit */unsigned long long int) 9223372036854775807LL)) - (562949953421312ULL));
            }
        }
        arr_40 [i_0] [i_0] = (-(((4577583832767760764ULL) + (((/* implicit */unsigned long long int) (-2147483647 - 1))))));
    }
    for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 3) 
    {
        var_26 -= ((/* implicit */short) (unsigned short)9198);
        arr_44 [i_13] [(_Bool)1] &= ((/* implicit */int) arr_42 [6ULL]);
    }
    var_27 |= ((/* implicit */int) (short)21023);
    /* LoopSeq 1 */
    for (signed char i_14 = 4; i_14 < 17; i_14 += 4) 
    {
        var_28 = ((/* implicit */unsigned long long int) (~(min((arr_46 [i_14 + 1]), (arr_46 [i_14 - 3])))));
        /* LoopNest 2 */
        for (unsigned short i_15 = 0; i_15 < 19; i_15 += 4) 
        {
            for (signed char i_16 = 0; i_16 < 19; i_16 += 4) 
            {
                {
                    var_29 ^= ((/* implicit */short) (-(((int) arr_46 [i_16]))));
                    var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) 63401788)) ? (((int) ((((/* implicit */int) (unsigned short)29)) - (((/* implicit */int) (_Bool)0))))) : (((/* implicit */int) arr_47 [i_16]))));
                }
            } 
        } 
    }
}
