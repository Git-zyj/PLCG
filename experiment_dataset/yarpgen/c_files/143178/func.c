/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143178
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
    var_12 = ((/* implicit */unsigned char) (-((-(max((((/* implicit */long long int) 469762048U)), (5547353066937913203LL)))))));
    var_13 = ((/* implicit */long long int) ((max((var_7), (var_5))) != (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2)))))));
    var_14 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 9; i_3 += 1) 
                    {
                        {
                            var_15 += ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) & (var_6)))) ? (3LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))));
                            var_16 = ((/* implicit */signed char) -5547353066937913193LL);
                            var_17 |= (+(arr_3 [i_1 - 1]));
                        }
                    } 
                } 
                var_18 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((4078968754U) == (3804030662U)))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) (-(((((/* implicit */_Bool) 67108863LL)) ? (((unsigned long long int) 490936628U)) : (((/* implicit */unsigned long long int) -15LL))))));
}
