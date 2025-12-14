/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105166
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
    var_20 &= ((/* implicit */unsigned int) ((int) (short)3298));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */long long int) (~(((/* implicit */int) (((!(((/* implicit */_Bool) var_12)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 1714458893928931137ULL)) ? (-6250984051577249878LL) : (96497421092870486LL)))))))));
                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) var_13))));
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)3808)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) arr_6 [i_0] [9]))))))) : (min((((/* implicit */long long int) (-(((/* implicit */int) var_16))))), ((-(-96497421092870489LL)))))));
            }
        } 
    } 
}
