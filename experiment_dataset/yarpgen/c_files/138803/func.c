/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138803
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
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_7 [i_1] [i_0] [i_1 + 1] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (short)13684))));
                    var_16 = ((/* implicit */short) (~((-(arr_0 [i_0])))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) (_Bool)1);
    var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-13685)) * ((~(((/* implicit */int) (signed char)-1)))))))));
    var_19 = ((/* implicit */unsigned long long int) (((+(((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)18860)))))) * (((((/* implicit */int) min(((unsigned char)4), (((/* implicit */unsigned char) var_0))))) * (((((/* implicit */int) var_15)) / (((/* implicit */int) var_7))))))));
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) min((var_9), (((/* implicit */unsigned short) var_14)))))))))))));
}
