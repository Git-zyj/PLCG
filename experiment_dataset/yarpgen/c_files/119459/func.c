/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119459
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
    var_12 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = (+(((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 8201468676044765770ULL)))))) : (((65535U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((3488525581U), (3205124401U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_2 [6LL]), (arr_2 [12ULL]))))) : (max((((/* implicit */unsigned long long int) 3397920196U)), (max((var_9), (((/* implicit */unsigned long long int) -6635722271617762041LL)))))))))));
                var_14 = min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-67))))), (min((var_5), (((/* implicit */unsigned long long int) var_7)))));
            }
        } 
    } 
}
