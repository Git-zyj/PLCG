/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100799
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
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        arr_2 [(unsigned char)3] = ((/* implicit */unsigned long long int) ((-5859567229523895994LL) / (((/* implicit */long long int) ((arr_0 [i_0 + 3] [i_0 + 3]) >> (((arr_0 [i_0 + 2] [i_0 + 2]) - (1220329844))))))));
        var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)0))));
        var_21 -= (+(arr_1 [i_0 + 1]));
        var_22 = ((/* implicit */unsigned short) arr_1 [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)32750)))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            {
                var_23 = ((var_9) / (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)90)) ? (((/* implicit */int) var_3)) : (var_11)))) + (arr_1 [i_1])))));
                var_24 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned char) (signed char)8))), ((+(((/* implicit */int) arr_7 [i_1] [i_1] [i_1]))))));
                var_25 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)35020))));
            }
        } 
    } 
    var_26 ^= ((/* implicit */_Bool) (((+(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))) - (((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) >> ((((~(var_10))) + (5471216092798096288LL)))))));
    var_27 = ((/* implicit */signed char) var_17);
}
