/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100792
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
    var_19 *= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)61158)), (4294967295U)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 3; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_18 [i_0] [i_0] [i_1] [i_1] [i_0] [i_3] [i_4] = ((arr_10 [(signed char)9] [i_1] [i_2 - 2] [i_3] [i_4]) << (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (arr_5 [i_0])))) < (((/* implicit */int) var_18))))));
                                arr_19 [i_0] [i_3] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) arr_11 [i_2 + 1] [i_2 - 2] [i_2 - 3] [i_2 + 1] [i_2 - 3])))));
                                arr_20 [i_0] [i_1] [i_0] [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_8 [i_2 + 1] [i_2 - 2]) << ((((((-(((/* implicit */int) arr_1 [i_0])))) + (26785))) - (5)))))) ? (((((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) <= (3129941029U))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))) : (arr_2 [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((8ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_2 - 3] [i_3] [i_4] [i_4]))))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1165026282U)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_15 [i_1])))) : (((/* implicit */int) (unsigned short)1821)))))));
                                var_20 = ((/* implicit */short) max((var_8), (arr_10 [i_0] [i_1] [i_0] [i_3] [i_2 - 2])));
                                arr_21 [i_0] [i_1] [i_0] [i_3] = arr_5 [i_0];
                            }
                        } 
                    } 
                } 
                arr_22 [i_0] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -413655730023285365LL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))) << (((((/* implicit */int) arr_11 [i_1] [i_0] [(short)11] [i_0] [i_0])) - (51)))));
                arr_23 [i_0] [i_0] = ((/* implicit */_Bool) arr_16 [i_0] [7LL] [i_0] [i_0] [i_0]);
                var_21 = ((/* implicit */signed char) min((((1165026282U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) ((short) ((4294967287U) << (((3129941019U) - (3129941003U)))))))));
            }
        } 
    } 
    var_22 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)25))) - (18446744073709551615ULL)));
}
