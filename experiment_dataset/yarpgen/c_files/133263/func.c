/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133263
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
    var_10 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_9), (((((/* implicit */_Bool) var_8)) ? (var_6) : (var_9)))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)0))))) : (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_8)) : (var_9))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_8)) : (var_1))))))))));
    /* LoopSeq 1 */
    for (short i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (long long int i_2 = 4; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_8 [i_2 - 4] [(unsigned char)19] [i_0] [(unsigned short)21] = arr_4 [i_0];
                    var_11 = ((/* implicit */short) arr_3 [i_1]);
                    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((long long int) ((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_0 - 1]))))) ? (arr_6 [1ULL] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 2])))))))));
                }
            } 
        } 
        var_13 &= ((/* implicit */unsigned char) ((unsigned long long int) max((arr_1 [i_0 - 3]), (arr_1 [i_0 + 2]))));
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            for (unsigned char i_4 = 1; i_4 < 20; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 2; i_5 < 18; i_5 += 3) 
                {
                    {
                        var_14 = ((/* implicit */long long int) arr_16 [i_5 + 3] [i_5 + 3] [i_5 + 3] [i_5 + 3] [i_5 - 2]);
                        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) min((min((arr_16 [i_5 - 1] [i_4 + 1] [i_4 + 1] [i_4] [i_4]), (((/* implicit */unsigned long long int) arr_3 [i_0 - 4])))), (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) max((var_8), (((/* implicit */unsigned int) arr_3 [i_4 - 1]))))) : (((arr_13 [(unsigned char)20] [(unsigned char)20]) ? (((/* implicit */unsigned long long int) var_5)) : (var_4))))))))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (short i_6 = 0; i_6 < 25; i_6 += 4) 
    {
        for (long long int i_7 = 1; i_7 < 23; i_7 += 1) 
        {
            {
                var_16 = ((/* implicit */int) var_5);
                /* LoopNest 2 */
                for (long long int i_8 = 2; i_8 < 21; i_8 += 4) 
                {
                    for (signed char i_9 = 0; i_9 < 25; i_9 += 1) 
                    {
                        {
                            arr_26 [i_7] [i_9] [i_7] [(_Bool)1] [i_9] [i_7 + 1] = arr_25 [i_9] [i_9] [i_9] [i_6];
                            var_17 = ((/* implicit */int) arr_21 [i_6] [i_7 + 1]);
                            var_18 &= ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_23 [i_7 + 1] [i_8 + 1] [i_8 + 3] [i_8 - 2])) ? (arr_23 [i_7 + 1] [i_8 + 1] [i_8 + 3] [i_8 - 2]) : (arr_23 [i_7 + 1] [i_8 + 1] [i_8 + 3] [i_8 - 2]))), (max((arr_23 [i_7 + 1] [i_8 + 1] [i_8 + 3] [i_8 - 2]), (arr_23 [i_7 + 1] [i_8 + 1] [i_8 + 3] [i_8 - 2])))));
                            arr_27 [i_6] [i_7] [i_8] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) 1056964608))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_20 [i_7])) ? (((/* implicit */unsigned long long int) var_8)) : (var_2)))))) : (min((((/* implicit */unsigned long long int) arr_23 [i_8] [i_8 + 1] [i_8] [i_8 + 3])), (min((arr_22 [i_9] [i_8] [i_7] [i_6]), (arr_22 [(_Bool)1] [i_7] [10LL] [(_Bool)1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
