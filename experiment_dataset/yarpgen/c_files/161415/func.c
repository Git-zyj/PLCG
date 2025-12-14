/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161415
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_19 -= ((/* implicit */signed char) (short)-20467);
                    var_20 += ((/* implicit */int) (short)20483);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) ((int) 2147483647))) ? (((((/* implicit */_Bool) (short)-20484)) ? (-3LL) : (((/* implicit */long long int) 676972264U)))) : (3LL))));
    /* LoopNest 2 */
    for (unsigned char i_3 = 1; i_3 < 6; i_3 += 2) 
    {
        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_5 = 1; i_5 < 8; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        for (unsigned char i_7 = 2; i_7 < 7; i_7 += 2) 
                        {
                            {
                                arr_20 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((-(0ULL)))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(((/* implicit */int) arr_19 [i_6] [i_4] [i_5] [i_6] [i_7]))))), (((((/* implicit */_Bool) 5801095105215607658LL)) ? (5801095105215607658LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))))));
                                arr_21 [i_3] [i_4] [i_4] [i_5] [i_6] [i_3] &= ((/* implicit */signed char) (-((-(((/* implicit */int) arr_8 [i_3 - 1] [i_4]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (int i_8 = 0; i_8 < 10; i_8 += 1) 
                    {
                        var_22 = ((((/* implicit */unsigned int) max((((((/* implicit */_Bool) 12292090082771247009ULL)) ? (((/* implicit */int) (short)-20474)) : (((/* implicit */int) (signed char)-47)))), (((/* implicit */int) (short)20467))))) & (4294967295U));
                        arr_24 [i_8] = ((/* implicit */signed char) (+((+(((/* implicit */int) arr_9 [i_3 + 1]))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_9 = 1; i_9 < 8; i_9 += 2) 
                    {
                        var_23 ^= ((/* implicit */long long int) ((unsigned char) arr_1 [i_5 + 2] [i_4]));
                        arr_27 [i_4] [i_3 - 1] [i_4] [i_5] [i_9] &= ((/* implicit */int) arr_25 [i_3] [i_4] [i_4] [i_5] [i_5 + 1] [i_9]);
                    }
                    for (signed char i_10 = 0; i_10 < 10; i_10 += 4) 
                    {
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_3] [i_10]))))), ((-(1267415340U)))))) ? (((/* implicit */int) ((signed char) (_Bool)0))) : (((/* implicit */int) (unsigned char)221))));
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */int) (unsigned short)14336)) : (927748441))))));
                    }
                    arr_32 [(signed char)6] [i_4] [i_3 + 1] [i_3] = ((/* implicit */unsigned int) (unsigned char)6);
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 10; i_11 += 2) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 10; i_12 += 4) 
                        {
                            {
                                var_26 &= ((/* implicit */long long int) ((max((((unsigned long long int) -4946179358869491694LL)), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_18 [i_3 + 3] [i_3] [i_3 + 2] [i_3 + 2] [i_3] [i_3] [i_3])), (arr_4 [i_12] [i_3])))))) / (((/* implicit */unsigned long long int) ((long long int) arr_13 [i_5 + 1] [i_5 + 2] [i_5 - 1] [i_5])))));
                                var_27 &= ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_35 [i_3 + 3] [i_4] [i_11] [i_12])) ? (((/* implicit */int) arr_23 [i_3 + 3] [i_4] [i_5 + 1] [i_4])) : (((/* implicit */int) (unsigned char)238)))))) > (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) (unsigned char)160))))))));
                                var_28 *= ((/* implicit */short) ((long long int) min((((signed char) (short)32758)), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)238))))))));
                            }
                        } 
                    } 
                    arr_39 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) arr_18 [i_5 + 2] [i_5] [i_5] [i_3 - 1] [i_3 + 1] [i_3] [4])) >= (((((/* implicit */int) arr_18 [i_5 + 1] [9LL] [2LL] [i_3 + 4] [i_3] [i_3] [i_3])) >> (((/* implicit */int) arr_18 [i_5 + 1] [i_4] [i_4] [i_3 + 2] [i_3] [i_3] [i_3]))))));
                }
                for (int i_13 = 0; i_13 < 10; i_13 += 2) 
                {
                    arr_42 [i_3] [i_4] = (-(((((/* implicit */int) (unsigned short)480)) + (((/* implicit */int) arr_36 [i_3 - 1] [i_3 + 3] [i_3 + 2] [i_3 - 1])))));
                    arr_43 [i_3 + 3] [(short)8] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) 2216615441596416LL)) ? (arr_14 [i_3] [i_4] [i_13]) : ((~(var_4))))), (((/* implicit */unsigned long long int) (unsigned char)18))));
                }
                for (unsigned int i_14 = 3; i_14 < 8; i_14 += 2) 
                {
                    arr_47 [i_3 + 3] [(unsigned char)6] [i_14] [i_4] = (~((~(((/* implicit */int) (signed char)0)))));
                    arr_48 [i_14] = ((/* implicit */unsigned long long int) (+(1582980042U)));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_15 = 1; i_15 < 7; i_15 += 2) 
                {
                    for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) arr_13 [i_3 + 1] [i_4] [i_15] [(signed char)4]))));
                            var_30 ^= ((/* implicit */unsigned char) (~(0ULL)));
                            arr_55 [i_15] [i_16] = ((/* implicit */unsigned int) max(((-(arr_1 [i_4] [i_15 + 1]))), ((~(arr_1 [i_3 - 1] [i_3])))));
                        }
                    } 
                } 
                arr_56 [i_3] = ((unsigned int) max((((/* implicit */unsigned long long int) arr_13 [i_3 + 4] [i_3 - 1] [i_3 + 2] [i_3 + 4])), (arr_11 [i_3 + 2])));
                /* LoopNest 2 */
                for (unsigned char i_17 = 0; i_17 < 10; i_17 += 4) 
                {
                    for (unsigned char i_18 = 1; i_18 < 7; i_18 += 2) 
                    {
                        {
                            arr_61 [i_3] [i_18] = ((/* implicit */_Bool) var_1);
                            arr_62 [i_18] [i_4] [i_17] [i_17] [i_18 + 1] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_18] [i_17] [i_4] [i_3])) ? (max((24ULL), (((/* implicit */unsigned long long int) arr_16 [i_18 + 3])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_50 [i_18])) ? (((/* implicit */int) arr_50 [i_18])) : (((/* implicit */int) arr_50 [i_18])))))));
                        }
                    } 
                } 
                arr_63 [i_4] [i_4] [i_3 - 1] = (-((~(min((arr_1 [i_3] [3]), (((/* implicit */long long int) arr_30 [i_4] [i_3] [i_4] [i_4] [i_3] [i_3])))))));
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_6))) ? (((/* implicit */long long int) var_0)) : (-1LL))))));
}
