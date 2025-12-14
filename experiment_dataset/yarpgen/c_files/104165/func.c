/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104165
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (var_9)))) ? (((/* implicit */long long int) (+(var_9)))) : (var_6)))) || (((/* implicit */_Bool) ((((((/* implicit */int) ((signed char) (unsigned char)165))) + (2147483647))) << (((((((/* implicit */int) var_8)) + (103))) - (9))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 22; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)113)) <= (((/* implicit */int) ((((var_6) / (((/* implicit */long long int) 790494044U)))) == (((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((unsigned long long int) (~(((/* implicit */int) (signed char)-114))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)114)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)27199))) : (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_5), (((/* implicit */short) var_7)))))))))));
            }
        } 
    } 
}
