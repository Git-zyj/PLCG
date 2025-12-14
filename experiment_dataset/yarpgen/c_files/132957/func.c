/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132957
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
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)8)) >> (((/* implicit */int) (unsigned short)8))))) & (var_14)))) ? ((~(((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned short)8)) : (((/* implicit */int) (unsigned short)65527)))))) : (((/* implicit */int) var_12))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [16LL] [i_1 + 1] |= ((/* implicit */int) (unsigned short)35203);
                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)10298))))))))))));
            }
        } 
    } 
    var_19 |= ((/* implicit */int) (-(var_4)));
}
