/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173408
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
    for (signed char i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_20 |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)2)) > (((/* implicit */int) arr_2 [i_0 + 1])))))) % ((~(8688117523286454050LL)))));
                arr_5 [(unsigned char)13] [(unsigned char)13] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_4 [i_0 - 1]), (var_2)))) && (((/* implicit */_Bool) (unsigned short)41799))));
            }
        } 
    } 
    var_21 = var_13;
    var_22 = ((/* implicit */short) var_3);
    var_23 += ((/* implicit */int) var_0);
}
