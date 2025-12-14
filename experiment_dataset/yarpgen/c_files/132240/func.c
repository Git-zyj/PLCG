/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132240
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
    var_20 = ((/* implicit */unsigned short) (_Bool)1);
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) var_19)) : (131071)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (max((((/* implicit */unsigned long long int) 3136656234U)), (var_3))))))))));
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(131072)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (var_18)))))) : ((~(var_18)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                var_23 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_2 [i_1 + 2] [i_1] [i_1])) ? (((/* implicit */int) arr_2 [i_1 + 1] [i_1] [i_1])) : (((/* implicit */int) (short)-32744))))));
                var_24 += ((/* implicit */int) ((((/* implicit */_Bool) max((131087), (-131071)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) -1686497994)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_12)))))) : (((((/* implicit */unsigned long long int) 3645669682U)) | (4092823856994820025ULL)))));
            }
        } 
    } 
}
