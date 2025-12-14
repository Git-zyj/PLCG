/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165881
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
    var_19 &= ((/* implicit */short) ((((int) var_14)) <= (((/* implicit */int) ((var_12) && (((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (var_15)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (-(((var_15) | (((/* implicit */long long int) ((/* implicit */int) var_13))))))))));
                arr_8 [12] [12] [i_1] [i_2] &= ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
            }
            for (int i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                var_21 *= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_9 [i_0 + 1] [i_1] [i_3])) : (var_2)));
                /* LoopSeq 2 */
                for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    arr_13 [i_0] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) (!(var_12)));
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) | (var_2)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8))));
                    arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) var_17))));
                }
                for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (!(((/* implicit */_Bool) -185990977949044326LL)))))));
                    var_24 = ((/* implicit */int) max((var_24), (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [i_3] [i_3] [i_3]))) != (var_0)))) * (((/* implicit */int) var_17))))));
                }
            }
            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((unsigned int) ((var_0) > (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
            arr_18 [i_0] = ((/* implicit */int) var_1);
        }
        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 2) 
        {
            var_26 = ((/* implicit */signed char) ((min((((long long int) var_8)), (((/* implicit */long long int) ((-9223372036854775806LL) != (-185990977949044325LL)))))) ^ (((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_0 - 1] [i_0] [i_0 - 1])))))));
            /* LoopNest 2 */
            for (unsigned int i_7 = 0; i_7 < 16; i_7 += 2) 
            {
                for (unsigned char i_8 = 0; i_8 < 16; i_8 += 2) 
                {
                    {
                        arr_27 [i_0] [i_0] [i_7] [i_8] = ((/* implicit */signed char) max(((unsigned char)25), (((/* implicit */unsigned char) (_Bool)1))));
                        var_27 ^= ((unsigned short) arr_1 [i_0]);
                    }
                } 
            } 
        }
        arr_28 [i_0] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1288016288668932582ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_0]))))) : (max((((/* implicit */long long int) arr_21 [i_0 - 1] [i_0 - 1])), (var_0))))), (((/* implicit */long long int) min((var_17), (var_14))))));
        /* LoopNest 3 */
        for (int i_9 = 2; i_9 < 13; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 1; i_10 < 13; i_10 += 1) 
            {
                for (int i_11 = 0; i_11 < 16; i_11 += 4) 
                {
                    {
                        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_2)) : (arr_24 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 1])))) ? (((/* implicit */unsigned long long int) ((max((var_2), (((/* implicit */int) var_4)))) - (((/* implicit */int) var_17))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)87))) / (18228844381068451509ULL)))));
                        /* LoopSeq 2 */
                        for (short i_12 = 0; i_12 < 16; i_12 += 4) 
                        {
                            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) (signed char)-58))));
                            var_30 *= ((/* implicit */unsigned long long int) arr_32 [i_0 + 1] [i_0 + 1] [i_10 - 1]);
                            var_31 = ((/* implicit */signed char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) 18228844381068451512ULL))))), (((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((/* implicit */long long int) arr_4 [i_0 + 1])) : (var_0)))));
                        }
                        for (signed char i_13 = 1; i_13 < 13; i_13 += 2) 
                        {
                            var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) min(((-(((/* implicit */int) var_8)))), (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (arr_12 [i_9] [i_9] [i_9] [i_10 + 2] [i_10 - 1])))))))));
                            arr_41 [i_0 - 1] [i_13 - 1] [i_11] [i_11] [i_0] [i_11] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)56043))));
                        }
                    }
                } 
            } 
        } 
        arr_42 [i_0] [i_0] = ((/* implicit */_Bool) var_18);
    }
}
