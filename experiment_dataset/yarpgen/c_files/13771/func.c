/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13771
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 15; i_0 += 2) 
    {
        var_20 |= ((/* implicit */unsigned short) ((_Bool) (unsigned short)56811));
        var_21 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) 14348130277364525656ULL))));
    }
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        var_22 = ((/* implicit */unsigned short) (-(((unsigned int) arr_2 [i_1] [i_1]))));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-2604)) % (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
    }
    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((_Bool) min((((/* implicit */short) (_Bool)1)), ((short)-2600)))))));
}
