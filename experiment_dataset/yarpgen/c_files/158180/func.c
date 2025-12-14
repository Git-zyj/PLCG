/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158180
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
    for (short i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_7 [12ULL] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) + (((/* implicit */int) var_8))))) ? (((0U) / (4294967295U))) : (min((var_1), (((/* implicit */unsigned int) var_4))))))) ? (((1636255527) >> (((((/* implicit */int) (unsigned char)255)) - (230))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((var_0), (var_3)))))))));
                    var_11 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) >= (((/* implicit */int) ((min((((/* implicit */unsigned long long int) 4294967270U)), (6441773972328624960ULL))) <= (min((((/* implicit */unsigned long long int) var_10)), (var_6))))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */unsigned int) min((var_2), (((/* implicit */unsigned short) var_9)))))))) : (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_8)), (var_0)))), (((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))))))));
    var_13 = min((((/* implicit */unsigned long long int) min((min((var_7), (((/* implicit */unsigned int) var_4)))), (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) | (((/* implicit */int) var_9)))))))), ((-(var_6))));
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2585261584U)) ? (((/* implicit */int) (unsigned short)51144)) : (((/* implicit */int) (unsigned char)118))));
}
