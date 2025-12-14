/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143239
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
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_18 -= ((/* implicit */long long int) ((signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) == (arr_1 [i_1]))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_1]) : (arr_2 [2U]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) arr_3 [(unsigned char)8] [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_0]))))))));
                var_19 = ((/* implicit */signed char) ((((unsigned int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_2 [i_0])))) / (((/* implicit */unsigned int) arr_5 [i_0 - 2] [i_0 - 2]))));
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) arr_1 [i_0 - 2]))) != (((((/* implicit */_Bool) arr_3 [i_0 + 3] [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 3])) : (((/* implicit */int) arr_3 [i_0 + 2] [i_0 - 3]))))));
                var_21 = ((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [2LL])) != (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_5 [i_1] [i_0 - 3])) ? (arr_2 [i_0]) : (arr_2 [(short)9])))))));
                var_22 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 3])) | (((/* implicit */int) arr_4 [i_0] [i_0 - 3])))) >> (((/* implicit */int) arr_4 [15] [i_0 - 3]))));
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) var_4);
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            {
                var_24 -= ((/* implicit */unsigned long long int) ((unsigned short) ((signed char) arr_10 [i_2] [5ULL])));
                arr_12 [i_3] = ((((((arr_8 [11ULL] [9U]) + (((/* implicit */unsigned long long int) arr_5 [(signed char)12] [i_3])))) / (arr_9 [i_2 - 2] [i_2 - 1]))) >> (((arr_11 [i_2]) - (1522439870U))));
                arr_13 [i_3] = ((/* implicit */long long int) ((unsigned int) ((signed char) arr_1 [i_2])));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned int) var_1);
}
