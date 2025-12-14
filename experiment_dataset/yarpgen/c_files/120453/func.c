/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120453
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                var_17 &= ((/* implicit */short) (+(((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_0] [i_1 + 1])) : (((((/* implicit */_Bool) (signed char)-23)) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) (signed char)79))))))));
                var_18 += ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) arr_1 [i_0]))))) != (((arr_4 [i_0] [i_0] [i_1 + 2]) ? (((/* implicit */int) arr_4 [i_1] [i_1] [i_1 - 2])) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_1 + 1])))));
                var_19 |= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [(_Bool)1] [(_Bool)1] [i_1]))))) ? (arr_2 [i_1 + 1] [(_Bool)1]) : (((((/* implicit */_Bool) arr_0 [i_0] [(signed char)0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1]))) : (arr_2 [i_0] [(_Bool)0])))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) ((var_6) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) && (((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_7))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                {
                    var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_7 [i_4]) ? (((/* implicit */int) arr_7 [i_4])) : (((/* implicit */int) arr_7 [i_4]))))) && (((/* implicit */_Bool) ((arr_7 [i_4]) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) arr_7 [i_4])))))));
                    var_22 = ((/* implicit */signed char) ((((((arr_7 [i_2]) ? (((/* implicit */int) arr_6 [5ULL])) : (((/* implicit */int) arr_11 [i_2] [i_2] [i_4] [i_2])))) < (((arr_9 [0]) | (((/* implicit */int) arr_6 [14])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2])) ? (arr_5 [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [(signed char)8] [i_4])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_3] [i_4]))) : (arr_5 [i_2] [5]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(signed char)5])) ? (((/* implicit */int) arr_8 [i_2] [i_4] [i_4])) : (arr_14 [i_4] [i_2] [i_2] [i_2])))) ? ((~(((/* implicit */int) (signed char)-32)))) : (((((/* implicit */_Bool) arr_9 [i_4])) ? (arr_14 [i_2] [(short)7] [i_3] [i_4]) : (((/* implicit */int) arr_8 [(short)11] [i_2] [(short)11])))))))));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3] [i_3])) ? (arr_5 [i_3] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(short)1] [5ULL] [i_4])))))) ? ((+(((/* implicit */int) arr_12 [i_4] [i_4] [i_3] [i_2])))) : (((((/* implicit */int) arr_7 [i_3])) | (((/* implicit */int) arr_11 [i_2] [i_3] [(_Bool)1] [i_3]))))))) + (((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2] [i_2] [3ULL] [i_4]))) & (((((/* implicit */_Bool) arr_8 [(unsigned short)5] [i_2] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4] [i_4] [i_2]))) : (arr_5 [i_2] [i_4])))))));
                    arr_15 [i_2] = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_8 [i_4] [i_3] [i_4])) - ((-(((/* implicit */int) arr_11 [i_2] [i_3] [i_3] [i_3]))))))));
                }
            } 
        } 
    } 
}
