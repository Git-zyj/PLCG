/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137517
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
    for (int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    arr_7 [i_2] &= ((/* implicit */short) max((max((arr_3 [i_2]), (((/* implicit */int) max((var_7), (var_10)))))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)84)))) == (max((((/* implicit */long long int) arr_4 [i_2] [i_1])), (var_13))))))));
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? ((-((+(arr_1 [i_2 - 1]))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) 2576786982U)), (-2098831787469169064LL)))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (var_0) : (arr_4 [i_1] [i_1]))) : (((/* implicit */unsigned int) (+(arr_2 [i_1]))))))));
                    var_20 = min((((short) var_10)), (((/* implicit */short) (signed char)-83)));
                    var_21 = ((/* implicit */unsigned short) ((short) ((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_5)) : (var_12))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (1099511625728ULL)))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((short) (-(var_3))));
    /* LoopNest 3 */
    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        for (unsigned int i_4 = 1; i_4 < 23; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((arr_8 [i_3]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_11 [i_5]))) > (min((arr_11 [i_5]), (((/* implicit */unsigned long long int) var_16))))))), ((~(arr_13 [i_3] [i_4] [(unsigned char)3]))))))));
                    var_24 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_13 [i_3] [i_3] [i_5]) : (((/* implicit */unsigned long long int) arr_10 [i_5] [i_4]))))) ? (min((((/* implicit */unsigned long long int) arr_10 [i_4] [i_5])), (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_9), (((/* implicit */unsigned char) var_18)))))))) != (arr_11 [20])));
                }
            } 
        } 
    } 
    var_25 |= ((/* implicit */unsigned int) ((((/* implicit */int) var_14)) ^ ((+(((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */int) var_15)) : (-1914143158)))))));
}
