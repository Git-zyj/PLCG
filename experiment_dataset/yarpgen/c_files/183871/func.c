/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183871
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) min((((6194445921230429943ULL) + (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) 1110455590))))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned short) -1110455590);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((0U) * (23U)))) * (arr_1 [i_0]))) == (min((((/* implicit */unsigned long long int) 2861916658U)), (14845167346397832127ULL)))));
        var_14 |= ((/* implicit */unsigned long long int) (-2147483647 - 1));
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (signed char)0))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) min((min((((/* implicit */unsigned int) arr_0 [(_Bool)0])), (min((1433050637U), (4294967295U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 14845167346397832147ULL)) || (((/* implicit */_Bool) arr_2 [i_0]))))))))));
            arr_7 [i_0] [i_0] = ((/* implicit */signed char) 2861916658U);
            arr_8 [i_0] [(short)16] [i_1] = arr_3 [(signed char)5] [i_1];
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                arr_12 [(unsigned char)5] [(short)4] [i_2] = min((min((min((3601576727311719469ULL), (((/* implicit */unsigned long long int) 4022289772U)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2]))) | (4146647778U)))))), (((/* implicit */unsigned long long int) 360343278)));
                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) != (max((max((arr_9 [i_0] [i_0] [i_0] [i_2]), (((/* implicit */unsigned long long int) arr_5 [i_0])))), (((/* implicit */unsigned long long int) ((arr_10 [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0])))))))))))));
                /* LoopNest 2 */
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) min((((/* implicit */unsigned long long int) ((arr_15 [i_0] [i_0] [i_2]) == (((/* implicit */long long int) arr_10 [i_0]))))), (max((min((arr_9 [i_1] [i_1] [i_1] [i_4]), (((/* implicit */unsigned long long int) arr_16 [i_4] [i_3] [i_2] [i_1] [(_Bool)1])))), (((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_1] [i_0] [i_1] [i_3] [i_4])))))))));
                            var_19 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_16 [i_2] [i_2] [i_2] [i_2] [i_2])), (min((((/* implicit */unsigned long long int) arr_17 [i_0] [3] [(signed char)11] [i_2] [12U] [i_3] [i_4])), (arr_1 [i_0])))))) || (((/* implicit */_Bool) ((((17904561245963569840ULL) | (3601576727311719469ULL))) ^ (min((((/* implicit */unsigned long long int) 1462948641U)), (arr_18 [i_3] [i_3])))))));
                            var_20 |= ((/* implicit */long long int) arr_3 [i_3] [i_3]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 19; i_5 += 1) 
                {
                    for (long long int i_6 = 1; i_6 < 16; i_6 += 1) 
                    {
                        {
                            arr_23 [i_5] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((((/* implicit */unsigned short) arr_20 [i_0] [i_1] [i_2] [i_6] [i_6])), ((unsigned short)61069)))), (((((/* implicit */long long int) ((/* implicit */int) arr_5 [3ULL]))) - (arr_15 [i_6 + 3] [i_1] [i_1])))))) * (((arr_2 [i_5]) / (((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_0]))))));
                            var_21 = ((/* implicit */_Bool) (short)26787);
                            var_22 = ((/* implicit */_Bool) arr_21 [i_6] [i_5] [i_5] [14ULL] [i_5] [8U] [i_0]);
                            var_23 = ((/* implicit */short) min((((/* implicit */long long int) ((arr_10 [i_0]) * (((23U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))), (arr_17 [i_0] [i_1] [i_1] [i_6] [i_6] [i_1] [i_0])));
                        }
                    } 
                } 
            }
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_27 [i_7] [(_Bool)1] [i_7] = ((/* implicit */unsigned long long int) arr_24 [i_0] [i_7]);
            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) arr_3 [i_0] [i_7]))));
            /* LoopNest 2 */
            for (unsigned int i_8 = 1; i_8 < 17; i_8 += 2) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        arr_32 [i_7] = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)30788)), (2861916658U)))) && (((/* implicit */_Bool) arr_2 [i_9])))) && (((/* implicit */_Bool) arr_13 [i_7] [i_0] [i_8] [i_7] [i_7]))));
                        var_25 -= ((/* implicit */short) arr_26 [i_0] [i_7] [i_9]);
                        arr_33 [i_0] [i_0] [i_0] [i_8 - 1] [i_8 + 2] [i_8 + 2] |= ((/* implicit */unsigned int) 13929429849940957377ULL);
                        var_26 += ((/* implicit */unsigned int) min((arr_5 [i_9]), (((/* implicit */unsigned char) ((4517314223768594259ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_3 [i_0] [i_8 + 2]), (((/* implicit */unsigned short) arr_5 [i_8])))))))))));
                    }
                } 
            } 
            arr_34 [i_7] [i_7] = ((/* implicit */short) (signed char)123);
        }
    }
    var_27 |= ((/* implicit */_Bool) min((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_7)))), (131101655)));
    /* LoopSeq 2 */
    for (unsigned long long int i_10 = 3; i_10 < 18; i_10 += 2) /* same iter space */
    {
        var_28 ^= ((/* implicit */_Bool) arr_16 [i_10] [i_10 - 3] [i_10] [i_10] [i_10]);
        var_29 = ((/* implicit */signed char) 13929429849940957371ULL);
        var_30 *= ((/* implicit */unsigned long long int) min(((short)-9906), (((/* implicit */short) ((((/* implicit */long long int) 3218006299U)) >= (min((((/* implicit */long long int) (signed char)0)), (arr_15 [(_Bool)1] [(_Bool)1] [i_10 - 1]))))))));
        /* LoopNest 2 */
        for (unsigned short i_11 = 0; i_11 < 19; i_11 += 3) 
        {
            for (unsigned short i_12 = 3; i_12 < 18; i_12 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 0; i_13 < 19; i_13 += 4) 
                    {
                        for (signed char i_14 = 2; i_14 < 16; i_14 += 3) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) (_Bool)1))));
                                var_32 = ((/* implicit */short) arr_5 [i_13]);
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) arr_19 [0] [i_11] [i_11] [0]))));
                }
            } 
        } 
    }
    for (unsigned long long int i_15 = 3; i_15 < 18; i_15 += 2) /* same iter space */
    {
        var_34 = min((arr_43 [i_15] [(unsigned short)14] [i_15] [i_15]), (((/* implicit */unsigned long long int) arr_26 [i_15] [i_15] [i_15])));
        /* LoopNest 2 */
        for (unsigned short i_16 = 0; i_16 < 19; i_16 += 3) 
        {
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                {
                    var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) min((14845167346397832146ULL), (((11138508443035812133ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))))));
                    var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) arr_48 [i_17]))));
                    arr_53 [i_15] [i_15] = ((/* implicit */int) (short)11135);
                }
            } 
        } 
    }
    var_37 = ((/* implicit */unsigned short) var_1);
}
