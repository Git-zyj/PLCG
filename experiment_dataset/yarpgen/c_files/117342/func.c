/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117342
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
    var_19 ^= ((/* implicit */unsigned int) var_18);
    var_20 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_10), (((/* implicit */unsigned char) var_5))))) << (((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_15)))))))), (((unsigned long long int) var_2))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_13))));
                        var_22 *= ((/* implicit */unsigned long long int) 0U);
                        arr_11 [i_0] [(unsigned char)14] |= ((/* implicit */_Bool) var_16);
                        var_23 = ((/* implicit */signed char) ((long long int) 4294967295U));
                        arr_12 [i_3] [i_3] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) var_5)), (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) % (13U))))) != (max((4294967282U), (13U)))));
                    }
                    var_24 = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_17))))), (min((((/* implicit */int) min((arr_4 [(signed char)6] [i_1]), (var_5)))), ((+(((/* implicit */int) var_5))))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_17)))))));
}
