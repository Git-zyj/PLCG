/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162262
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
    var_13 *= ((/* implicit */short) (~(var_3)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 3; i_2 < 15; i_2 += 1) /* same iter space */
                {
                    var_14 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)-43)) ? (-232498297) : (((/* implicit */int) (signed char)42))))));
                    var_15 = ((/* implicit */int) (+(((((/* implicit */_Bool) (+(((/* implicit */int) (short)-17501))))) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                }
                for (unsigned int i_3 = 3; i_3 < 15; i_3 += 1) /* same iter space */
                {
                    arr_14 [i_0] = ((/* implicit */_Bool) max((max(((-(var_0))), ((+(((/* implicit */int) arr_5 [i_0] [i_0])))))), (((/* implicit */int) (!(((((/* implicit */int) (unsigned char)147)) > (((/* implicit */int) arr_10 [i_0] [i_1 - 1])))))))));
                    var_16 = ((/* implicit */unsigned int) (signed char)42);
                }
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-43)))))));
            }
        } 
    } 
    var_18 |= ((/* implicit */unsigned long long int) var_12);
}
