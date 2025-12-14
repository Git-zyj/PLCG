/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168060
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_16 = ((signed char) 21U);
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) min(((~(((unsigned int) -5882993066166876695LL)))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-120)) <= (((/* implicit */int) arr_3 [i_0] [i_1]))))))))));
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */long long int) min((((((/* implicit */_Bool) (signed char)-48)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_2 [i_1])))), (2147483647)))) / (((arr_4 [i_0]) | (((/* implicit */long long int) 21U)))))))));
            }
        } 
    } 
    var_19 -= ((/* implicit */unsigned short) ((signed char) 4294967275U));
    var_20 = ((/* implicit */int) min((((/* implicit */long long int) min((4294967274U), (4294967277U)))), ((+(((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))))));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)31)) <= (((/* implicit */int) (short)-10170))))), (23U)))) == (var_13)));
    var_22 ^= ((/* implicit */unsigned int) var_8);
}
