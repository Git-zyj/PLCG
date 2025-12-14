/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116168
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
    for (unsigned int i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */long long int) (unsigned char)0);
                    arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) (+((~(var_4)))));
                    var_12 |= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) ((unsigned short) (_Bool)1)))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned char) (-((+(((unsigned long long int) var_11))))));
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7186277112063219962LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8119))) : (-4871600805403824786LL)))), ((+(var_2)))))) ? (var_6) : (var_6))))));
    var_15 = ((/* implicit */signed char) var_2);
}
