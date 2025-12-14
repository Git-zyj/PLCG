/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133811
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
    var_13 = ((/* implicit */signed char) var_12);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((unsigned long long int) 1439267916))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : ((-(((/* implicit */int) arr_1 [i_0] [i_0]))))))));
                    var_14 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_2 - 1])) : (((/* implicit */int) var_1)))) & (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)4375))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) ((((/* implicit */int) var_10)) | (((int) min((var_8), (((/* implicit */short) var_5)))))));
}
