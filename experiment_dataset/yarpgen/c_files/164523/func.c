/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164523
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 + 3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2] [i_1]))))) : (((/* implicit */int) arr_4 [i_0 - 2] [i_0 - 4]))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((/* implicit */int) ((unsigned char) arr_3 [i_0]))) >= ((~(((/* implicit */int) arr_4 [(unsigned short)11] [(unsigned short)11])))))))));
                        var_14 = ((/* implicit */unsigned int) arr_0 [i_0 + 2]);
                    }
                    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        var_15 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)(-127 - 1)))));
                        var_16 = ((/* implicit */unsigned long long int) arr_10 [i_4] [i_2] [i_0] [i_2] [i_1] [i_0]);
                        var_17 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_9 [i_0] [(signed char)0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (arr_1 [9ULL] [(unsigned short)5])))));
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) || (arr_10 [i_4] [i_1] [i_1] [i_1] [i_1] [(unsigned short)11])));
                        var_19 = ((((/* implicit */_Bool) arr_6 [i_4] [i_2] [(unsigned short)10] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_1])) && (((/* implicit */_Bool) var_2))))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) < (((/* implicit */int) arr_0 [i_0]))))));
                    }
                    var_20 = ((/* implicit */unsigned int) var_5);
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_0 [i_0 + 1]) ? (((/* implicit */int) arr_4 [i_0 - 2] [i_0])) : (((/* implicit */int) var_7))))) ? (((unsigned long long int) min((((/* implicit */signed char) (_Bool)1)), (var_2)))) : (min((((/* implicit */unsigned long long int) var_1)), (arr_11 [i_0] [i_1] [i_5] [i_0])))));
                    var_22 = ((/* implicit */unsigned short) min((arr_11 [i_0 - 2] [i_0 - 2] [i_0] [i_0]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_0 - 3])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        for (int i_7 = 0; i_7 < 12; i_7 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) ((8ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                                arr_18 [(unsigned short)10] [2ULL] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) min((var_10), (((/* implicit */int) (signed char)-113))))))));
                                var_24 = ((/* implicit */unsigned char) arr_13 [(signed char)6] [i_1] [i_0] [i_0]);
                            }
                        } 
                    } 
                }
                for (unsigned int i_8 = 0; i_8 < 12; i_8 += 2) 
                {
                    var_25 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_6 [i_0 - 4] [i_0 - 4] [i_0 - 1] [i_0 - 3])), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) % (max((((/* implicit */unsigned long long int) arr_7 [i_8])), (var_5)))))));
                    var_26 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) arr_8 [(unsigned char)4] [i_1] [8] [i_8]))))) * ((~(((/* implicit */int) arr_15 [i_0] [(unsigned char)8] [i_8] [7ULL] [i_8] [i_8])))))) * (((/* implicit */int) (!((_Bool)1))))));
                }
                var_27 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_9))))))));
                var_28 ^= max((((/* implicit */int) (unsigned short)7663)), ((+(((/* implicit */int) (unsigned short)22114)))));
                /* LoopSeq 1 */
                for (signed char i_9 = 2; i_9 < 10; i_9 += 2) 
                {
                    var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (-(min((((/* implicit */unsigned long long int) (-(268435455U)))), (arr_1 [i_0 - 2] [i_0 - 3]))))))));
                    var_30 = ((/* implicit */_Bool) ((short) ((((/* implicit */int) arr_19 [i_0] [i_9 - 2] [i_0 - 4] [i_0])) != (((/* implicit */int) arr_19 [i_0] [i_9 - 2] [i_0 + 2] [i_9 - 2])))));
                    var_31 = ((/* implicit */unsigned char) arr_13 [i_0] [8ULL] [i_1] [(_Bool)1]);
                }
                /* LoopNest 3 */
                for (unsigned short i_10 = 0; i_10 < 12; i_10 += 2) 
                {
                    for (int i_11 = 3; i_11 < 11; i_11 += 2) 
                    {
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            {
                                var_32 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) min((arr_8 [i_0 - 2] [i_0 - 2] [i_10] [i_0 - 2]), (arr_8 [i_0 - 1] [(unsigned short)9] [i_12] [i_12]))))));
                                var_33 = ((max((((unsigned long long int) arr_15 [i_0 - 1] [0] [i_10] [i_10] [i_11 - 2] [i_12 - 1])), (((((/* implicit */_Bool) arr_14 [i_0] [i_10] [i_11] [i_12])) ? (((/* implicit */unsigned long long int) var_10)) : (arr_11 [i_10] [i_10] [i_10] [i_10]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))));
                                arr_32 [i_12] = ((/* implicit */int) var_7);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_34 = ((/* implicit */unsigned char) (_Bool)1);
}
