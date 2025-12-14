/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143550
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
    for (signed char i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((((/* implicit */_Bool) ((int) (unsigned short)52338))) ? (-8659384272078108977LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) -2147483644)) ? (arr_8 [i_4] [i_3] [i_2] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))) > (((/* implicit */long long int) ((/* implicit */int) (signed char)25))))))));
                                var_21 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_8 [i_0] [(_Bool)1] [i_1 - 1] [(unsigned short)4])) ? (arr_7 [i_0 + 1] [i_1] [i_1 - 1]) : (((/* implicit */unsigned long long int) arr_15 [(unsigned char)9] [7U] [i_1 + 1])))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2] [7LL])))))) * (arr_1 [i_0 + 1]))) * (((((/* implicit */long long int) 3487045689U)) ^ (1054210277672452826LL)))));
                    var_23 = ((((/* implicit */_Bool) (~(((/* implicit */int) ((arr_8 [i_0] [i_1] [i_2] [(unsigned char)10]) > (((/* implicit */unsigned int) arr_10 [(short)0] [i_0] [i_0] [(short)0] [i_2])))))))) ? (((var_13) + (((/* implicit */long long int) ((int) arr_5 [i_2] [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1 - 2] [i_0 + 1] [i_1] [8LL])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : ((-(arr_10 [2LL] [(unsigned char)3] [i_0] [(unsigned char)3] [i_0])))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) ((var_18) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) << (((var_19) - (2850701179564297211LL)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (var_18)))) : (((/* implicit */int) max((var_16), (var_5)))))))));
    var_25 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((var_15) * (((/* implicit */int) var_3)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))));
    /* LoopSeq 3 */
    for (short i_5 = 0; i_5 < 10; i_5 += 4) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned long long int) ((short) ((((long long int) var_7)) >= (((/* implicit */long long int) ((int) arr_13 [(signed char)2] [i_5] [i_5] [(signed char)2] [i_5]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_6 = 2; i_6 < 9; i_6 += 1) 
        {
            arr_21 [i_5] [i_6] = ((/* implicit */unsigned long long int) ((arr_15 [i_6 - 1] [i_6 + 1] [i_6 - 2]) == (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_6 + 1] [i_6 - 2])))));
            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (arr_6 [i_5] [i_6]) : (var_0)))) : (arr_20 [2LL]))))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_25 [i_5] = ((/* implicit */_Bool) arr_4 [i_5]);
            var_28 *= ((/* implicit */short) var_1);
        }
        var_29 = ((/* implicit */int) min((var_29), ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_5] [i_5])))))))));
    }
    for (short i_8 = 0; i_8 < 10; i_8 += 4) /* same iter space */
    {
        arr_29 [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((arr_0 [(signed char)6] [i_8]) - (((/* implicit */unsigned long long int) arr_28 [i_8]))))))) ? (((((/* implicit */_Bool) arr_13 [i_8] [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (arr_16 [i_8]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_8] [i_8])))));
        arr_30 [4U] [4U] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) arr_2 [i_8])), (arr_7 [i_8] [i_8] [i_8]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_10 [i_8] [3LL] [i_8] [i_8] [(signed char)1]))))));
        arr_31 [i_8] [(signed char)3] = ((/* implicit */signed char) arr_16 [5U]);
    }
    for (unsigned long long int i_9 = 3; i_9 < 7; i_9 += 1) 
    {
        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) (!((!(((((/* implicit */int) var_3)) < (var_14))))))))));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 11; i_10 += 3) 
        {
            for (unsigned char i_11 = 0; i_11 < 11; i_11 += 3) 
            {
                {
                    arr_40 [(_Bool)1] [i_10] [i_11] [i_11] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_9)) ? (var_1) : (var_11))) / (min((((/* implicit */int) var_3)), (arr_12 [i_10] [i_10] [i_11] [i_9]))))) < (((((/* implicit */_Bool) arr_34 [i_9 + 2] [i_9 - 1])) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_16)) : (arr_2 [(short)3]))) : (((/* implicit */int) var_3))))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 11; i_12 += 3) 
                    {
                        for (int i_13 = 4; i_13 < 10; i_13 += 4) 
                        {
                            {
                                arr_47 [(_Bool)0] [i_11] [i_11] [i_11] [7LL] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_46 [i_9 - 3] [i_11] [i_13 - 2]) : (arr_46 [i_9 + 2] [i_11] [i_13 - 2])))) ? (arr_46 [i_9 - 1] [i_11] [i_13 - 3]) : (((/* implicit */int) ((arr_46 [i_9 - 1] [i_11] [i_13 - 1]) == (arr_46 [i_9 + 2] [i_11] [i_13 - 2]))))));
                                var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)61495)) || (((/* implicit */_Bool) 6891245203454626919ULL)))))) ^ (((((/* implicit */unsigned int) arr_11 [i_9] [i_9] [i_9] [i_9 + 2])) & (arr_45 [i_9] [(signed char)8] [i_13] [i_13 - 4] [i_13 + 1]))))))));
                                var_32 = ((((/* implicit */_Bool) ((int) arr_46 [i_9 - 2] [i_11] [i_13 - 1]))) ? (((/* implicit */long long int) arr_10 [4LL] [i_10] [i_10] [(short)8] [4LL])) : (((long long int) min((arr_34 [(unsigned char)9] [i_11]), (((/* implicit */long long int) var_16))))));
                            }
                        } 
                    } 
                    var_33 ^= ((/* implicit */unsigned short) arr_5 [i_10] [i_10]);
                }
            } 
        } 
    }
}
