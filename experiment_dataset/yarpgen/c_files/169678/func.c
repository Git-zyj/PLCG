/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169678
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
    for (short i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1 - 1] = ((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) arr_1 [i_0])))));
                arr_6 [i_0] [10LL] [i_0] = -907877279;
            }
        } 
    } 
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) ((short) var_2))), (((var_2) & (var_0)))))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (short)-8192)))));
    var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))));
    var_15 = ((((/* implicit */_Bool) var_2)) ? (var_12) : (((/* implicit */int) var_5)));
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */int) (short)-20791)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))))))))));
}
