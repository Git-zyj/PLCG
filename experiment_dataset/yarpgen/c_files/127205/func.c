/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127205
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
    var_18 ^= ((/* implicit */unsigned char) var_16);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_6 [i_2] [i_2] [i_2 - 1] [i_0]) ? (((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 1] [i_1])) : (((/* implicit */int) arr_4 [i_2] [i_2 - 1] [i_0])))))));
                    var_20 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])))) ? (min((((/* implicit */unsigned long long int) arr_0 [i_1] [(short)11])), (var_12))) : (((/* implicit */unsigned long long int) min((arr_5 [i_0] [i_1] [i_2 - 1]), (((/* implicit */long long int) arr_4 [i_0] [i_1] [i_2])))))))) ? (((((arr_6 [i_2] [(unsigned short)18] [i_1] [i_0]) ? (arr_5 [i_0] [i_0] [i_2 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_2]))))) / (((/* implicit */long long int) arr_0 [i_0] [i_1])))) : (((((/* implicit */_Bool) var_5)) ? (arr_5 [i_2 - 1] [i_2 - 1] [i_2 - 1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_2] [i_1] [(unsigned short)13])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [(unsigned short)4]))))))));
                    var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2 - 1] [i_2 - 1] [i_2 - 1])) ? (arr_5 [i_2 - 1] [i_2 - 1] [i_2 - 1]) : (arr_5 [i_2 - 1] [(signed char)10] [i_2 - 1])))) ? (((/* implicit */int) ((unsigned char) arr_2 [i_0] [i_0] [i_2]))) : (((((/* implicit */_Bool) ((arr_3 [i_1]) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (var_10)))) ? (((/* implicit */int) max((((/* implicit */signed char) arr_3 [i_0])), (var_2)))) : (var_10)))));
                }
            } 
        } 
    } 
}
