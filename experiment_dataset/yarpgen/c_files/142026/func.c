/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142026
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
    var_10 = ((/* implicit */unsigned int) max((var_5), (((/* implicit */signed char) (!(var_4))))));
    var_11 = ((/* implicit */_Bool) var_3);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_10 [i_0] = ((/* implicit */unsigned long long int) ((_Bool) min(((-(((/* implicit */int) (unsigned short)19621)))), (((/* implicit */int) arr_3 [i_0] [i_1])))));
                    var_12 = ((/* implicit */unsigned int) (+((~(((/* implicit */int) (short)29457))))));
                    var_13 = ((/* implicit */unsigned int) max((min((((-4LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)193))))), (((/* implicit */long long int) 1730145166)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_2])))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) min((max((((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))))), (((/* implicit */long long int) (~(var_8)))))))));
}
