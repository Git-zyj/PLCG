/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153271
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 19183655436619952ULL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)7887))));
                    arr_6 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)16384))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) * (432345564227567616ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6937)))));
                }
            } 
        } 
    } 
    var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3136416738U)) ? (((((/* implicit */_Bool) 7124981748952332635ULL)) ? (7124981748952332646ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)25))))) : ((-(((7124981748952332635ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4677)))))))));
}
