/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114839
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
    var_13 += ((/* implicit */long long int) (!(((/* implicit */_Bool) (+((-(var_5))))))));
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(1290000083))))))))))));
    var_15 = (+((+((-(((/* implicit */int) var_11)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1 - 2] [i_1 - 2] = ((/* implicit */short) (-((+((+(((/* implicit */int) (unsigned char)231))))))));
                    arr_10 [i_0] [i_1] [3LL] [i_0] = ((/* implicit */int) (-((~((+(-3459606134927418900LL)))))));
                }
            } 
        } 
    } 
    var_16 -= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)30554))));
}
