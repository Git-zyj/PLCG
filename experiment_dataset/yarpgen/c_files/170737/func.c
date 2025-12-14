/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170737
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
    var_18 = ((/* implicit */long long int) ((-290232263) ^ (min((((((/* implicit */int) var_17)) & (((/* implicit */int) var_15)))), (((/* implicit */int) max((var_17), (((/* implicit */unsigned char) var_7)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        {
                            arr_9 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_3] [i_1] [(short)11]);
                            arr_10 [i_3] [i_3 + 1] [i_1] [i_3] [i_3 + 1] [i_1] = ((((/* implicit */_Bool) arr_3 [i_1 + 2] [0LL])) ? (((/* implicit */long long int) (+(2147483646)))) : (min((-6391530334333579806LL), (((/* implicit */long long int) var_5)))));
                            arr_11 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32661)) ? (((/* implicit */int) (short)32658)) : (((/* implicit */int) ((((/* implicit */unsigned int) (~(arr_6 [i_0] [i_0] [i_0] [13ULL] [i_0] [i_0])))) >= (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_0] [i_1] [i_1]))))))));
                            arr_12 [13ULL] [5ULL] [i_1] [i_1 + 1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_3 - 1])) & (var_4)))) ? (((var_6) << (((((/* implicit */int) arr_1 [i_3 + 1])) - (32478))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_1 [i_3 - 1]), (var_3)))))));
                        }
                    } 
                } 
                var_19 = (i_1 % 2 == 0) ? (((((((/* implicit */int) min((arr_5 [i_1] [i_1] [i_0] [(unsigned short)9]), (arr_5 [i_1] [i_1] [i_1 + 2] [i_1 + 2])))) + (2147483647))) << (((((-1LL) + (17LL))) - (16LL))))) : (((((((((/* implicit */int) min((arr_5 [i_1] [i_1] [i_0] [(unsigned short)9]), (arr_5 [i_1] [i_1] [i_1 + 2] [i_1 + 2])))) - (2147483647))) + (2147483647))) << (((((-1LL) + (17LL))) - (16LL)))));
                arr_13 [i_0] &= max((((/* implicit */unsigned long long int) ((arr_8 [i_1] [i_1 + 1] [i_1 - 1] [i_1] [i_0]) ? (((/* implicit */int) (short)-19898)) : (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 6391530334333579821LL)) : (arr_0 [i_0] [i_0]))));
            }
        } 
    } 
    var_20 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_13)))))) % (var_14))))));
}
