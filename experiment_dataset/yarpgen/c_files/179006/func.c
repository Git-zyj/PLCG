/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179006
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
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (-(((((/* implicit */int) (unsigned char)224)) >> (((((/* implicit */int) (signed char)127)) - (125))))))))));
                var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3597847794033890205LL)) ? (min((4294967293U), (((/* implicit */unsigned int) 521950562)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 521950562)) ? (-1844618649) : (((/* implicit */int) var_4)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((var_7) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)225))))))) > (((/* implicit */long long int) -1844618623))));
    /* LoopNest 2 */
    for (unsigned char i_2 = 2; i_2 < 16; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned char) ((887418413060609852ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)218)))));
                /* LoopNest 3 */
                for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) (~(1181704090U)));
                                var_21 += ((/* implicit */long long int) ((((/* implicit */_Bool) -521950538)) ? (1ULL) : (((/* implicit */unsigned long long int) 1844618631))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
