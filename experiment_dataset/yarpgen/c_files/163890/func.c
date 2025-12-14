/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163890
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
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) var_11);
                var_16 = var_10;
                var_17 = ((/* implicit */short) min((((/* implicit */long long int) ((_Bool) ((unsigned long long int) var_8)))), (min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_9)) : (var_13))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0 + 2] [i_1 - 1])))))))));
                var_18 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-8612))) & (3053089232U)));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_9)) ? (((var_0) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_9) : (var_5)))))) : (var_10)));
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 3) 
        {
            {
                var_20 *= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((1722824139853977156LL) / (((/* implicit */long long int) 3712600496U))))), ((-(((((/* implicit */unsigned long long int) var_13)) - (var_10)))))));
                var_21 = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)71))) & (3558765838U));
            }
        } 
    } 
}
