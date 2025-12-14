/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104224
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
    var_18 *= ((/* implicit */int) ((((/* implicit */_Bool) max((10822250064551509612ULL), (899883232151070378ULL)))) && (((/* implicit */_Bool) (signed char)38))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 6; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])) ? (var_8) : (((/* implicit */unsigned long long int) arr_0 [i_0 + 1]))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (-1490587226) : (((/* implicit */int) (_Bool)1)))) >= (min((((/* implicit */int) min((arr_1 [9] [i_0 + 4]), (((/* implicit */short) (_Bool)1))))), (-1194353272)))));
    }
    var_20 = ((/* implicit */unsigned long long int) (-(max(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)4747)))), (((int) var_16))))));
}
