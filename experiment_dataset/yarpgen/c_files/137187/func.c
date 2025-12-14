/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137187
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
    var_18 *= ((/* implicit */_Bool) var_16);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max(((unsigned short)13), (((/* implicit */unsigned short) (unsigned char)42))))) / (min(((-(arr_5 [i_0]))), ((-(((/* implicit */int) (unsigned short)48880))))))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)1406))))) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((unsigned short) var_5))) : ((~(((/* implicit */int) (unsigned short)65523))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (arr_2 [i_0] [i_0])))) ? (((long long int) var_8)) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))))));
                var_20 -= ((/* implicit */long long int) min((2097151), (((/* implicit */int) (signed char)-16))));
            }
        } 
    } 
}
