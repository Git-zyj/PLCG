/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183261
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
    var_14 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)100))) : (16383ULL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) / (3845354767266554482ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)139)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 4; i_2 < 18; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */signed char) max(((~((-(((/* implicit */int) (unsigned char)210)))))), (((((/* implicit */_Bool) (unsigned char)47)) ? (((/* implicit */int) (unsigned char)100)) : (((/* implicit */int) (short)4))))));
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned char) (short)4))))))));
                    arr_6 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned short)4088)))) + (4294967295U)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) 2677518881U))))), (((((/* implicit */_Bool) (unsigned char)177)) ? (((/* implicit */int) (unsigned char)139)) : (((/* implicit */int) (unsigned char)0))))))) : (18446744073709551615ULL)));
                }
            } 
        } 
    } 
}
