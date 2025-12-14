/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151867
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
    var_17 *= ((/* implicit */short) var_7);
    var_18 += ((/* implicit */unsigned long long int) var_6);
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-51)), (var_4)))) ? (((/* implicit */int) var_12)) : ((-(var_10))))) : (var_2)));
    var_20 = ((/* implicit */int) var_6);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */long long int) ((((unsigned long long int) (signed char)-51)) >> (((((((/* implicit */unsigned int) arr_1 [i_1])) ^ (var_16))) - (3914513732U)))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */int) (signed char)46)) : (235407622)))));
                            var_23 -= ((/* implicit */_Bool) var_13);
                            var_24 = ((/* implicit */unsigned char) ((unsigned short) (+(max((((/* implicit */unsigned int) arr_1 [(unsigned short)3])), (var_16))))));
                            var_25 ^= ((((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_0 - 1] [i_0 + 3])) ? (((/* implicit */int) min(((unsigned short)13874), ((unsigned short)14105)))) : ((+(((((/* implicit */_Bool) (unsigned short)20341)) ? (var_10) : (((/* implicit */int) (unsigned short)51428)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
