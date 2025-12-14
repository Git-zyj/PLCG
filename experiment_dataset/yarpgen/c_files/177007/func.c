/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177007
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
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    var_10 = max((((((/* implicit */unsigned int) min((arr_7 [i_0 - 1] [i_1] [i_0 + 2]), (((/* implicit */int) (signed char)-1))))) * (arr_2 [i_0 + 1] [i_1] [i_2 - 1]))), (((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_0 [i_0]))))))));
                    var_11 = ((/* implicit */unsigned long long int) ((int) (-(((((/* implicit */_Bool) arr_2 [i_2] [i_1] [i_0])) ? (var_8) : (var_8))))));
                    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [(_Bool)1] [i_2] [(_Bool)1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_3 [(unsigned char)10] [i_2]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_8) : (var_8)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_1))))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) (~(((3908721898U) | (386245397U)))));
    var_14 = ((/* implicit */unsigned char) (short)-6037);
}
