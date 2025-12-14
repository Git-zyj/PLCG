/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12552
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
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */unsigned int) min((((/* implicit */int) var_1)), (((int) 14404253628987606962ULL))))) - (((((/* implicit */_Bool) ((9223372036854775807LL) << (((((-6263208046980948951LL) + (6263208046980948955LL))) - (4LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_0) > (((/* implicit */long long int) ((/* implicit */int) var_13))))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31085))) : (var_4))))))))));
    var_18 = ((/* implicit */_Bool) ((((((/* implicit */int) ((unsigned short) var_11))) < (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)223))) <= (var_2)))))) ? (((/* implicit */unsigned long long int) -889105748)) : ((-(max((((/* implicit */unsigned long long int) (unsigned short)31091)), (7ULL)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((var_1) && (((/* implicit */_Bool) (-(var_2)))))))));
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) arr_6 [i_0]))));
                }
            } 
        } 
    } 
}
