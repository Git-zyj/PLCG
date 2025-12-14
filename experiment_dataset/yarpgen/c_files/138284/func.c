/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138284
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
    var_13 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) min(((unsigned char)117), ((unsigned char)137)))) : (((/* implicit */int) ((var_9) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)119))))))))), ((~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (598452049U)))))));
    var_14 |= ((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) (unsigned short)1023)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_15 |= arr_5 [i_1];
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)137)) + (((/* implicit */int) (unsigned char)111))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            var_16 |= ((/* implicit */int) (+(((((/* implicit */_Bool) min((arr_10 [i_0] [i_0]), (((/* implicit */unsigned int) (unsigned char)137))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))) : (max((281297304U), (((/* implicit */unsigned int) (unsigned char)136))))))));
                            var_17 -= ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)65535))));
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) + ((-9223372036854775807LL - 1LL))))) ? (8164910537774764137ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)136)), (arr_5 [i_1])))))));
                            var_19 = ((/* implicit */unsigned short) max((9223372036854775807LL), (((/* implicit */long long int) (unsigned short)29366))));
                        }
                    } 
                } 
            }
        } 
    } 
}
