/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125805
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
    var_11 = ((/* implicit */int) max((((/* implicit */unsigned int) (_Bool)1)), (3495696726U)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) 3495696717U)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_8))))) : (arr_1 [12U]))))))));
                var_13 = ((/* implicit */long long int) arr_1 [10U]);
            }
        } 
    } 
    var_14 &= ((-350837634060048045LL) + (((/* implicit */long long int) 3495696722U)));
}
