/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166292
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    var_10 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0])) ? (((var_1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))))))));
                    var_11 |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_0]))))) : (var_4))) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(795531752U))))))))));
                    var_12 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_4 [i_0] [i_0])))) ? (((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_2 [i_0])))))))) + (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_2 - 1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_1))))) & ((~(arr_8 [i_1])))))));
                }
            } 
        } 
    } 
    var_13 &= ((/* implicit */short) ((((/* implicit */int) var_5)) > (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_3))))) >= (((((/* implicit */long long int) ((/* implicit */int) var_7))) % (var_4))))))));
    var_14 &= ((/* implicit */signed char) (~((~((+(((/* implicit */int) var_5))))))));
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)))) & (((1277645970) ^ (((/* implicit */int) (unsigned short)33992)))))) << (((((unsigned int) var_6)) - (14253U))))))));
    var_16 -= ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? ((~(((var_3) ? (((/* implicit */unsigned long long int) var_4)) : (var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
}
