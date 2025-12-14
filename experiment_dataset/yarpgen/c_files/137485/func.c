/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137485
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) max((var_0), (((/* implicit */short) var_1)))))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (17U)))) ? (max((34U), (4294967249U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_9)))))))));
    var_16 = ((((/* implicit */int) ((((/* implicit */_Bool) (~(4294967285U)))) && (((/* implicit */_Bool) -1929803443))))) != (((/* implicit */int) var_11)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 6; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [4] [i_2] &= ((/* implicit */unsigned short) ((min((4294967280U), (9U))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((20U) > (((/* implicit */unsigned int) arr_5 [i_0 - 1]))))))));
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (+((+(31U)))));
                }
            } 
        } 
    } 
}
