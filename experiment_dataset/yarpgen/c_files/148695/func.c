/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148695
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
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) max((var_12), (var_17))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                var_19 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_1]))) - (arr_0 [i_0] [i_1 + 2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)25925))) : (0LL)))) : (var_6))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_10), (var_6)))) ? (var_14) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))))))));
                arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((max((var_14), (((/* implicit */unsigned int) var_7)))) - (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) - (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) - (((/* implicit */int) (_Bool)0))))) - ((~(arr_5 [i_1] [i_1])))))));
                var_20 = ((/* implicit */_Bool) max((var_20), ((!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)0)), (((((/* implicit */int) var_8)) - (((/* implicit */int) var_12)))))))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    var_21 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) - (arr_5 [i_1 + 1] [i_1]))) - (((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1])) ? (arr_5 [i_1 - 1] [i_1]) : (arr_5 [i_1 - 1] [i_1]))));
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((1534915175U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)7)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (((2209494964U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
                    var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) var_9)))));
                    arr_9 [i_1] = ((/* implicit */unsigned int) var_1);
                }
            }
        } 
    } 
    var_24 = ((min((var_3), (((/* implicit */int) ((unsigned short) (unsigned short)60757))))) + (((/* implicit */int) var_0)));
}
