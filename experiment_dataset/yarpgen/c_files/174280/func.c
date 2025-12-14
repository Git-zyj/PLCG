/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174280
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
    var_11 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)65050))));
    var_12 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4216928528U)) || (((/* implicit */_Bool) (+(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) var_7))));
                    var_14 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35717))) >= (7823035426847380613ULL)))) & (((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) var_1)))))));
                    var_15 -= ((/* implicit */short) ((((((/* implicit */_Bool) var_7)) ? (1005289561U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) + (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)29812)) <= (((/* implicit */int) (unsigned short)494))))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)88))));
    var_17 = ((/* implicit */_Bool) max(((+(var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_1))))) >> (((var_4) - (1221576886))))))));
}
