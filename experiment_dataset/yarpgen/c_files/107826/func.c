/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107826
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
    for (unsigned int i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_14 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 1995600115040323638ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)64)))), (((/* implicit */int) (unsigned short)49413))))) ? (((((/* implicit */_Bool) ((short) (unsigned short)27925))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 1]))) : (((((/* implicit */_Bool) (unsigned char)110)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_6 [i_0] [i_1]))))) : (((/* implicit */unsigned int) (((~(((/* implicit */int) arr_4 [i_0 - 3])))) ^ (((/* implicit */int) arr_4 [i_0]))))));
                var_15 *= ((/* implicit */unsigned int) (-((+((-(((/* implicit */int) arr_2 [i_0]))))))));
                var_16 ^= ((unsigned int) max(((unsigned char)0), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_9)))))));
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (-(((329606567) / (((/* implicit */int) (signed char)-49))))))) < ((-(706750459U)))));
            }
        } 
    } 
    var_18 = ((_Bool) min((((/* implicit */int) (unsigned char)64)), ((-(((/* implicit */int) (signed char)73))))));
}
