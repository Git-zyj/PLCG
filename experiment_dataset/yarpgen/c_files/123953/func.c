/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123953
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 - 2] [10ULL]))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -507455182)) ? (((/* implicit */int) (signed char)-63)) : (arr_5 [3ULL] [i_1] [i_2])))) ? (((/* implicit */long long int) ((((((/* implicit */int) var_13)) + (2147483647))) << (((((((/* implicit */int) var_13)) + (5279))) - (9)))))) : (((((/* implicit */_Bool) var_1)) ? (-4869616826475067001LL) : (arr_7 [i_0 + 3] [i_1] [i_2])))));
                    arr_9 [i_0] = ((/* implicit */signed char) var_1);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_15 [i_3] [i_1] [i_2] = ((/* implicit */int) ((unsigned long long int) ((unsigned short) arr_0 [(unsigned char)16])));
                                var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) -4869616826475066998LL)) & (10501305713078192676ULL)));
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 - 3] [i_0 + 2])) : (((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 2]))));
                                arr_16 [i_0 - 1] [i_1] [2] [i_1] [i_1] = ((/* implicit */unsigned char) arr_7 [i_0 - 3] [i_0 - 3] [i_0 - 3]);
                                arr_17 [i_0 + 1] [i_1] [i_2] [i_2] [i_2] [i_4] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_18 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_2 [i_0 - 2] [i_0 + 2])) : (((/* implicit */int) arr_2 [i_0] [i_0 + 1]))));
        var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [i_0 - 3] [i_0])) : (((/* implicit */int) arr_2 [i_0 - 3] [i_0]))))));
    }
    for (int i_5 = 2; i_5 < 12; i_5 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_6 = 4; i_6 < 12; i_6 += 4) 
        {
            for (long long int i_7 = 0; i_7 < 14; i_7 += 3) 
            {
                for (unsigned int i_8 = 0; i_8 < 14; i_8 += 4) 
                {
                    {
                        arr_30 [i_5 - 1] [i_5] [i_5] [(unsigned char)4] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) max((arr_0 [i_5]), (((/* implicit */int) arr_12 [i_5 + 2] [i_5] [(unsigned char)3] [i_6] [9ULL] [i_8]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_5 + 2] [i_6 - 2]))) : (((((/* implicit */_Bool) (unsigned short)128)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)65))) : (4294967277U))))));
                        arr_31 [i_5] [i_6 + 2] [i_7] [i_8] [i_5] = min((((var_15) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [i_5])) < (arr_21 [i_5 + 1]))))))), (((/* implicit */unsigned long long int) ((unsigned int) arr_22 [i_8]))));
                        /* LoopSeq 2 */
                        for (unsigned char i_9 = 0; i_9 < 14; i_9 += 1) 
                        {
                            var_20 = ((/* implicit */long long int) var_0);
                            var_21 = ((/* implicit */unsigned char) min((((/* implicit */int) arr_2 [i_5] [i_5 - 2])), ((-(-1)))));
                        }
                        for (int i_10 = 4; i_10 < 13; i_10 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) min((-4869616826475067008LL), (((/* implicit */long long int) 8191U)))))));
                            var_23 = ((/* implicit */short) ((signed char) ((((/* implicit */int) arr_36 [i_5 - 1] [i_6 + 1] [i_7] [i_8] [i_10] [i_10 + 1])) & (((/* implicit */int) arr_36 [i_5 - 1] [i_6 - 1] [i_7] [i_7] [i_6 - 1] [i_10 + 1])))));
                        }
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)132)) ? (3684214162136117606LL) : (((/* implicit */long long int) 367615746))));
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) arr_12 [(unsigned short)8] [i_5] [i_5] [i_5] [i_5] [i_5]))));
    }
    for (unsigned short i_11 = 1; i_11 < 16; i_11 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 3) 
        {
            for (int i_13 = 0; i_13 < 18; i_13 += 2) 
            {
                for (long long int i_14 = 1; i_14 < 17; i_14 += 2) 
                {
                    {
                        arr_48 [i_14] [i_14] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_3)), (min((arr_14 [(signed char)10] [i_11 + 2] [i_11 + 1] [i_11 + 1] [(short)7]), (arr_14 [i_11] [(unsigned short)1] [i_11] [i_11 + 1] [i_11])))));
                        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_3)) ? (arr_0 [i_11]) : (((/* implicit */int) (signed char)(-127 - 1))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_12] [i_12] [i_14 - 1])) ? (var_2) : (((/* implicit */unsigned long long int) var_10))))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_11] [i_13]))))))))));
                        arr_49 [i_11 + 1] [i_12] [i_14] [i_13] = ((/* implicit */_Bool) min((var_9), (((((/* implicit */_Bool) arr_14 [i_11] [i_12] [i_13] [i_14] [(_Bool)1])) ? (((arr_2 [i_11] [i_12]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5)))) : (arr_42 [i_13] [i_14 + 1] [i_11 + 1])))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */short) var_6);
        arr_50 [(short)15] [i_11] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_43 [i_11 + 2] [i_11 + 2] [i_11 + 1] [i_11 - 1])) * (((/* implicit */int) arr_43 [i_11 + 2] [i_11 - 1] [i_11 + 1] [i_11 - 1]))))) ? (((/* implicit */int) min((arr_12 [i_11] [i_11] [i_11 - 1] [i_11 - 1] [i_11] [i_11 - 1]), (arr_12 [i_11 - 1] [i_11] [i_11] [i_11] [i_11] [i_11])))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_12 [i_11 + 1] [(_Bool)1] [i_11] [i_11 - 1] [i_11 - 1] [i_11 - 1])) : (((/* implicit */int) arr_12 [i_11 + 1] [i_11 + 1] [i_11] [i_11] [i_11] [i_11])))));
    }
    var_28 = ((/* implicit */signed char) var_15);
}
