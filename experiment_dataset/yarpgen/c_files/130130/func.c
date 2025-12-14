/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130130
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_14))))) >> (((((/* implicit */int) min(((signed char)40), (var_8)))) & (((/* implicit */int) var_11))))));
    var_19 = ((/* implicit */int) var_15);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)65531)) | (((((/* implicit */_Bool) max(((unsigned short)65531), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) ((_Bool) var_11)))))));
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */unsigned long long int) var_6)) : (max((((/* implicit */unsigned long long int) arr_3 [i_1 - 1] [i_1 - 3])), (var_10)))));
            }
        } 
    } 
}
