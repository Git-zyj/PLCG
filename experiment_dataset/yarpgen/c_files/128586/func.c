/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128586
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
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (((+(3123477370503518880LL))) - (((/* implicit */long long int) var_7))))) ? (((/* implicit */unsigned long long int) (+(2694574976U)))) : ((((+(var_10))) << (((((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */unsigned long long int) var_11)))) - (6479942150834380482ULL)))))));
    var_14 = ((/* implicit */unsigned short) (_Bool)1);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_15 &= ((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) >= (arr_3 [(signed char)12] [i_1]))))) / (-6088083452667522360LL)))));
                            arr_10 [9ULL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(3671008683395691096ULL))))));
                        }
                    } 
                } 
                arr_11 [2] = ((/* implicit */unsigned int) min((min((((/* implicit */int) (short)-17996)), (arr_3 [(unsigned short)13] [i_1]))), ((+(((/* implicit */int) (signed char)-61))))));
                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) 2214780222U)) ? (5279228867766483985ULL) : ((~(11460025096743529711ULL))))))));
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) ((signed char) arr_4 [(signed char)13]))), (var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((47727177U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))))) : ((((-(((/* implicit */int) (unsigned short)43965)))) * ((-(((/* implicit */int) arr_9 [i_0] [i_1 - 3])))))))))));
            }
        } 
    } 
}
