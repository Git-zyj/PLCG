/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161023
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
    var_19 = ((/* implicit */signed char) var_16);
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_3))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 4) 
                {
                    for (int i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_21 &= ((/* implicit */short) (-(min((((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_2 + 2] [i_3] [i_1])), (14010199441319844941ULL)))));
                                arr_14 [i_0] [i_0] [i_2] [i_2] [i_4] = ((((/* implicit */_Bool) max((((var_17) ^ (arr_4 [i_0] [i_1]))), (((/* implicit */int) arr_0 [(signed char)12]))))) ? (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) arr_8 [i_0] [(short)11] [i_0] [i_0])) : (((/* implicit */int) var_10)))) : (((((/* implicit */int) arr_10 [i_0] [i_1] [i_2 - 1] [i_3] [i_4 + 2])) | (((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 11296800100620389333ULL)) ? (max((((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_1] [i_1])), (arr_7 [i_0] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_1])))))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) ((signed char) ((var_18) + (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)18))))))));
}
