/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148782
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
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) var_9))));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_12))))))) : ((~(((long long int) var_16))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                {
                    var_22 -= ((/* implicit */unsigned int) (~(max((((((/* implicit */_Bool) var_4)) ? (1719775939144519764ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)35198)))))))));
                    var_23 -= ((/* implicit */_Bool) max((((unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [(_Bool)1]))) : (1719775939144519764ULL)))), (((/* implicit */unsigned long long int) var_15))));
                }
            } 
        } 
    } 
}
