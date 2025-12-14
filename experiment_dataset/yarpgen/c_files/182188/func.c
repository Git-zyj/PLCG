/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182188
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) || (((((/* implicit */_Bool) ((long long int) var_6))) || (((/* implicit */_Bool) var_18))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned char) arr_4 [i_1] [i_1]);
                arr_7 [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) 4006733555264933142ULL)) && (((((/* implicit */_Bool) arr_5 [i_0] [i_1])) && (((/* implicit */_Bool) 14440010518444618481ULL)))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_1))));
}
