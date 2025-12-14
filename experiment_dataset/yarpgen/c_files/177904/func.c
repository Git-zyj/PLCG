/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177904
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
    var_20 |= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) min((var_16), (((/* implicit */unsigned short) var_9)))))) != (((((/* implicit */_Bool) ((523264LL) - (((/* implicit */long long int) ((/* implicit */int) var_16)))))) ? (-8991631402381371252LL) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)51671), (((/* implicit */unsigned short) (signed char)119))))))))));
    var_21 = ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)43799)), (((((/* implicit */_Bool) (unsigned short)29786)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-108))) : (2154618552194724961LL)))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)98)) >= (((((/* implicit */int) (unsigned short)29782)) - (((/* implicit */int) (_Bool)1))))))) : (max((((((/* implicit */_Bool) (unsigned short)21732)) ? (var_3) : (((/* implicit */int) (signed char)127)))), (((/* implicit */int) (signed char)0)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */long long int) max((((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)-18695))) < (2154618552194724961LL)))), ((signed char)-122)))), ((-(((/* implicit */int) var_16))))));
                    var_23 ^= ((short) (unsigned short)43799);
                    var_24 = ((((/* implicit */int) (signed char)127)) - (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)21737)))));
                    var_25 = ((/* implicit */short) (((+((-(((/* implicit */int) (unsigned short)21738)))))) > (((/* implicit */int) ((_Bool) ((signed char) var_6))))));
                }
            } 
        } 
    } 
    var_26 |= ((/* implicit */int) ((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)43799)) ? (((/* implicit */int) (unsigned char)93)) : (((/* implicit */int) (unsigned short)35760))))) : (max((((/* implicit */long long int) var_13)), (var_15)))))) == (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)63)) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14647)))))), (var_11)))));
}
