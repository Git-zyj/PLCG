/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1289
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
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) min((((((/* implicit */int) var_5)) << (((((/* implicit */int) var_4)) - (5408))))), (((/* implicit */int) var_6))))) : (((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) != (var_0)))))))));
    var_14 = ((/* implicit */signed char) var_3);
    var_15 = ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */unsigned short) min((((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) arr_6 [i_1 + 2] [i_2] [i_1 - 1])))), ((~(((/* implicit */int) arr_3 [i_1 - 1] [i_1 + 1]))))));
                    var_16 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)46995)) ? (((/* implicit */int) (unsigned short)47007)) : (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 2]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)18517)) || (((/* implicit */_Bool) (unsigned short)18529))))) : ((+(((/* implicit */int) var_9))))));
                }
            } 
        } 
    } 
}
