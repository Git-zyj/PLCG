/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115251
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
    var_10 |= ((/* implicit */long long int) var_6);
    var_11 = ((/* implicit */signed char) (((-(4503597479886848LL))) < (((/* implicit */long long int) ((/* implicit */int) var_3)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */long long int) min((var_12), ((-(4503597479886848LL)))));
                arr_6 [i_0] = ((/* implicit */short) min((4503597479886848LL), (((/* implicit */long long int) min(((-(((/* implicit */int) var_7)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) == (-9223372036854775793LL)))))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (signed char)-21);
                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) min(((!(((/* implicit */_Bool) arr_4 [i_0] [i_1])))), (((((/* implicit */_Bool) 4503597479886867LL)) && (((/* implicit */_Bool) 4503597479886867LL)))))))));
            }
        } 
    } 
}
