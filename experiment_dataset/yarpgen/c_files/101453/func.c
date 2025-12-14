/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101453
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
    var_16 ^= ((/* implicit */unsigned short) var_1);
    var_17 = ((/* implicit */short) min((((/* implicit */int) var_10)), (var_9)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_18 ^= ((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_13))), (((/* implicit */long long int) (~(((/* implicit */int) var_1))))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
                arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)197)), (3633782444U)))) ? ((-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_6))))) : (((/* implicit */long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_7)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            {
                var_19 ^= ((/* implicit */_Bool) var_0);
                var_20 = ((/* implicit */signed char) var_7);
                arr_13 [i_2] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)18))))) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) var_4)))))))), (var_2)));
            }
        } 
    } 
}
