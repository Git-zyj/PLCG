/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170346
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
    var_14 |= (+(max((((/* implicit */unsigned int) var_5)), (((((/* implicit */_Bool) 1739760446U)) ? (2555206850U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        arr_8 [i_0] [i_0] [(_Bool)1] [i_2] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0 - 2] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 - 1] [i_0] [i_0] [i_0]))) : (4745991077164473481LL)));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((-1254475037457217478LL) / (((/* implicit */long long int) 2555206850U))))) < (939778812126144023ULL)));
                            var_16 = ((((/* implicit */_Bool) var_2)) ? (((unsigned long long int) var_6)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_3 [i_0] [i_0])))))));
                            var_17 = ((/* implicit */unsigned int) ((arr_12 [i_1] [i_1] [i_0 - 2] [i_0] [i_0] [i_0] [i_0]) < (arr_12 [2] [i_1] [i_0 - 3] [i_0 - 2] [i_0] [i_0 - 1] [i_0])));
                        }
                        for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
                        {
                            arr_15 [i_0] [i_2] [i_3] [i_2] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                            arr_16 [i_5] [i_2] [(signed char)11] [i_2] [i_2] [i_0 - 3] = ((/* implicit */long long int) (+(arr_1 [i_1])));
                        }
                    }
                    for (unsigned char i_6 = 4; i_6 < 10; i_6 += 2) 
                    {
                        arr_19 [i_0] [i_1] [i_2] [i_6] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_6 [5ULL] [i_1] [i_2] [i_2])) || (((/* implicit */_Bool) var_4)))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)72))) : (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((17057616413598644789ULL), (((/* implicit */unsigned long long int) (short)-20005))))) || (((/* implicit */_Bool) 4745991077164473481LL))))))));
                        arr_20 [i_0] [i_1] [i_2] [i_6] = ((/* implicit */unsigned char) arr_6 [i_0] [i_1] [i_0] [i_6 - 2]);
                    }
                    /* vectorizable */
                    for (long long int i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        var_18 = ((/* implicit */signed char) 2381923058641725235ULL);
                        arr_23 [i_0] [i_2] [i_0] [i_2] [0U] [i_7] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) arr_9 [i_1] [i_1] [i_2] [i_2])) | (((/* implicit */int) var_13)))));
                        var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (arr_14 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) != (arr_10 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 2])));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        arr_26 [i_0] [i_1] [i_8] [11ULL] [i_2] = ((/* implicit */short) (+((+(arr_1 [i_0])))));
                        var_20 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9125092570176405097LL)) ? (-1254475037457217478LL) : (((/* implicit */long long int) var_9))))), (((1389127660110906827ULL) & (min((var_6), (((/* implicit */unsigned long long int) arr_4 [(_Bool)1] [i_2] [i_2])))))));
                        var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_2]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_8] [i_2] [i_0 - 2] [i_0 - 2])) ? (arr_1 [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (1389127660110906827ULL) : (arr_22 [i_1] [i_1])))));
                        var_22 = arr_18 [i_2] [i_2];
                    }
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 12; i_9 += 2) 
                    {
                        for (signed char i_10 = 0; i_10 < 12; i_10 += 1) 
                        {
                            {
                                var_23 = ((((/* implicit */_Bool) ((9223372036854775802LL) << (((1389127660110906849ULL) - (1389127660110906849ULL)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) / (arr_25 [i_0 - 2] [i_0 + 1] [9ULL]))) : (((arr_25 [i_0] [i_0 + 1] [i_0]) & (arr_25 [(signed char)8] [i_0 + 1] [i_2]))));
                                var_24 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_3)) + (16064821015067826354ULL)))) ? (((/* implicit */unsigned long long int) max((1254475037457217474LL), ((+(arr_32 [i_0] [i_0] [i_0 - 3] [i_0] [i_2])))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (((var_7) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                                arr_34 [i_0] [i_1] [i_2] [i_1] [i_2] = (+(((/* implicit */int) (unsigned char)104)));
                                var_25 = ((/* implicit */long long int) var_2);
                            }
                        } 
                    } 
                    var_26 |= ((/* implicit */_Bool) ((short) ((((/* implicit */int) (signed char)32)) / (((/* implicit */int) (unsigned char)3)))));
                    var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (+(var_6))))));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((var_8) ^ (((/* implicit */long long int) 892044469U))))))) ? (((/* implicit */unsigned long long int) var_10)) : (((((/* implicit */_Bool) var_1)) ? ((+(2381923058641725262ULL))) : (((/* implicit */unsigned long long int) max((var_10), (var_9))))))));
}
