/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15727
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) arr_1 [i_0]))));
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 2006901324)) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_1 [i_2]) : (-5393668201880104836LL))) : (((((/* implicit */_Bool) 8481474521338227628ULL)) ? (-5393668201880104836LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)97)))))))));
                }
            } 
        } 
    } 
    var_11 ^= ((/* implicit */short) ((unsigned char) ((((((/* implicit */_Bool) -2687030141106664992LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)160))) : (5393668201880104835LL))) * (((/* implicit */long long int) ((/* implicit */int) var_0))))));
}
