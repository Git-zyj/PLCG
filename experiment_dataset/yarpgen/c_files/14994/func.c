/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14994
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
    var_12 &= ((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) (unsigned char)23)))))) | (((var_3) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) & (1448948307011175345ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)33813), (((/* implicit */unsigned short) (_Bool)0)))))))));
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((unsigned long long int) (unsigned short)28759)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (_Bool)0))));
                var_15 = ((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)28759)) || (((/* implicit */_Bool) 7571922105001791941ULL))))), (max(((unsigned short)36777), (((/* implicit */unsigned short) (_Bool)0)))))))));
            }
        } 
    } 
}
