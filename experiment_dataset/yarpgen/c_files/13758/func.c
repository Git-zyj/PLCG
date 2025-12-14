/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13758
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
    for (unsigned long long int i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) min(((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)5))))))), (((((((/* implicit */int) var_16)) * (((/* implicit */int) arr_4 [i_2] [i_1] [3U])))) << (((((/* implicit */int) var_15)) + (39)))))));
                    arr_7 [12U] [i_1] [24LL] = ((/* implicit */unsigned char) arr_0 [i_0 - 1] [i_1]);
                    var_18 -= ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (((arr_3 [10ULL] [8U]) ? (arr_2 [(unsigned char)19] [i_1]) : (var_12)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_5 [i_0 - 3] [20U])))) : (459364088U));
                    arr_8 [(unsigned short)17] [i_0] [i_1] [(unsigned short)2] = ((/* implicit */unsigned int) arr_1 [(unsigned short)16] [i_1]);
                }
            } 
        } 
    } 
    var_19 = min((((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_11))))), (((((/* implicit */unsigned long long int) max((((/* implicit */int) var_16)), (var_10)))) | (min((var_8), (((/* implicit */unsigned long long int) var_4)))))));
}
