/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182641
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] = ((/* implicit */short) (-(((/* implicit */int) (signed char)-118))));
                    arr_8 [(unsigned char)14] [(unsigned char)14] [(unsigned short)22] [(unsigned char)14] &= ((/* implicit */unsigned char) (+(min((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)30718)))), (((((/* implicit */int) (signed char)-75)) - (((/* implicit */int) (signed char)117))))))));
                    /* LoopSeq 4 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 1; i_4 < 23; i_4 += 3) 
                        {
                            var_13 = ((/* implicit */unsigned char) (signed char)-113);
                            var_14 += ((long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (max((((/* implicit */long long int) (short)-25235)), (-1027423301706898259LL))) : (((/* implicit */long long int) ((/* implicit */int) max((var_2), ((signed char)-106)))))));
                        }
                        for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
                        {
                            var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (signed char)-118))));
                            var_16 = ((/* implicit */signed char) var_1);
                            arr_15 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] [i_5] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((unsigned short) (signed char)-113))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_5] [i_3] [i_0] [i_0]))))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_6 = 1; i_6 < 24; i_6 += 2) 
                        {
                            var_17 += ((/* implicit */unsigned char) (~(((/* implicit */int) ((var_6) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30691))))))));
                            var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
                            arr_19 [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (unsigned char)216);
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_13 [18ULL] [i_6 + 1]);
                        }
                        arr_21 [(short)15] [(short)15] [(signed char)5] [i_1] [(signed char)5] [(short)8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
                        var_19 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_2 + 1] [i_2 + 3] [i_0])) & (((/* implicit */int) arr_11 [i_2 - 1] [i_2 - 2] [i_1]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_14 [i_0] [9ULL] [9ULL] [i_0] [9ULL] [i_0] [(short)8])))) / ((~(var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(signed char)24] [i_2 + 1] [i_2 - 2])))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned char) ((signed char) arr_23 [i_0] [i_0] [3ULL] [3ULL]));
                        arr_24 [i_0] [i_0] [i_2 + 3] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_7] [i_2 + 2] [i_0])) ? (((/* implicit */int) var_0)) : ((-(((/* implicit */int) var_9)))))))));
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-118)) / (((/* implicit */int) arr_0 [i_0]))))) ? (arr_18 [i_2 + 1] [i_2 + 1] [i_2 - 2]) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)121))))))), (((/* implicit */long long int) max((arr_14 [i_2 - 1] [i_2 + 3] [i_2] [i_2] [i_2] [i_2 - 2] [i_2 - 2]), (((/* implicit */short) arr_12 [(unsigned char)0] [i_2 + 2] [i_2] [i_2] [i_2 + 2]))))))))));
                    }
                    for (unsigned short i_8 = 2; i_8 < 24; i_8 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) var_0);
                        var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_2 - 2])) + (((/* implicit */int) arr_1 [i_2 - 2])))))));
                        var_24 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_6))) < (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_11 [i_2 - 1] [i_2 + 1] [i_2 + 2])) : (((/* implicit */int) arr_11 [i_2 + 3] [i_2 + 2] [i_2 + 3])))))));
                        var_25 = ((/* implicit */unsigned long long int) arr_17 [i_8 + 1] [i_8] [i_0] [i_0] [i_0]);
                    }
                    for (unsigned short i_9 = 0; i_9 < 25; i_9 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_10 = 2; i_10 < 23; i_10 += 4) 
                        {
                            arr_35 [i_0] [i_0] [i_2] [i_2] [i_2] [i_0] [i_10 + 1] = ((/* implicit */signed char) ((long long int) min((((/* implicit */long long int) (+(((/* implicit */int) var_10))))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)8429))) + (arr_27 [i_0] [i_0] [i_0] [i_0]))))));
                            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (signed char)77))));
                        }
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            var_27 = ((/* implicit */short) ((unsigned char) min((5086424341487707757ULL), (9402738883549479986ULL))));
                            var_28 |= ((/* implicit */unsigned long long int) (!((!(((arr_34 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_9 [i_0] [i_0] [i_0] [i_0]), (arr_9 [i_0] [i_0] [i_2 - 1] [i_9])))) ? ((-(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_12 [i_2] [i_2] [19LL] [19LL] [i_2]))));
                            arr_39 [i_0] [i_1] [i_0] &= ((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_9))))))))));
                        }
                        /* vectorizable */
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            arr_42 [i_0] [(signed char)22] [i_0] [i_0] [i_12] [i_2] [i_0] = ((((/* implicit */int) arr_23 [i_0] [i_1] [i_2 - 2] [i_12 - 1])) < (((/* implicit */int) ((((/* implicit */int) (short)1129)) >= (((/* implicit */int) (signed char)-116))))));
                            arr_43 [i_2] [i_9] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_11 [i_0] [i_2] [i_2]))));
                        }
                        var_30 = ((/* implicit */short) (+(((((/* implicit */int) (short)32767)) - (((/* implicit */int) arr_31 [i_9] [i_2 - 1] [i_9] [i_9] [i_2 - 1]))))));
                    }
                }
            } 
        } 
    } 
    var_31 *= ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned char)122)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)28354))))) : (var_12)))));
}
