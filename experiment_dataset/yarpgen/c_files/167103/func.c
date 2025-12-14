/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167103
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)69)) ? (((/* implicit */int) (unsigned short)65531)) : (((/* implicit */int) (_Bool)1))))) ? ((-((-(((/* implicit */int) (unsigned char)123)))))) : (((/* implicit */int) (signed char)-88))));
                arr_7 [i_0] [i_1] = (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63161))) ^ (((((/* implicit */_Bool) arr_1 [i_0])) ? (14788646910780245150ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)135)))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) (unsigned char)115);
    var_14 = ((/* implicit */unsigned int) (unsigned char)249);
    var_15 = ((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) min((((/* implicit */unsigned short) (unsigned char)76)), (var_1)))))));
    var_16 = ((/* implicit */unsigned short) min(((_Bool)1), (((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)115))))) > (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_6)))))));
}
