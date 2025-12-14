/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149028
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
    var_12 &= max((((((/* implicit */int) ((268173312) == (((/* implicit */int) var_6))))) ^ ((~(((/* implicit */int) (unsigned char)75)))))), (((((/* implicit */_Bool) (unsigned char)182)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) var_0))))))));
    var_13 = ((/* implicit */signed char) max((((/* implicit */int) var_11)), (((((/* implicit */_Bool) (unsigned char)73)) ? (-1396949940) : (((/* implicit */int) max(((unsigned char)74), (((/* implicit */unsigned char) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */long long int) 1048064U)) + (var_1))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_2 [i_0 - 3] [i_0 - 3] [i_0 - 3])) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_0])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)8)))))) : (22051786U)));
                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) max((max((((((/* implicit */_Bool) 903396399U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (4272915509U))), (((903396399U) << (((/* implicit */int) var_5)))))), (((/* implicit */unsigned int) var_0)))))));
                var_16 *= ((_Bool) ((((/* implicit */int) (_Bool)1)) & (((((/* implicit */_Bool) (short)-2400)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)11))))));
                var_17 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63802))) % (3391570905U)));
            }
        } 
    } 
}
