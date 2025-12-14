/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113044
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
    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) max(((~(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_5)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] = ((/* implicit */unsigned int) arr_11 [i_2] [i_2] [i_0] [(_Bool)1]);
                            /* LoopSeq 2 */
                            for (signed char i_4 = 2; i_4 < 16; i_4 += 1) 
                            {
                                var_19 -= ((/* implicit */unsigned int) min((((/* implicit */long long int) (signed char)40)), ((~(((((arr_10 [i_0] [i_3] [i_2]) + (9223372036854775807LL))) << (((17140154049009371981ULL) - (17140154049009371981ULL)))))))));
                                arr_16 [i_0] [i_0] [i_2] [i_2] [i_4] [i_4 + 1] = ((/* implicit */unsigned int) arr_15 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_0] [(signed char)13]);
                                var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) (signed char)120)))))))));
                            }
                            for (signed char i_5 = 0; i_5 < 18; i_5 += 2) 
                            {
                                var_21 = ((/* implicit */short) ((unsigned int) (+((+(((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [(signed char)0] [i_0])))))));
                                arr_20 [i_0] [i_0] = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_19 [i_3 + 1] [i_0] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1])))) + ((-(((/* implicit */int) arr_19 [i_3 + 1] [i_0] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]))))));
                            }
                            /* LoopSeq 2 */
                            for (signed char i_6 = 0; i_6 < 18; i_6 += 3) 
                            {
                                var_22 = ((/* implicit */unsigned long long int) ((min((arr_10 [i_1] [i_1] [i_2]), (((/* implicit */long long int) 2618441912U)))) * (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_1] [i_0] [(signed char)14] [(signed char)12] [i_1] [i_0])))));
                                arr_25 [i_1] [i_0] [i_2] [i_3] [i_6] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? ((+(3387389247U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (max(((signed char)12), (((/* implicit */signed char) arr_3 [i_3] [i_3]))))))))));
                            }
                            for (short i_7 = 1; i_7 < 15; i_7 += 4) 
                            {
                                var_23 *= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? ((-(3387389247U))) : (min((2532706894U), (3387389247U)))))));
                                var_24 = ((/* implicit */_Bool) (short)27538);
                            }
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (signed char i_8 = 0; i_8 < 18; i_8 += 1) 
                {
                    var_25 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_4))));
                    arr_31 [i_0] = ((/* implicit */long long int) ((907578049U) <= (((/* implicit */unsigned int) (~(((/* implicit */int) var_6)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 4; i_9 < 15; i_9 += 4) 
                    {
                        arr_35 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)256)) ? ((~(((/* implicit */int) (signed char)104)))) : (((((/* implicit */int) arr_26 [i_0])) ^ (((/* implicit */int) var_7))))))) ? (((/* implicit */int) var_16)) : ((~(((/* implicit */int) (signed char)8))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_10 = 0; i_10 < 18; i_10 += 4) 
                        {
                            var_26 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 186456021U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (1642022351U))) != (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)110)))))));
                            arr_38 [i_0] [i_9] [i_9 - 3] [9LL] [i_9] [i_9] = ((/* implicit */unsigned int) var_1);
                            var_27 *= ((/* implicit */short) (signed char)78);
                        }
                        for (short i_11 = 0; i_11 < 18; i_11 += 1) 
                        {
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */int) min((arr_18 [i_0] [9U] [i_9 - 3] [9U] [i_0]), (arr_18 [i_11] [i_1] [i_9 - 3] [i_11] [i_0])))) & (((((/* implicit */_Bool) 7470471940542343293ULL)) ? (((/* implicit */int) arr_18 [i_0] [i_1] [i_9 + 3] [i_9] [i_0])) : (((/* implicit */int) arr_18 [i_1] [i_1] [i_9 - 3] [10ULL] [i_0]))))));
                            arr_42 [i_0] [i_1] [i_8] [i_0] = ((/* implicit */_Bool) (((+(((((/* implicit */_Bool) arr_8 [i_0] [(signed char)2])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)24043)))))) - ((~(((/* implicit */int) (signed char)-110))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (signed char i_12 = 0; i_12 < 18; i_12 += 4) 
                    {
                        for (signed char i_13 = 0; i_13 < 18; i_13 += 4) 
                        {
                            {
                                arr_47 [i_0] [i_13] = ((/* implicit */unsigned int) var_17);
                                var_29 &= ((/* implicit */_Bool) max(((+((+(2522188986U))))), (((/* implicit */unsigned int) (short)7488))));
                                var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((((var_16) ? (arr_41 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_12] [i_12]) : (arr_34 [i_0] [i_1] [i_8] [i_12] [i_13]))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_45 [i_0] [i_0] [i_8] [i_12] [i_13] [i_12])) >> (((907578045U) - (907578030U)))))))) : (((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_11)))) << (((/* implicit */int) var_7)))))));
                                var_31 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */int) var_17)) < (((/* implicit */int) (signed char)103)))))))) + (max((((/* implicit */unsigned int) var_8)), (max((((/* implicit */unsigned int) var_17)), (2413285636U)))))));
                                arr_48 [i_13] [i_12] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) | (((/* implicit */int) (_Bool)0))))) : ((-(arr_34 [i_0] [i_1] [i_0] [i_0] [i_13]))))), (((/* implicit */unsigned long long int) ((((2143289344U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-115))))) < (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) * (((/* implicit */int) arr_40 [i_0] [i_1] [i_8] [i_12] [i_12]))))))))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */signed char) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) ((signed char) var_6))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) ((((/* implicit */int) arr_11 [i_8] [i_8] [i_8] [i_0])) < (((/* implicit */int) (_Bool)0)))))))));
                }
                for (signed char i_14 = 0; i_14 < 18; i_14 += 2) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (long long int i_16 = 2; i_16 < 15; i_16 += 4) 
                        {
                            {
                                var_33 = ((/* implicit */long long int) (~(((/* implicit */int) var_4))));
                                arr_58 [i_0] = ((/* implicit */_Bool) max((((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_46 [i_16] [i_15] [i_1] [i_1] [i_1] [(signed char)2] [i_0]))) - (((arr_52 [i_16]) + (((/* implicit */unsigned long long int) 2192432374U)))))), (((/* implicit */unsigned long long int) (+((-(arr_56 [i_0] [i_1] [i_14] [i_1] [(signed char)5]))))))));
                                var_34 ^= ((/* implicit */signed char) arr_46 [i_16] [i_16 + 2] [i_16] [i_16] [i_16 - 2] [i_16] [16ULL]);
                                var_35 = ((/* implicit */short) 2522188979U);
                            }
                        } 
                    } 
                    var_36 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (+((-(((/* implicit */int) (signed char)96))))))), (((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-125))))) + (arr_32 [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (signed char i_17 = 0; i_17 < 18; i_17 += 3) 
                    {
                        for (short i_18 = 0; i_18 < 18; i_18 += 2) 
                        {
                            {
                                var_37 = ((/* implicit */signed char) arr_6 [i_0]);
                                var_38 = ((/* implicit */long long int) var_5);
                                var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-114))) : (4127087155U)))) ? (((/* implicit */int) (signed char)37)) : ((~((+(((/* implicit */int) var_2))))))));
                            }
                        } 
                    } 
                }
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_17 [i_19] [i_0] [i_19] [i_1] [i_0] [i_0] [15ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (arr_27 [i_0] [i_0] [i_1] [i_1] [i_19] [i_19] [i_0])))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_37 [i_0] [i_0] [i_19] [i_0]))));
                    /* LoopSeq 1 */
                    for (long long int i_20 = 0; i_20 < 18; i_20 += 4) 
                    {
                        var_41 = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? ((-(arr_8 [i_0] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) (short)17223)))));
                        arr_71 [i_0] [i_0] [i_20] |= ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (signed char)-123))))));
                        var_42 = ((/* implicit */unsigned int) var_9);
                    }
                }
                arr_72 [i_0] = ((/* implicit */short) min((((/* implicit */int) arr_0 [i_0] [i_1])), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_0 [i_0] [i_1]))))));
            }
        } 
    } 
    var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_3))));
}
