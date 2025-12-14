/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16803
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
    var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_18)) - (((/* implicit */int) (signed char)1)))) ^ (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)11))))) >= (((/* implicit */int) ((unsigned short) var_10))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 23; i_1 += 2) 
        {
            {
                var_20 -= ((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0]);
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12984741013483053421ULL)) ? (5462003060226498206ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61855)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_18)) != (((/* implicit */int) (unsigned short)65525))))) ^ (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_5) : (arr_4 [i_1] [i_1] [i_1 - 3])))))) : (((((/* implicit */_Bool) arr_5 [i_1] [i_1 - 2] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((1685242073597690190ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)8))))))) : (arr_3 [i_1] [i_1]))))))));
            }
        } 
    } 
}
