/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122455
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
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_11 [i_1] [i_1] = ((/* implicit */short) min((2147483621), (((/* implicit */int) (_Bool)0))));
                    var_10 = ((/* implicit */int) min((var_10), (((((/* implicit */int) ((8778142913207866610LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)23)))))) >> ((((-(((/* implicit */int) (_Bool)1)))) + (7)))))));
                    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((-1821240039) & ((-(((/* implicit */int) (short)-1)))))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */_Bool) max((var_12), (((var_3) >= (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
}
