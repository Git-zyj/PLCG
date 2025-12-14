/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107793
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
    var_11 &= var_0;
    var_12 = ((/* implicit */unsigned short) var_9);
    var_13 |= ((/* implicit */unsigned int) var_7);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(0U)));
                    var_14 = ((/* implicit */long long int) ((((/* implicit */long long int) (~(((/* implicit */int) min(((unsigned short)51910), ((unsigned short)13644))))))) >= (var_1)));
                    var_15 = ((/* implicit */long long int) max(((unsigned short)13625), (((/* implicit */unsigned short) (signed char)-100))));
                }
            } 
        } 
    } 
}
