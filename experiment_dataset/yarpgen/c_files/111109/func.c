/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111109
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
    var_19 = (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_14)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)46))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)46)))))))));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) ((unsigned char) (unsigned short)45077))), ((+(((/* implicit */int) (unsigned short)45077))))))) ? (var_0) : (((((/* implicit */_Bool) (short)8072)) ? ((+(var_2))) : (3484235378U)))));
    var_21 &= ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_0) : (var_0)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)55)) ? (((/* implicit */int) (unsigned char)22)) : (((/* implicit */int) (short)-8096))))) : (var_2)))), (((long long int) 3484235369U))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) 2147483642))));
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) var_2);
                }
            } 
        } 
    } 
}
