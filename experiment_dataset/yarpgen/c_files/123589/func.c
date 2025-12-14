/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123589
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
    var_18 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 2243498242998924776LL)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_17)))))));
    var_19 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_20 = (-(((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((511691222) / (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) -511691217)) ? (7160794408432314099LL) : (((/* implicit */long long int) ((/* implicit */int) var_17))))))));
                arr_5 [i_1] &= (+(((((/* implicit */_Bool) arr_0 [i_1])) ? ((+(-511691213))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
}
