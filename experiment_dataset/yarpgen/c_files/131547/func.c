/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131547
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) && (min((var_5), (var_5)))));
    var_21 = ((/* implicit */unsigned long long int) ((((var_1) / (((((/* implicit */int) (short)9327)) + (((/* implicit */int) var_0)))))) * (((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 7; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */signed char) min((min((((/* implicit */int) arr_5 [i_0 + 3])), (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_2 [i_0])))))), (((/* implicit */int) max((arr_4 [i_1] [i_1 + 1]), (arr_4 [i_0] [i_1 + 1]))))));
                var_22 -= ((/* implicit */long long int) min((((/* implicit */unsigned char) arr_5 [i_1 + 2])), (((unsigned char) arr_1 [i_1 + 1]))));
                arr_7 [(short)3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (min((var_19), (((/* implicit */long long int) arr_2 [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_2 [i_0]), (arr_5 [i_1])))))))) ? (arr_1 [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_0 - 2])) != (((/* implicit */int) arr_3 [i_0 + 3]))))))));
                arr_8 [i_0] [i_1 + 3] [i_0] = ((((/* implicit */int) (!(arr_5 [i_0 + 1])))) + ((-(((/* implicit */int) arr_3 [i_0 + 2])))));
            }
        } 
    } 
    var_23 -= ((/* implicit */short) var_3);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
            {
                {
                    var_24 ^= ((/* implicit */int) ((((((/* implicit */_Bool) arr_11 [10U] [10U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3]))) : (arr_12 [16U]))) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2] [i_4]))) != (arr_11 [8LL] [6ULL]))))));
                    arr_16 [5ULL] [i_3] [i_3] = ((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_3)) & (((/* implicit */int) arr_13 [i_2] [i_3])))));
                }
            } 
        } 
        arr_17 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_2] [(_Bool)1] [i_2] [i_2])) ? (((/* implicit */int) ((arr_14 [16ULL] [16ULL] [i_2]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) : (((/* implicit */int) arr_13 [i_2] [i_2]))));
    }
}
