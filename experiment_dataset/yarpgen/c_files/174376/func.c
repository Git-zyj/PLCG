/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174376
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
    var_20 = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)52544)))))), ((+(((/* implicit */int) ((((/* implicit */int) var_13)) < (((/* implicit */int) var_10)))))))));
    var_21 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((arr_0 [i_1 - 2] [i_1 - 2]) && (((/* implicit */_Bool) arr_3 [i_1 - 2])))))));
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (+((+(((((((/* implicit */int) arr_1 [i_0])) + (2147483647))) << (((arr_3 [i_0]) - (3493372145U))))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 1; i_2 < 22; i_2 += 3) 
    {
        for (long long int i_3 = 1; i_3 < 24; i_3 += 2) 
        {
            {
                arr_9 [i_3] = max((((((arr_6 [5U]) * (arr_6 [i_2]))) | (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 8514533738214141970LL)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-45)) ? (((/* implicit */int) arr_5 [i_3 - 1])) : (((/* implicit */int) arr_7 [(unsigned short)11] [i_3]))))) ? ((~(((/* implicit */int) arr_7 [i_2] [i_3])))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) arr_7 [i_2 + 2] [i_3]))))))));
                var_23 *= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [(short)8]))) & (((((/* implicit */_Bool) arr_6 [i_2 - 1])) ? (((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_8 [i_3 + 1] [i_3 + 1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [10ULL] [10ULL]))))) : (arr_6 [i_2])))));
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    var_24 = ((/* implicit */unsigned int) arr_10 [23U] [23U] [i_4] [i_2 + 2]);
                    arr_12 [i_3] = ((/* implicit */short) ((unsigned char) max((((unsigned long long int) 3205817634U)), (((/* implicit */unsigned long long int) arr_11 [i_2 - 1] [i_3] [i_3 - 1] [i_4])))));
                    arr_13 [i_3] [i_2 + 2] [i_3] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-17558)), (3080860103U)));
                    arr_14 [i_2] [(_Bool)1] [i_3] [i_4] = ((/* implicit */long long int) arr_7 [i_2] [i_3]);
                }
                for (signed char i_5 = 2; i_5 < 24; i_5 += 1) 
                {
                    var_25 -= ((/* implicit */unsigned long long int) ((1089149658U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2] [8LL] [i_3] [22])))));
                    arr_17 [i_2] [i_3 - 1] [(unsigned short)2] [i_5] &= ((/* implicit */int) arr_10 [i_5 - 1] [i_5 - 2] [i_3 + 1] [i_3 + 1]);
                    var_26 = ((/* implicit */short) ((unsigned char) arr_5 [i_2]));
                }
            }
        } 
    } 
}
