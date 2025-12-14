/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1092
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
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [(unsigned char)2] [i_0] [i_0] = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31365)) ? (((/* implicit */int) (short)-31369)) : (((/* implicit */int) (short)-31355))))) ? (((/* implicit */int) arr_4 [i_0 + 3])) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_9))))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 3; i_2 < 10; i_2 += 1) 
                {
                    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) (short)-31388))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_3 [i_0] [i_1] [i_2 - 3])))), (((unsigned long long int) var_6))))));
                    var_13 -= ((/* implicit */short) (~((+(arr_3 [i_0] [10] [i_2])))));
                    arr_9 [i_2] [i_1 + 1] [i_1] [(short)3] = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned int) 284149849)), (((arr_3 [9] [i_1] [2U]) * (arr_3 [i_0] [i_0] [(unsigned char)10])))))));
                }
            }
        } 
    } 
    var_14 *= ((/* implicit */short) var_7);
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) var_8))));
    var_16 = ((/* implicit */unsigned long long int) var_4);
}
