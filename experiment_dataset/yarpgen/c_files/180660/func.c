/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180660
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
    for (unsigned int i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 22; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) max((var_5), (var_5)));
                var_10 = ((/* implicit */int) ((((/* implicit */_Bool) 1048560U)) ? (((7593203870395275309ULL) << (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_1 - 3])) : (((/* implicit */int) var_2)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) + (((/* implicit */int) max((var_6), (var_1)))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */short) max(((-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-4572)) : (((/* implicit */int) var_9)))))), (((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) var_5))))) <= (((((/* implicit */_Bool) (unsigned short)52464)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (short)-32648))))))))));
}
