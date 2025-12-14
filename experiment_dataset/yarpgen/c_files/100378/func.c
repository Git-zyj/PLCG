/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100378
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
    var_19 = ((/* implicit */short) min((var_19), (((short) ((unsigned char) ((_Bool) var_1))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 7; i_2 += 1) 
            {
                {
                    arr_8 [i_2 + 3] = ((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) (unsigned char)0)))));
                    arr_9 [i_0] [i_0] [(short)8] [i_2] = ((/* implicit */unsigned char) max((max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) != (-3171445380537162428LL)))), ((~(((/* implicit */int) var_16)))))), ((~(((((/* implicit */int) (short)17055)) ^ (((/* implicit */int) var_12))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) (-((((+(((/* implicit */int) var_12)))) / ((~(((/* implicit */int) var_3))))))));
}
