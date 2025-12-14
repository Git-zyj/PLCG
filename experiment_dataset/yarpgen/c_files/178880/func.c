/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178880
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [(_Bool)1] = (+((~(((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))));
                var_18 ^= ((/* implicit */int) (+((~(((((/* implicit */_Bool) -2140311835)) ? (((/* implicit */unsigned long long int) 3353342961U)) : (var_11)))))));
                arr_7 [i_0] [i_1] &= ((/* implicit */int) var_5);
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) (+(var_2)))) ? ((+(var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) (+(4242611723U)))) != (((((/* implicit */long long int) -1257551499)) - (-4611686018427387904LL)))))))));
    var_20 = ((/* implicit */short) var_9);
}
