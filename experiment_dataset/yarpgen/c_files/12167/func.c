/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12167
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
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) 144115188075855872LL)) ? (((/* implicit */int) (short)-5586)) : (((/* implicit */int) (signed char)16))));
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((unsigned int) var_1))) == (var_5)))) * ((-(((-156767106) ^ (((/* implicit */int) (unsigned char)160))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 20; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((((/* implicit */long long int) 156767105)), (144115188075855872LL)))) ? (((/* implicit */unsigned long long int) (~(144115188075855872LL)))) : ((~(var_9))))) ^ (((/* implicit */unsigned long long int) ((long long int) (signed char)87)))));
                    arr_6 [i_1] [18LL] [i_2 - 2] = arr_4 [i_1] [i_1] [i_2];
                    arr_7 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (156767114) : (((/* implicit */int) arr_2 [i_0] [i_1]))))) < (arr_4 [i_1] [i_2 - 3] [i_2 - 1]))))));
                }
            } 
        } 
    } 
}
