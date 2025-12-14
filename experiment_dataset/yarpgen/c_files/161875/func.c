/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161875
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_6 [i_1] [i_1] &= ((/* implicit */unsigned char) (-(((((unsigned int) var_5)) + (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2 - 1] [i_2 + 1])))))));
                    arr_7 [i_1] [i_1] [2LL] [3ULL] = ((/* implicit */unsigned int) 128);
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-118))));
    var_13 *= ((/* implicit */unsigned char) var_1);
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) -1796422427)) ? (((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32748))) : (6116278044731451867LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)12288)) ? (2965780574U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43412)))))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)95)))));
    var_15 = ((/* implicit */short) max((((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (signed char)97)))), (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */unsigned long long int) var_8))))));
}
