/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158322
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
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (+((~(((/* implicit */int) arr_4 [i_0]))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) + ((+(18365492926999799177ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned short) -105769698))) == (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_0 [i_0]))))))))));
                var_15 = ((/* implicit */unsigned int) max((((/* implicit */long long int) max((((((/* implicit */_Bool) (short)16320)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_0)))), ((-(((/* implicit */int) (short)-16333))))))), (((((/* implicit */_Bool) (short)-11971)) ? (-5660481399498074927LL) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_8)))))))));
            }
        } 
    } 
    var_16 -= ((/* implicit */signed char) max((2639355060U), (((/* implicit */unsigned int) var_6))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) ((_Bool) arr_8 [i_2]));
        var_18 = ((/* implicit */unsigned int) var_12);
    }
}
