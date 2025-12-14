/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150566
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
    var_15 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-((-(2398010644U)))))), ((~((-(2986122227988786614LL)))))));
    var_16 *= ((/* implicit */unsigned int) (~(((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (max((var_14), (((/* implicit */long long int) (short)(-32767 - 1)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            for (signed char i_2 = 4; i_2 < 21; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (-(arr_6 [i_0] [(short)12] [(signed char)0]))))));
                    var_18 = ((/* implicit */short) max((((/* implicit */long long int) var_8)), (max((((/* implicit */long long int) ((((/* implicit */unsigned int) -188148113)) <= (2891105186U)))), (3126737127812248583LL)))));
                }
            } 
        } 
    } 
}
