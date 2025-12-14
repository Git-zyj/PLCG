/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177080
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
    var_19 = ((/* implicit */signed char) ((((var_1) ? (((/* implicit */long long int) ((((/* implicit */int) (short)12731)) & (((/* implicit */int) (_Bool)1))))) : ((~(var_10))))) | (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_6))))));
    var_20 = ((/* implicit */unsigned int) min((var_20), (((unsigned int) (unsigned short)4616))));
    var_21 |= ((/* implicit */_Bool) (+(((/* implicit */int) ((((((/* implicit */_Bool) var_18)) ? (4294967275U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4614))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) var_11)))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_22 += ((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-92)))))))), (536870400U)));
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */int) (unsigned short)65521)) : (((/* implicit */int) (_Bool)1))))));
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483629)) ? (var_10) : (((arr_3 [i_0] [i_1] [i_0]) >> (((/* implicit */int) (short)0))))));
            }
        } 
    } 
}
