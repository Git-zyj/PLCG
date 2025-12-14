/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157539
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
    var_11 = ((unsigned char) (_Bool)1);
    var_12 = ((/* implicit */_Bool) var_0);
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) (signed char)-91))))))) || (((/* implicit */_Bool) max((((((/* implicit */int) var_6)) % (((/* implicit */int) var_10)))), ((~(((/* implicit */int) var_6)))))))));
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                var_15 = ((unsigned int) max((arr_4 [i_1]), (((/* implicit */long long int) (((_Bool)1) || (((/* implicit */_Bool) var_4)))))));
                arr_5 [i_0] [i_0] = ((/* implicit */short) (-(min((var_8), (((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)0)), (var_0))))))));
                var_16 -= ((/* implicit */long long int) 260096U);
            }
        } 
    } 
}
