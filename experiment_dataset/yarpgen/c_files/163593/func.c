/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163593
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
    var_20 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((((((/* implicit */int) var_1)) | (var_17))) << (((((((/* implicit */_Bool) 14904114095536122808ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)31)))) - (1)))))) : (max(((-(var_8))), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (var_16)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (signed char)(-127 - 1)))));
                arr_4 [(_Bool)1] |= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned short) arr_3 [i_0] [i_0])))) ? (((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)(-127 - 1))))) ? (((/* implicit */int) ((signed char) (signed char)12))) : ((~(((/* implicit */int) (signed char)103)))))) : (((/* implicit */int) ((((/* implicit */int) ((unsigned char) -3521480575176978815LL))) != (((/* implicit */int) ((unsigned short) arr_3 [i_1] [i_0]))))))));
            }
        } 
    } 
    var_22 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */int) var_6)) ^ (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-7410))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (((unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
}
