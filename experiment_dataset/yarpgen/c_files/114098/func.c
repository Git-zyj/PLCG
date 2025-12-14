/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114098
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
    var_18 = ((/* implicit */unsigned char) (-(5753321738231238194LL)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] [i_1 - 2] = ((/* implicit */unsigned short) ((signed char) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_0] [(unsigned char)13])) : (((/* implicit */int) arr_3 [i_0 - 3] [i_0 - 3])))) ^ (((/* implicit */int) arr_0 [i_0] [i_0 + 4])))));
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) + ((~((((_Bool)1) ? (5753321738231238194LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29504)))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) min((((/* implicit */int) var_1)), ((-(((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) var_15)))))))));
    var_21 &= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */int) var_9)) >> (((var_12) - (77329360673874383LL)))))) ? (max((((/* implicit */unsigned int) var_13)), (var_15))) : (((/* implicit */unsigned int) var_17))))));
    var_22 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)83)) : (((/* implicit */int) (unsigned short)1023))))) ? (max((var_17), (((/* implicit */int) var_6)))) : (((/* implicit */int) max((var_8), (var_1))))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)31))));
}
