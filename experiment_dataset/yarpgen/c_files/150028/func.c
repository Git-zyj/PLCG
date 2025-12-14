/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150028
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
    var_19 = ((/* implicit */unsigned long long int) ((_Bool) ((long long int) var_0)));
    var_20 = ((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(0LL)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (int i_2 = 4; i_2 < 16; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */signed char) 12460161932685576740ULL);
                    var_22 = (~(((((((/* implicit */_Bool) (short)21)) || (((/* implicit */_Bool) 0LL)))) ? (((/* implicit */long long int) ((unsigned int) var_15))) : (((((-2LL) + (9223372036854775807LL))) >> (((arr_5 [i_1] [(unsigned char)15]) - (8706311994431022394ULL))))))));
                    var_23 = ((/* implicit */signed char) arr_3 [i_0] [i_0] [i_1]);
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */long long int) (+(((/* implicit */int) var_7))));
    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) & (0LL)));
}
