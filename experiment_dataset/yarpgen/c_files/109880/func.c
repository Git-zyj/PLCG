/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109880
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_19 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((var_13) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_7 [i_0] [(unsigned char)15] [i_0]))))) : (var_9)))) ? (min((var_2), (((/* implicit */unsigned long long int) arr_0 [i_2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(short)16] [i_1] [(short)7])))));
                    var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~(arr_5 [i_0] [i_1] [i_2])))), (((((/* implicit */_Bool) var_18)) ? (max((((/* implicit */unsigned long long int) (unsigned char)12)), (16081669507310554767ULL))) : (((/* implicit */unsigned long long int) -1814151275))))));
                    arr_8 [(_Bool)1] [(unsigned short)5] [i_2] [10LL] = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_1]);
                    var_21 = ((/* implicit */_Bool) ((int) var_0));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))), ((((_Bool)1) ? ((((_Bool)1) ? (18127392203066011981ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)215))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))))));
    var_23 = ((/* implicit */short) var_15);
}
