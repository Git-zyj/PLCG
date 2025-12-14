/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172019
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
    var_13 = ((/* implicit */short) var_8);
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((short) var_10)))));
    var_15 = ((/* implicit */long long int) ((unsigned long long int) max((var_2), (((/* implicit */int) min((var_4), (var_1)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8935243688140270492ULL)) ? (2983713103486514872ULL) : (((/* implicit */unsigned long long int) 4294967284U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (8935243688140270494ULL)));
                arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_6)) ? (min((((/* implicit */unsigned long long int) (short)-10103)), (9511500385569281123ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_10)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                var_17 = max((((short) (~(var_12)))), (((/* implicit */short) var_1)));
                var_18 = ((/* implicit */_Bool) min((3926036849U), (((/* implicit */unsigned int) var_5))));
                var_19 = ((/* implicit */unsigned int) ((long long int) 893041928));
            }
        } 
    } 
}
