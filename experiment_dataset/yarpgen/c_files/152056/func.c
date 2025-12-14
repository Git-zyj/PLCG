/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152056
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
    var_16 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) var_13))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 4; i_2 < 20; i_2 += 2) 
            {
                {
                    var_17 &= ((/* implicit */short) (-(((((/* implicit */_Bool) arr_6 [i_2 - 2] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)111))) : (arr_7 [i_2 - 2] [i_1] [i_1])))));
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)14718)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))))) ? (max((arr_5 [i_0] [i_1] [i_0]), (((/* implicit */unsigned long long int) 4294967293U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (signed char)70))))))))))));
                    arr_8 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */short) max((((int) ((signed char) var_10))), (((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_4 [i_2])) : (var_1))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7))))))));
                }
            } 
        } 
    } 
}
