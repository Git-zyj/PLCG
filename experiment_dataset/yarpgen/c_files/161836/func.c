/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161836
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
    var_19 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) & (((((/* implicit */_Bool) 1146700313U)) ? (((/* implicit */unsigned long long int) ((unsigned int) var_14))) : (0ULL)))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_15))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (((var_1) / (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_17))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
                    {
                        var_21 = ((/* implicit */long long int) (-(280703228)));
                        var_22 = ((/* implicit */int) ((((arr_9 [i_1] [i_1] [i_1] [(short)17] [i_1]) >> (((arr_9 [i_0] [i_1] [i_2] [i_2] [(unsigned short)0]) - (823276287U))))) >> (((min((arr_9 [(unsigned short)4] [i_1] [(unsigned short)4] [i_1] [(_Bool)1]), (arr_9 [(unsigned short)5] [i_3] [i_2] [i_1] [i_0]))) - (823276306U)))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_16 [i_0] [i_0] [i_0] [8] [2LL] [i_1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (((unsigned long long int) var_17)))))));
                            arr_17 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_2] = ((/* implicit */int) arr_5 [i_0]);
                        }
                        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) 
                        {
                            var_24 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 0LL)) || ((_Bool)0)))) > ((((_Bool)1) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_5])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_3]))))));
                            arr_20 [i_2] [i_1] [i_2] [i_0] [i_2] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((var_13) ? (((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0] [(unsigned char)15] [i_0])) : (arr_6 [(unsigned char)3])))))) ? (var_17) : (((((/* implicit */_Bool) var_14)) ? (((arr_0 [i_0] [i_0]) ? (var_4) : (((/* implicit */int) (unsigned char)9)))) : ((-(((/* implicit */int) (unsigned char)9))))))));
                            var_25 = ((/* implicit */long long int) ((unsigned char) min((arr_11 [i_5] [3ULL] [i_1] [i_0]), (((/* implicit */unsigned short) ((short) -6091284054926357069LL))))));
                        }
                    }
                    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 4) /* same iter space */
                    {
                        arr_23 [15] [(signed char)10] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_13 [i_6] [i_2] [(unsigned char)7] [8] [i_1] [i_1] [i_0]), (((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_1])) ? (arr_14 [i_0] [(signed char)4] [(_Bool)1] [i_0] [i_2]) : (((/* implicit */unsigned long long int) arr_7 [i_2] [i_2] [i_2]))))))) ? (max((((((/* implicit */_Bool) 4611404543450677248ULL)) ? (18446744073709551601ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)43))))), (((/* implicit */unsigned long long int) arr_4 [i_2] [i_2] [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_11 [i_6] [i_1] [i_2] [i_6]))))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-53))) : (arr_8 [i_2] [2ULL] [i_1] [i_2]))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) var_12)), (var_1)))))))));
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */unsigned long long int) arr_7 [i_0] [i_6] [i_6])) + (16ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) -6091284054926357069LL)))))))));
                    }
                    for (short i_7 = 0; i_7 < 18; i_7 += 1) 
                    {
                        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) min((((/* implicit */int) (unsigned short)0)), (var_4))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) arr_21 [i_0] [i_0] [i_1] [i_7])) ^ (9223372036854775803LL)))) ? (arr_9 [i_0] [i_0] [i_1] [i_2] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((unsigned char) arr_19 [(signed char)13] [i_1] [(signed char)11] [i_2] [(signed char)11] [i_7]))) : (((/* implicit */int) arr_5 [i_0])))))));
                        var_28 = ((/* implicit */signed char) arr_12 [i_0] [i_1] [4] [i_7] [i_2]);
                    }
                    arr_26 [i_1] [i_1] [i_0] [i_0] |= ((/* implicit */unsigned char) arr_13 [i_1] [i_1] [i_1] [(signed char)14] [i_1] [(signed char)14] [i_1]);
                }
            } 
        } 
    } 
}
