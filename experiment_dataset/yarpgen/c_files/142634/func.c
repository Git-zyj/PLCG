/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142634
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (_Bool)1)))), (max((arr_5 [23] [i_1] [i_1]), (((/* implicit */int) (unsigned char)176))))))), (((max((arr_4 [11U] [23]), (((/* implicit */unsigned long long int) arr_6 [i_0] [19U])))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (arr_6 [i_0] [i_1])))))))));
                var_14 = ((/* implicit */signed char) ((((arr_1 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) * (var_3)));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) 804515106U))));
}
