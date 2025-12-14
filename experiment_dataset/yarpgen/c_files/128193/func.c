/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128193
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) min((var_15), (arr_8 [(short)8])));
                            arr_11 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) min((arr_5 [i_0] [i_2] [i_3]), (((/* implicit */long long int) (signed char)80))))) > (min((var_14), (((/* implicit */unsigned long long int) var_7)))))))) == (min((var_9), (((/* implicit */long long int) ((var_12) + (((/* implicit */int) var_6)))))))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_0] |= ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (arr_7 [i_0] [i_0] [i_1]) : (arr_7 [i_1] [(signed char)2] [i_0]))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)34883)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) var_7)))), (((/* implicit */int) ((_Bool) var_9))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_7)) >= (((((/* implicit */int) var_11)) / (((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned long long int) var_4)) : (var_14)));
    var_17 = ((/* implicit */short) (~(((/* implicit */int) (short)13843))));
    var_18 &= ((/* implicit */unsigned int) (((+(((long long int) var_12)))) - (((/* implicit */long long int) ((/* implicit */int) var_1)))));
}
