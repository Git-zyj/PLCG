/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102659
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
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) max((((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_8)) ? (9007199250546688LL) : (((/* implicit */long long int) ((/* implicit */int) var_19))))) : (((/* implicit */long long int) var_7)))), (((((/* implicit */_Bool) 2937937982U)) ? (var_3) : (((/* implicit */long long int) (+(((/* implicit */int) var_19))))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 10; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned short) ((int) (-(((/* implicit */int) ((((/* implicit */_Bool) -5236009347362879759LL)) && (((/* implicit */_Bool) var_13))))))));
                arr_6 [i_0] [(signed char)8] |= ((/* implicit */unsigned short) (unsigned char)29);
            }
        } 
    } 
}
