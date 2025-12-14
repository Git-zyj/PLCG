/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169685
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_1] [i_2] = ((/* implicit */_Bool) ((unsigned long long int) (_Bool)1));
                    var_17 = ((/* implicit */short) max((((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_8)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) ((_Bool) var_7)))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((unsigned short) var_13));
    /* LoopSeq 1 */
    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_0)) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_1))))));
        var_20 = ((min((((/* implicit */int) var_8)), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))))) - (((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */int) var_4)))));
    }
}
