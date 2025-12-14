/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165503
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
    var_15 += ((/* implicit */unsigned long long int) ((var_14) || (((/* implicit */_Bool) var_4))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_2 [i_0] [i_1]))));
                /* LoopSeq 2 */
                for (long long int i_2 = 3; i_2 < 23; i_2 += 1) 
                {
                    var_16 *= max(((!(((/* implicit */_Bool) var_13)))), ((!(((/* implicit */_Bool) arr_10 [i_2 - 2] [i_2 + 1] [i_2 + 1])))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_18 [18U] [i_1] [i_1] [(_Bool)1] [i_1] [i_0] [i_1] &= ((/* implicit */signed char) 2230756159U);
                                var_17 = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_3])) ? (arr_15 [i_3] [(short)8]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))))));
                            }
                        } 
                    } 
                    arr_19 [(_Bool)1] [i_1] [i_2] = ((/* implicit */long long int) max((((/* implicit */short) ((_Bool) arr_15 [i_0] [i_2 - 2]))), ((short)(-32767 - 1))));
                }
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    arr_22 [i_0] = ((/* implicit */short) var_4);
                    var_18 = arr_1 [i_0];
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_25 [2LL] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_2 [i_5 + 1] [i_5 + 1])) ? (((/* implicit */int) arr_2 [i_5 + 1] [i_5 + 1])) : (((/* implicit */int) var_2)))) | (((((/* implicit */_Bool) arr_2 [i_5 + 1] [i_5 + 1])) ? (((/* implicit */int) arr_20 [i_1] [i_5 + 1])) : (((/* implicit */int) arr_20 [i_0] [i_5 + 1]))))));
                        arr_26 [i_0] [i_1] [i_5] [15] [i_0] [15] = ((/* implicit */signed char) arr_12 [i_5 + 1] [i_1] [i_5] [i_1] [i_6] [i_0]);
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_5 + 1] [i_5] [i_5])) ? (((((/* implicit */_Bool) arr_11 [i_5 + 1] [i_5] [i_5])) ? (((/* implicit */int) arr_24 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5] [24U])) : (((/* implicit */int) var_5)))) : (((((/* implicit */int) arr_24 [i_5 + 1] [i_5 + 1] [i_5] [i_5 + 1] [i_5 + 1] [i_5])) / (arr_11 [i_5 + 1] [(_Bool)1] [(_Bool)1])))));
                    }
                    var_20 = ((/* implicit */unsigned short) var_5);
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) 
    {
        arr_29 [i_7] [i_7] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)168))) | (6074969161163353234LL)))), (arr_3 [i_7] [i_7] [i_7])))) ? (((/* implicit */unsigned int) (~(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)26084))))))) : (arr_16 [i_7] [18U] [i_7] [1LL] [i_7]));
        var_21 = ((/* implicit */short) min((var_13), (((/* implicit */int) arr_24 [i_7] [i_7] [i_7] [(short)23] [i_7] [(signed char)12]))));
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) arr_27 [i_7]))));
    }
    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) / (7169119075187772707LL)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_14)), (var_5)))) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_10))));
    var_24 = ((/* implicit */long long int) var_1);
}
