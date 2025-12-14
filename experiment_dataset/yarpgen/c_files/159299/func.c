/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159299
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
    for (signed char i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) -896326142)))) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) min((((unsigned char) arr_4 [(unsigned char)6] [(_Bool)1])), (((/* implicit */unsigned char) (_Bool)0)))))));
                var_19 = ((/* implicit */unsigned int) arr_6 [i_0] [i_0]);
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) min((((/* implicit */short) var_0)), ((short)24576)));
}
