/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158954
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
    var_14 = ((/* implicit */short) max((var_14), (var_6)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((long long int) (-(((((/* implicit */int) arr_4 [i_0] [i_1])) - (((/* implicit */int) var_11))))))))));
                var_16 += ((/* implicit */unsigned long long int) max((arr_2 [i_1]), (((/* implicit */int) var_5))));
                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)254)) ? (((((/* implicit */int) arr_4 [i_0] [i_1 + 2])) << (((((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 2])) - (61392))))) : (min(((~(((/* implicit */int) (unsigned short)4)))), (((/* implicit */int) (unsigned short)65531)))))))));
                arr_7 [(short)2] [(unsigned char)10] |= ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((arr_3 [i_1]) >> (((-805383786) + (805383799)))))) ? (((((/* implicit */_Bool) var_6)) ? (17788209054628936028ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : (arr_6 [i_1] [i_0] [i_0]))));
            }
        } 
    } 
}
