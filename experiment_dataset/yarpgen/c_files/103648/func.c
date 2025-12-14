/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103648
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
    var_18 = ((/* implicit */unsigned short) (unsigned char)243);
    var_19 = ((/* implicit */short) min((var_14), (((/* implicit */unsigned int) var_13))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) (-(max((min((((/* implicit */long long int) arr_3 [i_2] [i_0])), (var_9))), (((/* implicit */long long int) min((2010097612U), (((/* implicit */unsigned int) var_12)))))))));
                    arr_8 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) var_1)), (arr_1 [i_0]))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))), (max((var_4), (((/* implicit */unsigned long long int) var_16))))))));
                    arr_9 [i_2] [i_2] [14ULL] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_2 [i_0] [i_1])), (max((var_14), (((((/* implicit */_Bool) 6001868522487152647LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2]))) : (2147483647U)))))));
                }
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */short) var_8);
    }
    /* LoopNest 3 */
    for (short i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 25; i_5 += 2) 
            {
                {
                    arr_20 [i_3] [i_3] = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_11 [i_3]))))));
                    arr_21 [i_3] [i_4] [i_3] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_11 [i_4])) : (((((/* implicit */_Bool) (unsigned char)124)) ? (var_1) : (((/* implicit */int) arr_18 [i_3] [i_3]))))))), ((~(((((/* implicit */_Bool) var_2)) ? (3285518135115741572LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)19)))))))));
                    arr_22 [i_3] [i_4] [i_5] [(unsigned short)22] = ((/* implicit */short) (+(((/* implicit */int) var_15))));
                }
            } 
        } 
    } 
}
