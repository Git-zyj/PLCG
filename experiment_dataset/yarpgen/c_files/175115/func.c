/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175115
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
    var_12 = ((/* implicit */int) (~((+(((var_0) >> (((var_11) - (2124377058U)))))))));
    var_13 = ((/* implicit */unsigned int) var_4);
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 22; i_2 += 2) 
            {
                {
                    var_14 = min((((/* implicit */int) ((((/* implicit */long long int) ((var_6) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))) < (arr_4 [i_0 - 2] [i_0 - 2] [i_0 - 3])))), (((((/* implicit */_Bool) ((unsigned short) var_5))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))));
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_3)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_7)));
                    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) (~(11537855206111667979ULL)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) 11537855206111667979ULL)) ? (((/* implicit */unsigned long long int) -5639347559639209983LL)) : (6908888867597883646ULL)));
}
