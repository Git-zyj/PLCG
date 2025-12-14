/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162612
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
    var_11 = ((/* implicit */unsigned int) (unsigned char)255);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) var_0))));
                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (7U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12526)))))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) (-((+(((/* implicit */int) (short)-13193)))))))));
                arr_7 [i_1] = (signed char)-125;
                var_13 = ((/* implicit */signed char) min((((((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9)))) | (((/* implicit */int) var_3)))), ((+(arr_5 [i_1])))));
            }
        } 
    } 
    var_14 += ((/* implicit */short) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) 563924224U)) ? (((/* implicit */unsigned int) var_6)) : (var_5))) : (((/* implicit */unsigned int) 1358179937)))) >> ((((-(((((/* implicit */int) (unsigned char)11)) % (((/* implicit */int) var_2)))))) + (21)))));
}
