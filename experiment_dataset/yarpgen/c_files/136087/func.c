/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136087
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */signed char) (-(((unsigned int) ((short) var_5)))));
                var_13 |= ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((long long int) 310610014795463874LL))) : ((~(((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) 2206779720350094140LL))))))));
                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */_Bool) (-(((int) (short)242))))) ? (min((((((/* implicit */_Bool) 310610014795463874LL)) ? (24ULL) : (((/* implicit */unsigned long long int) -2206779720350094140LL)))), (((/* implicit */unsigned long long int) ((short) 2206779720350094140LL))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))))));
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1])))))) == (arr_1 [i_0] [i_1])));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) (_Bool)1);
}
