/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132956
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
    for (signed char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (min((arr_7 [6ULL] [i_1 + 1] [i_1 + 2] [i_1 + 2]), (arr_3 [i_0] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_1] [i_1])) >> (((arr_4 [i_0] [i_0]) + (5266422700481238634LL)))))))) | ((((~(arr_6 [i_0 + 3]))) | (((/* implicit */unsigned long long int) ((long long int) arr_10 [11ULL] [i_2] [i_1]))))))))));
                                var_21 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_6 [i_3 + 2])) ? (max((((/* implicit */unsigned long long int) var_6)), (arr_6 [i_0]))) : (((arr_3 [i_1] [i_2] [i_3]) | (arr_3 [i_3 - 1] [i_1] [i_0])))))));
                                var_22 = ((/* implicit */short) max((arr_1 [i_3]), (((((arr_2 [i_2] [i_1]) && (((/* implicit */_Bool) var_11)))) ? (max((arr_3 [i_0] [i_3] [i_0]), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))));
                                arr_12 [i_0] [i_0] [i_0] [i_0 + 3] [i_0] = ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [i_3 + 2] [i_2])), (arr_3 [(unsigned short)14] [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_6 [i_0]))))) != (((/* implicit */unsigned long long int) arr_4 [(_Bool)1] [i_4])));
                                arr_13 [i_3 - 2] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */unsigned long long int) arr_11 [i_0 + 1] [i_0 + 1] [i_2] [(unsigned char)12] [i_2] [i_4] [i_4])), (arr_6 [i_2]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 - 2] [i_0 - 1]))) - (arr_6 [i_0])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) max((min((((((/* implicit */_Bool) arr_17 [i_0] [i_5] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_8)) : (arr_5 [i_0] [i_1] [13ULL] [i_6]))), (((/* implicit */unsigned long long int) min((arr_10 [i_0] [i_1] [i_0]), (var_3)))))), (((((/* implicit */_Bool) max((((/* implicit */short) arr_2 [i_0] [i_1])), (arr_17 [i_0] [i_0] [i_0] [i_0 - 1])))) ? (arr_16 [i_0 + 1] [i_1 - 2] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_11)), (arr_8 [i_6] [i_6] [i_6] [i_6] [i_6])))))))));
                                arr_21 [i_6] [i_6] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) arr_6 [i_2]);
                                arr_22 [i_1] [i_0 - 1] [i_6] [i_2] [i_6] [i_1] [i_0 - 1] = ((/* implicit */int) arr_15 [i_1 - 2] [i_1] [i_2] [i_5]);
                                arr_23 [(_Bool)1] [i_1] [i_2] [(_Bool)1] [i_5] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_17 [i_1] [(_Bool)1] [i_5] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))) : (arr_6 [i_6]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))))))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) != (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_1 - 1] [i_0]))))), (arr_5 [i_1 - 2] [i_0 + 2] [i_0 - 1] [i_0 - 1])))));
                    var_25 ^= ((/* implicit */unsigned short) min(((~(((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_1] [12LL])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [15LL] [i_1 + 2] [i_1] [i_0]))))) == (max((arr_3 [i_2] [i_1 - 1] [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_1])))))))));
                    var_26 ^= ((/* implicit */short) var_3);
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_15))) | (var_14))) * (min((var_4), (((/* implicit */long long int) var_11))))))), ((((!(((/* implicit */_Bool) var_15)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_12))))) : (((unsigned long long int) var_13))))));
}
