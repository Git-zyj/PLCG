/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142306
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) ((813890416940614151ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1)))));
                var_12 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_1 [i_0])), (arr_0 [i_1 + 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_1 + 1])) : (var_8))))));
            }
        } 
    } 
    var_13 = ((((((/* implicit */int) var_4)) % (((var_6) - (((/* implicit */int) var_7)))))) % (max((var_10), ((+(-1492406630))))));
}
