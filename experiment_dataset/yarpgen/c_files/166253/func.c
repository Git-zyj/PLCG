/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166253
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
    var_14 = ((((/* implicit */unsigned long long int) max((((/* implicit */int) min((var_12), (var_12)))), (((1712120662) / (((/* implicit */int) var_13))))))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) != (var_1))))) / (((var_9) / (var_9))))));
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */unsigned long long int) var_1)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) - (var_3)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) + (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)0))))))) : (max((var_4), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (short)-16384)), ((unsigned short)13))))))));
    var_16 = ((/* implicit */unsigned char) min((min((((var_5) << (((var_3) - (15142371046142926224ULL))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_9))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_2)))) % (min((var_9), (((/* implicit */unsigned long long int) var_6))))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */unsigned long long int) var_1))))))) ? (min((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) / (var_4))))) : (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))));
                    arr_8 [i_0 - 1] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((unsigned int) ((var_8) << (((/* implicit */int) var_11)))))) < (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) * (var_5))), (((/* implicit */unsigned long long int) var_2))))));
                }
            } 
        } 
    } 
}
