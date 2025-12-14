/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184559
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_4 [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6423123981660127168LL)) ? ((+(min((((/* implicit */long long int) var_16)), (-6423123981660127155LL))))) : (max(((~(var_11))), (((/* implicit */long long int) min(((unsigned char)167), (var_6))))))));
        var_19 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_0 [i_0])))) != (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)40433)) % (((/* implicit */int) var_12))))) : (arr_1 [i_0])))));
    }
    var_20 |= 0U;
    var_21 *= ((/* implicit */unsigned char) var_9);
    var_22 = ((/* implicit */unsigned char) var_3);
    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (unsigned char)88))));
}
