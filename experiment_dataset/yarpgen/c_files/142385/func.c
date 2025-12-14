/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142385
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
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_2] = max((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_5)))))), (((((/* implicit */int) arr_3 [i_1 - 1])) << (((max((((/* implicit */long long int) arr_6 [i_0] [i_1] [i_2])), (var_4))) - (5635333798468250042LL))))));
                    var_15 = ((((/* implicit */long long int) ((/* implicit */int) min((arr_0 [i_0] [i_0]), ((_Bool)1))))) - (min((((/* implicit */long long int) arr_6 [i_0] [i_1 - 1] [i_0])), (var_0))));
                    var_16 = ((/* implicit */int) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_11)) ? (arr_2 [i_0]) : (((/* implicit */int) arr_4 [i_0] [i_2 + 4])))))) <= (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) max((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_0])))) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))));
                    arr_8 [i_0] [i_0] [i_2 + 3] [i_0] = ((/* implicit */unsigned long long int) max(((-(var_4))), (((/* implicit */long long int) arr_0 [i_0] [i_2]))));
                    arr_9 [i_0] [(signed char)11] [i_0] = ((/* implicit */_Bool) (unsigned short)28672);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((((/* implicit */int) var_5)) << (((((/* implicit */int) var_10)) + (109))))))), (max(((-(((/* implicit */int) var_14)))), ((-(((/* implicit */int) var_14))))))));
}
