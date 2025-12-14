/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114675
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
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 6; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        var_17 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_4)) ? (arr_3 [i_0 - 1]) : (arr_3 [i_0 + 2])))));
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_6 [4ULL] [4ULL] [4ULL])) != (arr_3 [i_0])));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-26225)) + (2147483647))) << (((((((/* implicit */_Bool) arr_8 [i_0 - 1] [7] [i_0 + 1] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -309460263)) * (4294967287U)))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (1125899906842623ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))) - (2785142367ULL)))));
    }
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? ((-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4)))))) : (((/* implicit */int) var_16))));
}
