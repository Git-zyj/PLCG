/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166010
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
    var_14 = ((/* implicit */short) ((unsigned int) var_11));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_15 ^= ((/* implicit */short) (~(((/* implicit */int) max((var_8), (((/* implicit */unsigned short) var_6)))))));
                    var_16 += ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)10))) | ((+(arr_1 [i_0] [i_0])))));
                    var_17 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) ((7651873894857607557LL) << (((var_7) - (6206429233889061349ULL)))))) || (((6513112513442204507LL) <= (((/* implicit */long long int) ((/* implicit */int) var_6))))))))));
                    var_18 *= ((/* implicit */short) ((signed char) min((((((/* implicit */long long int) ((/* implicit */int) var_12))) ^ (var_11))), (((/* implicit */long long int) ((unsigned char) var_4))))));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / (var_4)));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (!(((((/* implicit */_Bool) ((var_11) / (var_1)))) && (((/* implicit */_Bool) var_9)))))))));
}
