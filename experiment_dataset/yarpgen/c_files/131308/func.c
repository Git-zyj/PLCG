/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131308
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
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */int) var_2)) + (((/* implicit */int) ((var_6) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)77), (var_12)))))))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        var_18 = ((/* implicit */_Bool) 9223372036854775807LL);
        var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)-81)) && (((/* implicit */_Bool) (signed char)-77)))) && (((/* implicit */_Bool) 6651272556659630301ULL))))), (max((min((var_3), (((/* implicit */unsigned long long int) arr_0 [i_0 - 2])))), (((/* implicit */unsigned long long int) (signed char)77))))));
        var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((arr_3 [i_0 - 2] [i_0 + 2]), (((/* implicit */unsigned char) ((var_13) >= (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 2]))))))))), (((((var_13) & (((/* implicit */long long int) 1386078476)))) | (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 2])))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (((-(((/* implicit */int) (signed char)77)))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [(unsigned char)21])))))))) <= (((unsigned long long int) (!(var_14))))));
        /* LoopNest 3 */
        for (long long int i_2 = 1; i_2 < 8; i_2 += 3) 
        {
            for (unsigned short i_3 = 4; i_3 < 8; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */int) ((signed char) arr_1 [i_4] [i_4]))) ^ ((~(((/* implicit */int) var_14)))))))));
                            arr_17 [i_1] [i_5] [i_1] [i_4] [i_5] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23986))) : (var_3)))));
                            arr_18 [i_1] [i_2 + 2] [i_2 + 2] [i_4] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((var_5) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) (signed char)77))))) / (var_3)));
                            var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_3] [i_3])) & (((/* implicit */int) (unsigned char)134))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) : (((((/* implicit */_Bool) var_15)) ? (var_3) : (var_0)))));
                        }
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            arr_23 [i_3] [(unsigned short)4] [i_3] [i_4] [i_6 + 1] &= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) == (9223372036854775787LL)))) - (((/* implicit */int) var_2))));
                            var_24 &= ((/* implicit */unsigned long long int) ((arr_6 [i_6 + 1]) || (var_11)));
                        }
                        for (long long int i_7 = 1; i_7 < 9; i_7 += 4) 
                        {
                            arr_26 [i_3] [i_3] [i_3 - 2] [i_3 - 1] [i_3] [i_1] = var_5;
                            arr_27 [i_1] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) arr_14 [(_Bool)1] [i_7 - 1] [i_7] [i_7] [i_7] [i_7 - 1])) : (((/* implicit */int) (unsigned char)63))))) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) (signed char)1))));
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) arr_6 [i_1]))))))));
                            arr_28 [i_1] [i_1] [(signed char)0] [i_1] [(_Bool)1] [i_4] [i_7] = (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)23986)), (((((/* implicit */unsigned long long int) 7202054016723591193LL)) | (var_8)))))));
                        }
                        var_26 = ((/* implicit */unsigned short) (((+(((/* implicit */int) (!((_Bool)1)))))) << (((((/* implicit */int) min(((unsigned short)23753), (((/* implicit */unsigned short) max((arr_15 [i_1] [i_2 + 1] [i_3 + 2] [i_4] [i_2]), (arr_5 [i_4]))))))) - (207)))));
                        var_27 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_1] [i_3] [i_3 - 4] [i_2])) >> (((/* implicit */int) ((_Bool) arr_11 [i_3] [i_3] [i_3 + 2] [i_4])))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (signed char i_8 = 3; i_8 < 8; i_8 += 3) 
        {
            var_28 = ((var_6) > (((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_15), (((/* implicit */signed char) (_Bool)0))))) | (((/* implicit */int) ((_Bool) var_7)))))));
            var_29 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) 10249420669598760793ULL)) || (var_1)))), (min((var_7), (((/* implicit */long long int) (_Bool)1))))))) & (var_8)));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_33 [i_1] [i_1] [i_9] = ((/* implicit */unsigned int) ((((var_9) ? (((var_10) & (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) var_7)))) != (((((_Bool) arr_15 [i_1] [i_1] [i_1] [i_9] [i_1])) ? (min((((/* implicit */unsigned long long int) var_5)), (var_10))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_9])) ? (((/* implicit */int) (unsigned short)41549)) : (((/* implicit */int) arr_24 [i_1] [i_9] [i_1] [i_1] [i_1] [1LL])))))))));
            /* LoopSeq 3 */
            for (int i_10 = 3; i_10 < 9; i_10 += 3) 
            {
                arr_37 [i_1] = ((/* implicit */int) var_2);
                var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_11 [i_10 - 2] [(unsigned char)8] [(unsigned char)8] [i_1])) : (((/* implicit */int) arr_13 [i_10 + 1] [i_10] [i_10 - 3] [i_1]))))) ? (((long long int) arr_11 [i_10 - 3] [(_Bool)1] [(_Bool)1] [i_9])) : (((/* implicit */long long int) ((/* implicit */int) max((arr_25 [(unsigned char)8] [i_10 - 2] [i_10]), (arr_25 [i_10 - 3] [i_10 - 2] [i_1]))))))))));
            }
            /* vectorizable */
            for (unsigned short i_11 = 4; i_11 < 8; i_11 += 3) 
            {
                arr_42 [(signed char)7] [i_1] [i_11 - 3] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) arr_13 [i_1] [5ULL] [i_1] [i_1])) ? (((/* implicit */long long int) 1103625965)) : (arr_0 [i_1]))));
                /* LoopNest 2 */
                for (signed char i_12 = 0; i_12 < 10; i_12 += 1) 
                {
                    for (unsigned int i_13 = 0; i_13 < 10; i_13 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_1])) || (arr_30 [i_1])));
                            arr_49 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((var_1) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_9] [i_9] [i_11]))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                            var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_39 [i_11 - 2] [i_11 - 1] [i_13] [i_11 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) : (((/* implicit */int) arr_29 [i_11 - 1])))))));
                        }
                    } 
                } 
            }
            for (signed char i_14 = 0; i_14 < 10; i_14 += 4) 
            {
                var_33 ^= ((/* implicit */long long int) ((unsigned char) (+(min((var_6), (8637996536555942176ULL))))));
                var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_1] [i_1] [i_1] [i_14] [i_1] [i_1])) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551608ULL)) ? (((/* implicit */int) (signed char)49)) : (((/* implicit */int) arr_25 [i_1] [i_9] [i_9]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_1]))) + (9808747537153609447ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) arr_15 [i_1] [i_9] [(unsigned short)1] [i_14] [i_14])))) || (((/* implicit */_Bool) ((var_8) >> (((arr_4 [i_1] [i_1]) - (10722804809234562894ULL)))))))))))))));
                /* LoopSeq 1 */
                for (unsigned int i_15 = 3; i_15 < 8; i_15 += 4) 
                {
                    arr_56 [i_1] [i_1] = ((/* implicit */_Bool) arr_11 [(signed char)3] [i_1] [i_15] [i_15 + 2]);
                    var_35 = ((/* implicit */_Bool) min((var_35), ((!(((_Bool) ((var_4) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [3ULL] [i_14]))))))))));
                }
            }
            var_36 = ((/* implicit */int) max((((long long int) (+(((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) ((unsigned short) max((arr_32 [i_1]), (var_15)))))));
        }
    }
}
