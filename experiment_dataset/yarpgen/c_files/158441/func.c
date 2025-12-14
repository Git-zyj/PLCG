/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158441
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
    var_10 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)127))))) ? (((/* implicit */int) var_5)) : (max((((/* implicit */int) max((((/* implicit */short) var_8)), (var_7)))), (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)255))))))));
    var_11 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) ^ (((unsigned long long int) var_5)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            {
                var_12 = (-(((/* implicit */int) var_8)));
                var_13 ^= ((((/* implicit */unsigned long long int) ((int) arr_3 [i_1 - 3] [i_1 - 1] [i_1 + 1]))) ^ (min((((/* implicit */unsigned long long int) -586499009)), (3993586107653158233ULL))));
            }
        } 
    } 
    var_14 &= ((/* implicit */_Bool) ((max((((((/* implicit */int) var_7)) ^ (var_9))), (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) var_5))))))) - (((int) -846685742493470050LL))));
    var_15 &= ((/* implicit */short) (~(var_4)));
}
