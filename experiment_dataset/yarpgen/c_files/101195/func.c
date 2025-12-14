/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101195
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned short) (~(((arr_2 [i_0] [4ULL]) ? (var_8) : (((/* implicit */long long int) var_4))))));
                arr_5 [(unsigned short)2] [i_1] = ((/* implicit */short) ((unsigned long long int) ((((((/* implicit */int) arr_1 [(_Bool)1])) >= (((/* implicit */int) arr_1 [14U])))) || (((_Bool) arr_0 [i_0])))));
                arr_6 [12LL] [i_0] [i_1] = ((/* implicit */int) ((((((/* implicit */int) var_0)) >= (((/* implicit */int) ((((/* implicit */unsigned long long int) var_8)) >= (var_7)))))) || (((/* implicit */_Bool) var_8))));
            }
        } 
    } 
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((var_4), (((/* implicit */int) var_2)))), (((/* implicit */int) ((_Bool) var_2)))))) ? (((((/* implicit */long long int) var_6)) | (min((var_9), (var_9))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((var_9) >= (((/* implicit */long long int) var_3)))))))));
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (min((((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) >= (var_7)))))) : (var_8)));
    var_12 = ((/* implicit */unsigned short) var_9);
}
