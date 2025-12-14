/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118610
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
    var_18 = ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254)))))) ? (((long long int) var_7)) : (var_17))) : (min((var_3), (((/* implicit */long long int) var_8)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [7ULL] [5ULL] [i_0] = ((long long int) min((((/* implicit */unsigned int) ((short) arr_4 [i_1] [i_1] [(short)11]))), (((unsigned int) arr_1 [i_1] [i_0]))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    arr_8 [i_1] [i_0] [(signed char)15] [i_0] = ((/* implicit */long long int) var_5);
                    var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_2 [i_0])) || (var_4))) ? (((unsigned long long int) 12ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_0]) > (arr_2 [i_0])))))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        for (int i_4 = 3; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */short) 293266874);
                                var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((3269349224421696657ULL), (2304393348484791843ULL))))));
                                var_22 ^= ((/* implicit */int) arr_3 [10ULL]);
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 1) 
                {
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_0]))))) != (((/* implicit */int) arr_3 [8LL]))));
                    var_24 = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) (unsigned char)22)), (arr_4 [i_0 + 1] [i_5 - 1] [i_5 + 1]))), (((((/* implicit */_Bool) arr_10 [i_0 - 2] [i_0 - 2] [11] [i_0 - 2])) ? (arr_11 [i_0] [i_1] [i_0]) : (((/* implicit */unsigned long long int) -662565421))))));
                }
                /* vectorizable */
                for (signed char i_6 = 1; i_6 < 15; i_6 += 4) 
                {
                    var_25 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)96))))) ? (((((/* implicit */_Bool) (unsigned char)93)) ? (13ULL) : (var_16))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)12288)) && (((/* implicit */_Bool) 34ULL))))))));
                    arr_19 [6ULL] [15ULL] [i_0] = ((/* implicit */short) (-(arr_17 [i_0 - 1] [0LL] [(short)8] [i_0 - 1])));
                    arr_20 [i_0] [i_1] [i_6] = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_12 [i_0 + 2] [i_0] [i_0 + 2] [i_6] [i_6] [i_6 + 1])) ? (arr_7 [(_Bool)1] [i_6] [(unsigned char)3] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [(_Bool)1] [i_6 + 1])))))));
                }
                arr_21 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_8);
            }
        } 
    } 
    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) 6ULL)) && (((/* implicit */_Bool) max((((/* implicit */signed char) (!(((/* implicit */_Bool) 12701125248411299891ULL))))), (var_15))))));
    var_27 = ((/* implicit */long long int) var_11);
}
