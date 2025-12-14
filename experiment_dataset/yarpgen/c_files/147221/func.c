/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147221
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        arr_9 [i_1] = ((/* implicit */int) ((((/* implicit */int) arr_1 [i_3])) > (var_0)));
                        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [(signed char)1] [i_2] [i_1])) ? (((/* implicit */int) arr_8 [i_2 - 1] [i_2] [i_2 - 1] [i_2] [i_2 + 1])) : (((((/* implicit */_Bool) 6U)) ? (((/* implicit */int) var_1)) : (var_0))))))));
                        arr_10 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) arr_8 [i_3] [4] [i_1] [i_0] [i_0]);
                        arr_11 [i_0] [i_1] [i_2 - 1] [i_0] |= ((/* implicit */short) (-((+(arr_6 [i_2] [i_0])))));
                        /* LoopSeq 4 */
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            arr_14 [i_4] [i_3] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 757916739)) ? (4294967280U) : (((/* implicit */unsigned int) 363344459))));
                            var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((long long int) arr_8 [i_0] [i_1] [i_2] [i_3] [i_2 - 1])))));
                        }
                        for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned char) -9223372036854775802LL);
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) var_9))));
                        }
                        for (signed char i_6 = 0; i_6 < 11; i_6 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)172))) - (3496779155149763249LL)));
                            var_20 *= ((/* implicit */short) var_1);
                            arr_19 [(short)1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 3496779155149763241LL)) ? (-18) : (((/* implicit */int) (unsigned short)8191))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_22 [i_0] [i_1] [i_1] [7LL] [(short)2] = ((/* implicit */unsigned char) arr_13 [i_3]);
                            var_21 = ((/* implicit */int) var_7);
                            arr_23 [i_7] [i_1] [(unsigned char)1] [(unsigned char)1] [i_1] [i_0] = ((((/* implicit */_Bool) ((short) var_2))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((arr_12 [2ULL] [i_0] [i_0] [i_1] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_1] [i_1] [i_2] [i_3] [(_Bool)1]))))));
                        }
                    }
                    arr_24 [i_1] [i_2 - 1] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [i_0]))));
                    arr_25 [i_1] [i_1] [i_1] [i_1] = (~(((((/* implicit */_Bool) ((int) arr_12 [i_0] [i_1] [i_0] [i_1] [i_0]))) ? (((((/* implicit */_Bool) -3496779155149763241LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21404))) : (arr_12 [i_0] [i_0] [i_1] [i_1] [i_2 + 1]))) : (((/* implicit */unsigned long long int) ((unsigned int) (signed char)27))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) ((short) (+(((unsigned long long int) -8868170031264879345LL)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 13; i_9 += 2) 
        {
            for (int i_10 = 0; i_10 < 13; i_10 += 4) 
            {
                {
                    var_23 = ((/* implicit */int) min((var_23), (((int) (+(((/* implicit */int) (signed char)-73)))))));
                    arr_33 [i_9] [(unsigned short)1] = ((/* implicit */unsigned long long int) ((var_5) / (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_8] [2ULL] [i_10])))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_11 = 1; i_11 < 12; i_11 += 2) 
        {
            for (unsigned int i_12 = 3; i_12 < 11; i_12 += 2) 
            {
                for (signed char i_13 = 3; i_13 < 11; i_13 += 1) 
                {
                    {
                        arr_41 [i_11] [i_11] [i_12] [i_13] = ((/* implicit */short) ((int) min(((_Bool)1), ((_Bool)1))));
                        arr_42 [i_8] [i_11] [i_8] [i_11] = ((/* implicit */signed char) ((short) ((_Bool) (-(var_5)))));
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_31 [i_11 - 1] [i_13 + 2] [i_12 - 3]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_11] [i_11] [i_12 - 3]))) : (((arr_34 [i_11] [i_11 + 1] [i_11]) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) (short)6062))) : (var_6))) : (((/* implicit */long long int) ((((/* implicit */int) var_13)) + (arr_35 [i_8]))))))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned int i_14 = 0; i_14 < 24; i_14 += 3) 
    {
        for (unsigned short i_15 = 0; i_15 < 24; i_15 += 4) 
        {
            {
                arr_49 [i_14] [i_14] [i_15] |= (((_Bool)1) ? (9049123581359246669ULL) : (((/* implicit */unsigned long long int) 8868170031264879345LL)));
                var_25 = ((/* implicit */int) ((short) max((((/* implicit */long long int) arr_48 [i_14] [i_14] [i_15])), (var_12))));
                var_26 = ((/* implicit */short) (+(((unsigned long long int) min((var_8), (((/* implicit */short) var_1)))))));
                /* LoopNest 3 */
                for (int i_16 = 0; i_16 < 24; i_16 += 2) 
                {
                    for (unsigned short i_17 = 2; i_17 < 20; i_17 += 2) 
                    {
                        for (unsigned long long int i_18 = 1; i_18 < 20; i_18 += 3) 
                        {
                            {
                                var_27 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_44 [i_17] [i_18 + 1])) | (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (-1506612625)))) ? (17476237236127341278ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_45 [i_14])) * (arr_57 [i_14] [i_15] [i_16] [i_16] [i_18])))))))));
                                var_28 = ((/* implicit */unsigned long long int) 8868170031264879345LL);
                                arr_59 [i_15] [i_18] [i_18] [i_14] [i_18] [i_15] [i_14] = ((/* implicit */unsigned char) var_5);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
