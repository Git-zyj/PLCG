/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110228
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
    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? ((-(var_9))) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
    var_14 = ((/* implicit */unsigned int) var_5);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((var_12) >> (((var_0) - (550092272U)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((((/* implicit */_Bool) var_3)) ? (var_3) : (var_12))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_2)))))))));
                    var_16 -= var_6;
                    arr_9 [10LL] [i_1] [(short)15] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (var_5)))) ? (max((var_1), (var_9))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))))));
                }
            } 
        } 
    } 
    var_17 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 213307361U)) ? (2204402710U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)1023)))))) ? (((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) var_4))))) ? ((-(((((/* implicit */_Bool) var_2)) ? (var_5) : (var_9))))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
}
