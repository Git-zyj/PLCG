/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128484
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
    var_16 = ((/* implicit */short) var_3);
    var_17 &= ((short) (~(((/* implicit */int) ((unsigned char) var_12)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((var_6) - (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [13ULL]))))), (((unsigned int) var_10))))) ? ((-(((/* implicit */int) var_10)))) : (var_13)));
                var_19 = ((/* implicit */unsigned int) (unsigned char)121);
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((-6645124633270303790LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)112)))));
}
