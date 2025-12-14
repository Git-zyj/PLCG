/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167210
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
    var_14 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)0))));
    var_15 = ((/* implicit */short) min((max((max((var_1), (((/* implicit */unsigned long long int) (short)192)))), (((/* implicit */unsigned long long int) ((short) var_12))))), (((/* implicit */unsigned long long int) var_7))));
    var_16 = ((/* implicit */unsigned short) var_7);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */long long int) var_13);
                    var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) min((min((((/* implicit */short) var_5)), ((short)192))), (max((var_7), (((/* implicit */short) var_13)))))))));
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((int) var_0));
                }
            } 
        } 
    } 
}
