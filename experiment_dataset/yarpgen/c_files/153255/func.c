/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153255
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */int) var_1)) < ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (-1828326248)))))) : (((/* implicit */int) max((max((var_0), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) (_Bool)1)))))));
    var_12 = ((/* implicit */unsigned int) -1828326248);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2 - 1] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [13])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_2])))))) > (((((/* implicit */_Bool) -1828326248)) ? (max((1828326247), (((/* implicit */int) (signed char)25)))) : (((/* implicit */int) var_2))))));
                    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) arr_3 [i_1 + 1] [i_0]))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) max((((/* implicit */int) (_Bool)1)), (1828326275)));
}
