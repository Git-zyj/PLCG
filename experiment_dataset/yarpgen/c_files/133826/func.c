/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133826
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
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(736707094U)))) ? (min((((/* implicit */int) ((((/* implicit */int) (signed char)127)) <= (((/* implicit */int) var_2))))), ((+(((/* implicit */int) (_Bool)1)))))) : ((-(((/* implicit */int) ((((/* implicit */_Bool) 15285990589040811023ULL)) || (((/* implicit */_Bool) (short)10247))))))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) arr_4 [i_0 + 1] [(unsigned short)6] [i_1]))));
                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) arr_4 [i_0 - 1] [(_Bool)1] [i_1]))));
                var_17 = ((/* implicit */signed char) min((var_17), (arr_4 [i_0 - 1] [6LL] [i_0 + 1])));
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned char) (~(((/* implicit */int) (short)-29802)))))), (max((4194303U), (max((arr_3 [i_0 + 1] [i_0 - 1] [i_0 - 1]), (((/* implicit */unsigned int) (signed char)127)))))))))));
            }
        } 
    } 
}
