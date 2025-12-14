/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105306
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
    var_10 = var_2;
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                {
                    arr_9 [i_0] = ((short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0 - 1] [i_0 + 1]))))), (1370456256U)));
                    var_11 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_4 [i_2 + 3] [i_1] [i_0 - 1])) ? (((unsigned long long int) (short)(-32767 - 1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) min((((/* implicit */short) min(((unsigned char)152), (min((var_5), (((/* implicit */unsigned char) (_Bool)1))))))), ((short)21873)));
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) (~(-1))))) ? ((~(((/* implicit */int) ((unsigned short) (short)31174))))) : (((((/* implicit */int) (signed char)0)) * (((/* implicit */int) var_0)))))))));
}
