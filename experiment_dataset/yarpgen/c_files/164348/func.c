/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164348
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
    for (long long int i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 1; i_2 < 22; i_2 += 1) 
                {
                    arr_7 [i_0 - 2] [i_1] [i_1] [(unsigned short)11] = ((/* implicit */short) ((((/* implicit */int) var_10)) < (((/* implicit */int) ((((/* implicit */int) (unsigned char)84)) >= (((/* implicit */int) var_6)))))));
                    var_12 = ((/* implicit */unsigned short) max((min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) 14056895626066916455ULL))))))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_2 + 3] [i_0 + 1])) || (((/* implicit */_Bool) var_10)))))));
                    var_13 = ((/* implicit */unsigned long long int) var_0);
                }
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) var_2);
                var_14 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) 3104119304U)) ? (((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 1])) : (((((/* implicit */_Bool) 2694584004710449295ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_5 [i_1])))))));
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (~(((/* implicit */int) var_10)))))));
            }
        } 
    } 
    var_16 = (unsigned short)65533;
    var_17 = ((/* implicit */long long int) var_6);
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((((/* implicit */int) var_10)) + (2147483647))) >> (((((/* implicit */int) var_2)) - (234))))), (((/* implicit */int) min((((/* implicit */short) var_10)), (var_0))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14))) : (var_7)));
}
