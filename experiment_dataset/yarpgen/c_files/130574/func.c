/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130574
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
    var_10 = ((/* implicit */_Bool) (unsigned short)0);
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) (_Bool)1))) * ((+(((/* implicit */int) var_3))))))) : (var_8)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0 + 1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((unsigned int) (-9223372036854775807LL - 1LL))))))));
                var_12 -= ((/* implicit */unsigned short) ((((int) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) var_9))))) < (((/* implicit */int) (_Bool)1))));
                var_13 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) var_2))))) ? (((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */unsigned char) var_3))))) : (arr_3 [i_0] [i_0 + 1] [i_0 + 2]))), (((/* implicit */int) (unsigned short)0))));
            }
        } 
    } 
}
