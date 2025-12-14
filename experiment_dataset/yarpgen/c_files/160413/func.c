/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160413
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                var_16 *= ((/* implicit */short) (~(arr_1 [8LL])));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (arr_3 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((var_13) / (((/* implicit */unsigned long long int) var_12))))))));
                var_17 += ((/* implicit */_Bool) var_5);
                var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)159))));
                arr_7 [i_0] = ((/* implicit */unsigned short) var_10);
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_9);
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((unsigned short) var_6)))))) != (16174806959556493789ULL))))));
    var_21 = ((/* implicit */short) var_6);
}
