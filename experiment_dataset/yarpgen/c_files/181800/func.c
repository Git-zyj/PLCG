/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181800
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 3; i_2 < 16; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((arr_11 [i_2] [i_2 + 1] [i_2 + 2] [i_2] [i_2 + 1]) / (arr_11 [i_2] [(signed char)9] [i_2 + 1] [i_2] [i_3])))) >= (((arr_9 [i_0] [i_0] [i_0] [i_0]) - (((/* implicit */unsigned int) ((((((/* implicit */int) arr_10 [8ULL] [16] [i_2 + 3] [i_2])) + (2147483647))) << (((((/* implicit */int) arr_5 [i_2 - 2])) - (103))))))))));
                                arr_15 [i_3] = ((/* implicit */unsigned int) ((int) (unsigned short)33741));
                                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) max((min((((/* implicit */long long int) max((arr_0 [i_0]), (((/* implicit */unsigned int) var_12))))), ((~(arr_8 [i_0] [i_0] [i_4] [i_3]))))), (((/* implicit */long long int) arr_10 [11] [i_2 + 2] [i_1] [i_0])))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] = ((/* implicit */unsigned int) ((signed char) ((9223372036854775797LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)29))))));
                arr_17 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)62))) : (6152176593134509106LL)));
                var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((arr_7 [i_0] [i_1] [i_0] [i_0]), (((/* implicit */unsigned char) max((var_2), (arr_3 [i_0] [i_0]))))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [(unsigned short)18])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))))) ^ (arr_6 [i_0] [i_0] [i_0])))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) var_10);
    var_20 = ((/* implicit */unsigned char) ((var_8) / (((/* implicit */long long int) var_11))));
}
