/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161568
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
    var_20 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((max(((unsigned char)177), (((/* implicit */unsigned char) (_Bool)1)))), (((/* implicit */unsigned char) (signed char)24))))) ? (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)50)))) : ((+(((/* implicit */int) arr_3 [i_1]))))));
                var_21 = ((/* implicit */short) ((unsigned int) ((arr_4 [(_Bool)1] [(_Bool)1]) / (((/* implicit */int) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) ((var_5) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_19)))));
}
