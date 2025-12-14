/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136990
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
    var_18 = ((/* implicit */unsigned char) 2409054627U);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_1])))));
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) min((((((arr_3 [6LL]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_0]))))) + (arr_1 [10]))), (((/* implicit */unsigned int) var_13)))))));
                arr_4 [i_0] = (-((+((-(36028797018963967LL))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((-36028797018963973LL), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */long long int) var_11)) : (36028797018963980LL)));
    var_22 = max((((/* implicit */long long int) min((((/* implicit */int) ((short) (_Bool)1))), (((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */int) var_7))))))), (-36028797018963977LL));
}
