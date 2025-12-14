/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112506
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) var_13);
                    arr_6 [i_0] = ((/* implicit */long long int) var_11);
                    var_20 += ((/* implicit */unsigned long long int) max((((/* implicit */int) max((((7213062327620637540LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47961))))), (min((var_12), (var_1)))))), (((((/* implicit */int) (signed char)38)) / (var_4)))));
                    var_21 += ((/* implicit */_Bool) max((max(((+(((/* implicit */int) (signed char)-1)))), (((/* implicit */int) var_11)))), ((~(((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (signed char)-1)))))))));
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) min((var_4), ((+(((/* implicit */int) var_1))))));
                }
            } 
        } 
    } 
    var_22 = (!(((/* implicit */_Bool) ((((2963865401927852997ULL) >> (((((/* implicit */int) var_11)) - (158))))) << (((((/* implicit */int) var_11)) - (191)))))));
    var_23 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (-(((((/* implicit */long long int) ((/* implicit */int) var_9))) + (var_7)))))), (((max((18446744073709551592ULL), (((/* implicit */unsigned long long int) var_18)))) >> ((((~(((/* implicit */int) (unsigned short)48979)))) + (48982)))))));
    var_24 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) ((var_17) <= (((/* implicit */int) (signed char)-1))))) == (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_0)))))))));
}
