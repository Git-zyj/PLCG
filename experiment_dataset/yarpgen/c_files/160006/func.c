/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160006
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((short) 4694495282088108234ULL))))))) / (((long long int) ((long long int) (signed char)-103)))));
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_8)))) ? ((+(var_4))) : (((/* implicit */long long int) (+(((/* implicit */int) var_15)))))))) ? ((+(((/* implicit */int) var_0)))) : (((((/* implicit */int) ((unsigned short) 2711047563U))) * (((((/* implicit */int) (signed char)-1)) / (((/* implicit */int) (short)102))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1] [i_1] [i_1])) & (((/* implicit */int) arr_0 [i_1]))))) || (((/* implicit */_Bool) ((arr_4 [i_0 + 1] [i_0 - 2] [i_0 + 2]) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_4 [i_0 + 2] [i_1] [i_1])))))));
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) (signed char)-1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0 + 2]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-67)))))));
            }
        } 
    } 
}
