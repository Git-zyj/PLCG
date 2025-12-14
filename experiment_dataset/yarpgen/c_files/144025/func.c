/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144025
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (min((-4294967296LL), (((/* implicit */long long int) 410641189U)))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
    var_14 = ((/* implicit */signed char) max((((/* implicit */int) var_2)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) ((short) var_10))) : (((/* implicit */int) var_12))))));
    var_15 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
    var_16 = ((/* implicit */signed char) ((var_3) << (((var_9) - (2279890292U)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (-(arr_0 [i_0 - 1])));
        var_17 = ((/* implicit */unsigned int) (short)1020);
    }
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 2; i_2 < 17; i_2 += 1) 
        {
            var_18 = max((4883450484550619880LL), (((/* implicit */long long int) (+(var_1)))));
            arr_9 [(signed char)8] [i_2 - 2] = ((/* implicit */short) var_0);
        }
        arr_10 [i_1] [i_1] = ((/* implicit */signed char) ((max((((/* implicit */unsigned int) (signed char)-43)), (((unsigned int) var_8)))) % (var_0)));
        arr_11 [i_1] [i_1] = ((/* implicit */long long int) ((short) arr_5 [i_1]));
    }
    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
    {
        arr_16 [i_3] = var_1;
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (~(((((/* implicit */_Bool) max((0U), (var_0)))) ? (max((((/* implicit */unsigned long long int) 9182444707033326872LL)), (arr_15 [i_3] [i_3]))) : (((/* implicit */unsigned long long int) (~(553924797U)))))))))));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (short)-1020))));
    }
}
