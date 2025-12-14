/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183835
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
    var_10 = ((/* implicit */short) max((((max((var_7), (((/* implicit */unsigned long long int) var_8)))) >> (((max((((/* implicit */unsigned long long int) var_0)), (var_5))) - (16288655001139623522ULL))))), (((/* implicit */unsigned long long int) var_6))));
    var_11 ^= ((/* implicit */long long int) max((var_5), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))) : (max((var_1), (((/* implicit */unsigned long long int) var_2))))))));
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) var_0))) + ((+(((/* implicit */int) var_9))))))) : (((((/* implicit */_Bool) ((var_2) ^ (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (var_5) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3)))))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (~(var_4)));
                    var_13 = ((long long int) ((((/* implicit */_Bool) var_3)) ? (((unsigned int) arr_4 [i_0] [i_0] [i_0 + 2])) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_5))))))));
                }
            } 
        } 
    } 
}
