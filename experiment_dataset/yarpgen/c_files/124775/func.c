/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124775
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) max(((unsigned short)7), (((/* implicit */unsigned short) (unsigned char)214)))))))), (((((/* implicit */_Bool) -1750748397)) ? (arr_0 [i_1]) : (((long long int) (unsigned char)145))))));
                var_14 = ((/* implicit */unsigned int) min((max((((((/* implicit */_Bool) 3004098351846415394ULL)) ? (((/* implicit */int) var_11)) : (2014807834))), (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) arr_4 [i_1] [(unsigned char)2]))));
                var_15 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : ((+(arr_0 [i_0])))));
                var_16 = ((/* implicit */int) var_0);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (144106391982833664ULL) : (((/* implicit */unsigned long long int) var_9))));
}
