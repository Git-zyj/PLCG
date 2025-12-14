/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128215
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
    var_15 -= ((/* implicit */unsigned char) var_14);
    var_16 = ((/* implicit */unsigned long long int) var_0);
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_2))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [i_1] [i_2] [i_2] |= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((arr_8 [i_1] [(short)10]) ^ (arr_3 [i_0] [i_0]))) : (((/* implicit */int) arr_1 [i_1]))))));
                    var_18 = ((/* implicit */int) min((var_18), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) max((arr_0 [i_2]), (arr_0 [i_0]))))))))));
                    var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned char)75)) : (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
}
