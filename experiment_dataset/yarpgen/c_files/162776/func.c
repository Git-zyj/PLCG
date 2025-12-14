/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162776
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
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */int) ((signed char) arr_3 [i_0] [i_0] [i_0]));
                                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) min((((/* implicit */unsigned char) arr_7 [i_0] [i_2])), (arr_9 [i_2])))))))))));
                                var_15 = ((/* implicit */unsigned char) ((int) (-(((/* implicit */int) arr_9 [i_3])))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1 - 1] [i_1 - 1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (_Bool)0)))), (min((((/* implicit */int) arr_10 [7] [1U] [i_0] [i_0])), (543455851)))))) ? (((((/* implicit */_Bool) ((unsigned short) var_1))) ? (((/* implicit */int) arr_12 [i_1] [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_1 + 1])) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_7)))))) : (max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (var_4))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_12 [i_0] [10] [i_0] [10U] [i_0])), ((unsigned short)40655))))))));
                    var_16 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_5)))) >= (((((/* implicit */_Bool) arr_8 [i_1 - 3] [i_1 + 1] [i_1] [10LL])) ? (((/* implicit */int) arr_8 [i_1 + 1] [i_1 - 1] [i_1] [12LL])) : (((/* implicit */int) arr_8 [i_1 + 1] [i_1 + 1] [12] [i_1]))))));
                    var_17 += ((/* implicit */signed char) ((var_2) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1 - 2] [i_2])) : (((arr_5 [i_0] [16ULL] [i_2]) ? ((~(arr_4 [i_0] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [9LL] [9LL] [i_1 - 3])))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 23; i_5 += 4) 
    {
        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            {
                arr_20 [(unsigned char)21] [16U] [(signed char)15] = ((/* implicit */int) ((_Bool) (!(var_3))));
                arr_21 [18U] [i_6] [i_6] = ((/* implicit */long long int) arr_13 [i_5] [i_5] [i_5] [(short)1] [(short)1] [i_6]);
                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((_Bool) ((arr_2 [i_5] [i_6]) & (arr_2 [i_6] [(_Bool)1])))))));
                /* LoopNest 2 */
                for (long long int i_7 = 1; i_7 < 22; i_7 += 4) 
                {
                    for (unsigned long long int i_8 = 4; i_8 < 22; i_8 += 2) 
                    {
                        {
                            arr_27 [i_5] [14ULL] [22] [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_7 - 1] [i_7 + 1] [i_8 - 1])) ? (arr_22 [i_7 - 1] [i_7 + 1] [i_8 - 2]) : (arr_22 [i_7 + 1] [i_7 - 1] [i_8 - 1])))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_0)))) ? ((+(arr_26 [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                            var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [9] [i_5])) ^ (((/* implicit */int) arr_11 [i_5] [(signed char)0]))))) ? (((/* implicit */int) arr_9 [i_7 + 1])) : (min((var_4), (((/* implicit */int) var_12))))))) != ((-(((arr_4 [18U] [i_8 - 1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45296)))))))));
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_10 [i_6] [i_7 - 1] [(_Bool)1] [(unsigned short)11])) : (arr_22 [i_7] [i_7 - 1] [i_8])))) ? (min(((~(((/* implicit */int) (unsigned char)219)))), ((+(((/* implicit */int) arr_5 [i_5] [(unsigned char)10] [i_8])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_5] [i_6] [i_5]))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) min((((var_2) ? (((var_9) | (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) 3405563763U)))), (((/* implicit */long long int) (signed char)109))));
    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) var_0))));
}
