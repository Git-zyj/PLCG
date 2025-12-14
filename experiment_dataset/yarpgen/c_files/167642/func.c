/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167642
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
    var_20 = ((/* implicit */signed char) ((var_11) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_8))))))))) : (var_19)));
    var_21 += ((/* implicit */unsigned char) (~(((/* implicit */int) var_18))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 6; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    var_22 = ((/* implicit */signed char) max((var_9), (((((((/* implicit */_Bool) arr_6 [i_2] [(unsigned char)2])) || (arr_1 [i_0 + 4] [(signed char)7]))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_17))))));
                    var_23 = ((/* implicit */signed char) (((+(((unsigned long long int) arr_2 [i_0 + 4])))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(arr_1 [i_1] [i_2])))) <= (((/* implicit */int) (!(((/* implicit */_Bool) 36028797018955776ULL)))))))))));
                }
                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((+(((/* implicit */int) (signed char)-47)))), (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)131))));
                var_25 = ((/* implicit */unsigned char) ((((arr_4 [i_0] [i_0 + 3] [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-40))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52661)))));
                var_26 = ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) (unsigned short)21446)) ? (arr_5 [i_1] [i_0 - 1] [i_0 + 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 4] [i_1]))))), (((/* implicit */unsigned long long int) (signed char)30)))) == ((~(arr_5 [i_0 - 1] [i_0 + 4] [i_0 + 3])))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((var_19) & (((/* implicit */unsigned int) var_9))))) ? (((((/* implicit */_Bool) (short)-17679)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_15)))) : (((/* implicit */int) (short)-17679)))) <= (((/* implicit */int) max((var_3), (((/* implicit */unsigned char) ((((/* implicit */int) (short)-17679)) <= (((/* implicit */int) var_14))))))))));
    var_28 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) var_1)))));
}
