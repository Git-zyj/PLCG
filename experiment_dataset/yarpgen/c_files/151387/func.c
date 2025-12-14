/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151387
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
    for (signed char i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 19; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            arr_10 [i_2 + 1] [i_2] [i_2 + 1] [i_1] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1]))) : (0U)))) ? (min((((/* implicit */unsigned long long int) 4294967295U)), (var_15))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_7 [i_0] [(signed char)5])), (var_12)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_13) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_1] [i_1])))))) ? (((/* implicit */int) min((((/* implicit */short) (signed char)42)), ((short)25275)))) : (((arr_7 [i_0 + 3] [i_0 + 3]) ? (((/* implicit */int) (unsigned short)65117)) : (((/* implicit */int) (unsigned short)5452))))))) : (min((((unsigned int) (signed char)-51)), (var_10)))));
                            var_16 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2 + 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (var_15)))) ? ((-(((/* implicit */int) arr_4 [i_1])))) : ((-(((/* implicit */int) arr_6 [i_0] [i_1] [i_2 + 2]))))))) : (((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(signed char)2] [i_1] [i_2 - 1]))) : (1403686834U)))) : (14254609071384483016ULL)))));
                            var_17 ^= ((/* implicit */unsigned short) arr_3 [i_3] [i_0]);
                            var_18 = ((/* implicit */short) ((2382209852911166809ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 + 2] [i_1])) || (var_8)))), (max((((/* implicit */long long int) (signed char)-58)), (var_11))))));
                arr_11 [i_0 - 1] [i_1] = ((/* implicit */short) ((unsigned char) min((((arr_7 [i_0 + 1] [i_1]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))), (((/* implicit */int) arr_8 [i_0 + 2] [i_0 - 1] [i_0] [i_1])))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_2);
    var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_6))))) != (((unsigned int) (+(((/* implicit */int) var_4)))))));
}
