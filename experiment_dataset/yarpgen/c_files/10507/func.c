/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10507
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */_Bool) (-(var_4)));
                    var_13 = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_5 [4U] [(_Bool)1] [8U])) + (((/* implicit */int) arr_3 [8ULL] [(unsigned short)7] [(_Bool)1]))))));
                    var_14 = ((/* implicit */unsigned long long int) var_2);
                    var_15 = ((/* implicit */unsigned long long int) ((int) var_1));
                    var_16 = ((/* implicit */unsigned int) arr_0 [15LL]);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (min((var_9), ((~(var_5)))))));
}
