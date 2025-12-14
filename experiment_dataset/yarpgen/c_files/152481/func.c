/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152481
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
    var_16 = ((/* implicit */long long int) ((max((((((/* implicit */_Bool) (unsigned short)8580)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12)))), (((((/* implicit */_Bool) (unsigned short)8580)) ? (((/* implicit */int) (unsigned short)10657)) : (-662950374))))) < (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)65535)) : (((((/* implicit */_Bool) 1569890410)) ? (((/* implicit */int) (unsigned short)8561)) : (((/* implicit */int) (unsigned short)56956))))))));
    var_17 = ((/* implicit */int) 3972715201U);
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) max((((/* implicit */long long int) (unsigned short)0)), (-6078472035170573766LL))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_7 [i_0 + 3] [i_0 + 3] [i_2 + 1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)56975))))))))) * (((((/* implicit */_Bool) var_6)) ? (((var_2) ^ (((/* implicit */unsigned int) -758247912)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)26044)) ? (((/* implicit */int) (unsigned char)206)) : (((/* implicit */int) (unsigned char)200)))))))));
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(6033811917685327476ULL)))))))));
                }
            } 
        } 
    } 
}
