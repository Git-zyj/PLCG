/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172311
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [(_Bool)1] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) min(((unsigned char)165), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_7))))))))));
                arr_6 [i_0] [i_1] = (unsigned char)233;
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
    var_16 = ((((/* implicit */int) ((((((/* implicit */unsigned long long int) var_11)) / (var_1))) != (((/* implicit */unsigned long long int) ((258048U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)233))))))))) | (max(((~(((/* implicit */int) (unsigned short)36182)))), (((((/* implicit */int) (unsigned short)65491)) * (((/* implicit */int) (unsigned char)23)))))));
}
