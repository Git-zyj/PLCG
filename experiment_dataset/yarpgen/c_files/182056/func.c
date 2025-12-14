/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182056
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned long long int) var_9);
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (signed char i_3 = 1; i_3 < 13; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_13 = ((/* implicit */unsigned short) (-(arr_12 [i_0] [i_1] [7U] [i_3 - 1] [i_3 + 1])));
                            var_14 += ((/* implicit */unsigned long long int) ((int) arr_11 [i_3] [i_3] [i_3] [i_3] [i_3]));
                            var_15 = ((/* implicit */signed char) var_5);
                            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) var_4))));
                        }
                        var_17 |= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-29499)) && (((/* implicit */_Bool) arr_7 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_2]))))) % (((((/* implicit */_Bool) 2772676023999739703ULL)) ? (((/* implicit */int) arr_7 [i_3 - 1] [i_3] [i_3 + 1] [i_2])) : (((/* implicit */int) (unsigned char)67))))));
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((long long int) var_8))) ? (((((/* implicit */_Bool) (unsigned char)191)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_0] [i_0])))) : (((/* implicit */int) arr_11 [i_0] [(short)11] [i_0] [i_0] [i_0])))), ((((!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])))) ? ((+(((/* implicit */int) (short)29490)))) : (((/* implicit */int) var_8))))));
        }
        arr_14 [i_0] = min((((/* implicit */long long int) min((((/* implicit */unsigned int) var_7)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (var_9)))))), (var_5));
        arr_15 [(unsigned short)12] &= ((/* implicit */int) (_Bool)1);
    }
    var_19 |= ((/* implicit */int) var_2);
}
