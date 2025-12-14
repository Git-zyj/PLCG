/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162707
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            var_11 = ((/* implicit */int) var_3);
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                for (long long int i_3 = 2; i_3 < 11; i_3 += 4) 
                {
                    {
                        arr_12 [i_2] [i_1] [4] [4] [i_1] = ((/* implicit */unsigned long long int) (-(1006764078)));
                        var_12 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_4)))) >> (((((((/* implicit */_Bool) arr_2 [i_2] [i_1])) ? (((/* implicit */int) arr_1 [i_0])) : (arr_5 [1U] [i_1] [i_1] [i_3 - 1]))) - (216)))))) / (((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2] [i_1 - 1])) ? (1135543644418825325ULL) : (((/* implicit */unsigned long long int) arr_9 [i_0])))))));
                        arr_13 [i_0] [1U] = ((/* implicit */signed char) (!(((((/* implicit */_Bool) max((arr_6 [i_1 + 1] [i_2] [i_3 - 1]), (((/* implicit */unsigned int) var_10))))) || (((/* implicit */_Bool) ((unsigned int) var_6)))))));
                        arr_14 [i_0] [6] [i_1 + 1] [i_2] [i_2] [i_1 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775787LL)) ? (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (236930552475301407LL))) : (arr_11 [i_0] [i_1] [i_2] [1U] [i_3 - 1])));
                        var_13 = (+(var_9));
                    }
                } 
            } 
            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1 - 1])) ? (arr_11 [i_0] [i_1 - 1] [i_0] [(unsigned char)3] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))) ? (arr_2 [i_0] [i_1 - 1]) : ((+(arr_6 [(signed char)11] [i_1 - 1] [(signed char)11])))));
        }
        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 1) 
        {
            var_15 = ((/* implicit */int) max((((((/* implicit */_Bool) (unsigned short)23891)) ? (arr_6 [i_4] [i_4] [i_0]) : (((/* implicit */unsigned int) arr_0 [i_0] [i_4])))), (((unsigned int) ((((/* implicit */_Bool) arr_6 [(signed char)11] [i_4] [(signed char)11])) ? (arr_6 [1LL] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 13; i_5 += 2) 
            {
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned int i_7 = 2; i_7 < 9; i_7 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (arr_11 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1])))) ? (((((/* implicit */_Bool) arr_11 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1])) ? (arr_11 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1]) : (var_1))) : (((((/* implicit */_Bool) var_10)) ? (arr_11 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                            var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((var_0) ? (arr_0 [10LL] [i_4]) : (((/* implicit */int) var_3))))) ? (arr_2 [i_7] [i_7 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) var_4)))))))) >> (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) / (((((/* implicit */_Bool) var_10)) ? (var_9) : (arr_22 [(short)2] [i_4] [i_0] [i_6])))))));
                            arr_27 [i_5] [i_4] [i_4] [i_4] [i_7 + 2] |= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */int) var_4)) * (((/* implicit */int) arr_18 [i_0] [i_4] [i_5] [12ULL])))), (((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) var_4)))))))) ? (((/* implicit */int) (signed char)45)) : (arr_10 [i_0] [i_4] [i_5] [i_6] [i_6])));
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)14834)) ? (134217727LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_5))))))) ? (((((/* implicit */int) arr_1 [i_6 - 1])) + (((/* implicit */int) var_8)))) : (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) 1874325634U)))))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_8 = 0; i_8 < 13; i_8 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (long long int i_10 = 0; i_10 < 13; i_10 += 4) 
                {
                    {
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [(unsigned short)10] [i_8])) && (((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned int) arr_0 [(_Bool)1] [(_Bool)1])))))));
                        var_20 ^= ((/* implicit */short) (((_Bool)1) || ((_Bool)1)));
                        arr_34 [i_9] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [4U] [3U] [i_10]))) / (((unsigned int) var_1))));
                    }
                } 
            } 
            arr_35 [i_0] = ((/* implicit */int) max(((~(arr_25 [i_0] [1U] [i_8] [i_8] [i_8]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))))));
            var_21 = ((/* implicit */unsigned int) min((max((((((/* implicit */_Bool) arr_23 [i_0] [i_8] [i_8] [1U] [i_8] [i_8])) ? (((/* implicit */long long int) var_5)) : (arr_3 [i_0] [i_0] [i_8]))), (((/* implicit */long long int) var_9)))), (min((4846843131202304238LL), (((/* implicit */long long int) -935343547))))));
            var_22 = arr_8 [i_0] [i_0] [12LL] [12LL];
        }
        var_23 &= ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_23 [0U] [i_0] [0U] [i_0] [i_0] [i_0]))))), ((-(var_9)))));
        var_24 += ((((/* implicit */_Bool) (+(arr_24 [i_0] [i_0] [i_0] [i_0] [8U] [i_0] [0LL])))) ? ((~(arr_24 [i_0] [i_0] [i_0] [i_0] [6U] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
    }
    var_25 = ((/* implicit */long long int) ((var_5) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */int) var_3)) == (((/* implicit */int) var_2))))))))));
}
