/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116253
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
    var_11 |= ((/* implicit */unsigned char) (+(((/* implicit */int) var_8))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */short) var_7);
                    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)0))));
                    arr_8 [i_1] = ((/* implicit */_Bool) (~(((unsigned int) ((((/* implicit */_Bool) 2569953056U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))))));
                }
            } 
        } 
    } 
    var_14 = var_1;
}
