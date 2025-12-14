/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119175
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
    var_14 = ((/* implicit */unsigned long long int) var_13);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */short) var_5);
                    arr_7 [i_0] = ((/* implicit */unsigned short) (-(272287515706302472ULL)));
                    arr_8 [(short)2] [i_1] [(short)2] &= ((/* implicit */short) (~(((/* implicit */int) arr_2 [2] [i_2 - 1]))));
                }
            } 
        } 
    } 
    var_16 = min(((((-(var_8))) ^ (((/* implicit */unsigned int) ((int) var_2))))), (var_7));
    var_17 *= ((/* implicit */unsigned int) var_13);
    var_18 = ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) min((var_0), (var_0)))))) / (((((((/* implicit */_Bool) 18446744073709551592ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_4))) / (((/* implicit */long long int) ((/* implicit */int) var_12))))));
}
