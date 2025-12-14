/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150652
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
    var_13 = ((/* implicit */unsigned short) var_2);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] [i_1] [(unsigned short)7] = max((((((/* implicit */_Bool) var_4)) ? (arr_4 [i_1 + 1] [(unsigned short)0]) : (((/* implicit */unsigned long long int) var_1)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1] [i_2])) ? (var_5) : (var_1)))) ? (((arr_8 [i_0] [i_0] [i_0]) ? (33554431ULL) : (((/* implicit */unsigned long long int) arr_7 [i_1] [i_1] [i_1 + 2] [i_2])))) : (((/* implicit */unsigned long long int) -1)))));
                    var_14 *= ((/* implicit */unsigned short) ((long long int) (+(max((var_12), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_2])))))));
                    arr_10 [i_2] [i_1 - 1] [(unsigned short)12] |= ((/* implicit */int) max((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [(signed char)5] [(signed char)5] [5U] [i_2])) ? (var_0) : (-1)))) + (arr_1 [i_1]))), (((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_1 - 1])))))));
                    var_15 |= ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [0])) ? (((/* implicit */int) (short)-17129)) : (((/* implicit */int) var_8))))), (((arr_5 [i_2] [i_1] [i_1]) | (((/* implicit */unsigned long long int) var_7)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_4) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_7 [i_2] [i_1] [i_1 + 2] [i_2]))))));
                }
            } 
        } 
    } 
}
