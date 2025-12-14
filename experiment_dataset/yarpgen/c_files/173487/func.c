/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173487
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
    var_17 = ((/* implicit */_Bool) min((((var_4) ? (((((/* implicit */_Bool) var_11)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (signed char)-27)))))))), (((/* implicit */unsigned int) var_15))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_18 &= min((((/* implicit */long long int) (((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */int) arr_5 [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_13)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)126)) ? (16423012688988672867ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)245)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) -3701186778007143708LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-4605686416815369870LL))))));
                    arr_6 [i_0 - 1] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned int) ((int) ((((((/* implicit */long long int) arr_3 [i_0] [i_1] [i_2])) - (9223372036854775806LL))) == (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0])), ((unsigned short)6537))))))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) ((unsigned int) arr_1 [i_0])))) + (((/* implicit */int) min((arr_5 [i_0 + 1] [i_2 + 1]), (((/* implicit */unsigned char) var_16)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)51483)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0 + 1] [i_2 + 1] [i_3 + 2] [i_2 + 1] [i_3])) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) : (((unsigned long long int) var_15))));
                                var_21 = ((/* implicit */unsigned char) ((_Bool) 3046811520U));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) min(((short)30479), (((/* implicit */short) (!(((/* implicit */_Bool) 1038653791878324569ULL))))))))));
}
