/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159224
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
    for (int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned int) ((var_3) <= (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : ((+(-7705606277604530384LL)))))));
                var_13 = ((/* implicit */int) max((((short) ((((/* implicit */int) (signed char)-122)) == (-1144187715)))), (((/* implicit */short) ((arr_1 [i_0 - 2] [i_0 - 2]) || (((/* implicit */_Bool) ((long long int) var_5))))))));
            }
        } 
    } 
    var_14 *= ((/* implicit */long long int) var_5);
    var_15 = ((/* implicit */int) (((((~(((/* implicit */int) (_Bool)1)))) >= (((/* implicit */int) var_10)))) ? ((~(((((/* implicit */long long int) ((/* implicit */int) var_4))) & (4673724073111144094LL))))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) ((var_5) || (((/* implicit */_Bool) (short)32767))))) : (((/* implicit */int) ((var_1) <= (((/* implicit */long long int) ((/* implicit */int) var_10)))))))))));
    var_16 = ((/* implicit */short) (signed char)85);
}
