/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129420
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -1934755246))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_17 ^= ((/* implicit */_Bool) ((min(((+(((/* implicit */int) arr_3 [i_1] [i_3] [(signed char)0])))), (((/* implicit */int) var_1)))) * ((((+(((/* implicit */int) var_2)))) * (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))))));
                                var_18 = ((/* implicit */short) arr_2 [i_2] [i_4]);
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) > (((/* implicit */int) ((var_8) <= (((/* implicit */long long int) ((/* implicit */int) var_4))))))))), ((-(((int) arr_0 [i_2] [i_4])))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) arr_3 [i_2] [i_2 + 1] [i_2 + 1])) < (((/* implicit */int) max((((/* implicit */signed char) arr_12 [i_0] [(unsigned short)4] [i_0] [i_0] [i_0] [i_0] [i_0])), (var_4))))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((unsigned long long int) min((-1934755246), (134217600))));
    var_22 = ((/* implicit */long long int) min((max((((((/* implicit */int) var_9)) << (((((/* implicit */int) var_7)) - (30389))))), (((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */int) var_15)))))), (((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned long long int) (short)0)), (4060951008708219791ULL)))))));
}
