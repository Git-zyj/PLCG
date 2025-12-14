/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147298
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                var_18 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (915655567) : (((/* implicit */int) (unsigned char)110))))) / (4294967268U)));
                arr_5 [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 44712514U)))))));
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) ^ (4294967259U))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)58879)) | (((/* implicit */int) (unsigned short)30239)))))))) <= ((~(((((/* implicit */_Bool) -5680998112571340701LL)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
                arr_6 [i_1] = ((/* implicit */signed char) max((((((/* implicit */unsigned int) ((/* implicit */int) ((44712512U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)14783))))))) & (((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))), ((+(((((/* implicit */_Bool) var_6)) ? (3484299926U) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) min((max((((/* implicit */int) ((466448713U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))), (var_8))), (((/* implicit */int) var_16))));
}
