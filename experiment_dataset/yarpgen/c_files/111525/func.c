/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111525
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
    var_11 = ((/* implicit */unsigned int) max((var_5), (((/* implicit */unsigned long long int) var_2))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) max((min((((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (var_2)))), (((((/* implicit */_Bool) 711627767876566448ULL)) ? (((/* implicit */int) (unsigned char)238)) : (((/* implicit */int) arr_4 [i_0] [i_0])))))), (((/* implicit */int) (unsigned char)159))));
                    arr_9 [i_0] [(unsigned short)12] [6ULL] [i_0] = ((/* implicit */unsigned int) arr_6 [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) var_6))));
}
