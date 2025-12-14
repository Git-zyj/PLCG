/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106105
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
    for (signed char i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */_Bool) (unsigned short)9576);
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) min(((-(((((/* implicit */int) (unsigned char)247)) | (1231597522))))), (((arr_1 [(unsigned char)4] [i_0 + 2]) ^ (((/* implicit */int) (!(((/* implicit */_Bool) -1231597516))))))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) min((9223372036854775807LL), (((/* implicit */long long int) (signed char)-126))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (5630652366038046754ULL) : (((/* implicit */unsigned long long int) min((min((((/* implicit */int) (unsigned short)48775)), (1231597528))), (((/* implicit */int) var_12)))))));
}
