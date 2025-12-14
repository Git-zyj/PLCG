/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172800
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
    var_11 = ((/* implicit */unsigned char) (+(var_7)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) (~(max((((/* implicit */long long int) var_2)), (min((arr_0 [i_0]), (((/* implicit */long long int) (unsigned char)102)))))))))));
                arr_4 [i_1] = ((/* implicit */unsigned short) ((short) ((int) arr_3 [i_1])));
                var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) max((((var_7) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((((((/* implicit */_Bool) (unsigned char)113)) ? (arr_0 [(unsigned char)6]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4457))))) != (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_10)))))))))));
                var_14 = ((/* implicit */short) min((((/* implicit */signed char) ((arr_0 [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) var_6)))))), (((signed char) var_8))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4014)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)171))))));
}
