/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135780
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */_Bool) (~((+(((arr_4 [i_1] [8ULL] [i_0]) * (((/* implicit */int) var_1))))))));
                var_20 |= ((/* implicit */signed char) ((17778655659250853341ULL) / (min((((((/* implicit */_Bool) 668088414458698274ULL)) ? (668088414458698300ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((668088414458698275ULL) / (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0]))))))));
                var_21 &= ((/* implicit */signed char) (short)15112);
                var_22 = ((((/* implicit */_Bool) (short)25840)) ? (-5983229126221779848LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)16))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (_Bool)1)) : (var_17)))))))));
    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (!(((/* implicit */_Bool) (short)-25847)))))));
}
