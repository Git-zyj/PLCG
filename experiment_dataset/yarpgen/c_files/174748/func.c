/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174748
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_12 = ((/* implicit */short) (~(arr_1 [(unsigned char)7])));
        var_13 = ((/* implicit */short) arr_0 [(_Bool)1]);
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        var_14 += ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [0ULL] [(signed char)6])) && (((/* implicit */_Bool) arr_4 [i_1] [(unsigned char)4]))))), ((+(arr_2 [(signed char)0])))));
        arr_5 [i_1] = ((/* implicit */short) max((arr_2 [i_1]), (((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_2 [i_1]) : (arr_2 [i_1])))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_4 = 3; i_4 < 14; i_4 += 2) 
                {
                    for (short i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        {
                            arr_16 [(_Bool)1] [i_3] [(unsigned char)2] = ((/* implicit */unsigned int) var_2);
                            var_15 = arr_6 [i_5];
                            arr_17 [i_5] [i_3] [(_Bool)1] [(_Bool)0] [i_3] [i_2] = ((/* implicit */_Bool) (+(max((arr_4 [i_4 - 1] [i_3]), (arr_4 [i_4 - 1] [i_3])))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    arr_22 [(_Bool)1] [(signed char)5] [(unsigned char)2] [i_3] = ((/* implicit */_Bool) (+(min((arr_10 [i_2]), (arr_10 [i_3 - 1])))));
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_3 - 1] [5ULL])) & (((/* implicit */int) min((var_7), (arr_8 [i_3 - 1] [16]))))));
                    arr_23 [(short)9] [9U] [i_3 + 1] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_3 + 1] [(_Bool)1] [i_3 + 1] [i_3 + 1])) >> ((((~(max((((/* implicit */long long int) arr_19 [i_2] [(signed char)11] [(signed char)16])), (arr_7 [i_6]))))) + (4158065750860415717LL)))));
                    var_17 = ((/* implicit */unsigned short) (-((-(arr_14 [i_2] [i_3 - 1] [i_6])))));
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((~(((/* implicit */int) var_5))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_11 [(_Bool)1] [4ULL] [i_3]), ((!(var_11))))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) arr_10 [i_3 + 1])) : (min((((/* implicit */unsigned int) arr_10 [(_Bool)1])), (arr_9 [i_2] [(_Bool)1] [i_6])))))));
                }
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_8) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) var_5))))) ? ((~(var_6))) : (max(((~(var_6))), (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */short) var_0)))))))));
}
