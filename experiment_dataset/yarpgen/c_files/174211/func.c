/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174211
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((0U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */int) var_10)))))))) ? ((-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_0)))))) : (max((((/* implicit */int) ((((/* implicit */_Bool) 3146632443311698840LL)) || (((/* implicit */_Bool) var_3))))), (max((-200989230), (((/* implicit */int) (signed char)-76))))))));
    var_14 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) << (((((/* implicit */int) var_0)) + (65)))))) - (((((/* implicit */_Bool) var_8)) ? ((-(var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)39838)) ? (min((((var_11) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (var_11))) : (((/* implicit */unsigned long long int) var_7))));
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (~(((6481592313588343668ULL) / (((/* implicit */unsigned long long int) var_8)))))))));
                arr_6 [i_1 - 4] [i_0] = ((/* implicit */signed char) (_Bool)1);
            }
        } 
    } 
}
