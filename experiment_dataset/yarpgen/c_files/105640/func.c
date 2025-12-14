/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105640
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (5763879953828212227LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))), (((/* implicit */long long int) ((-1) * (((/* implicit */int) var_8)))))));
                var_21 = ((/* implicit */int) min((((unsigned char) ((signed char) arr_1 [i_0] [i_0]))), (((/* implicit */unsigned char) ((signed char) ((unsigned long long int) arr_5 [i_0] [i_1]))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_8)) & (((/* implicit */int) (unsigned char)255)))) ^ (((/* implicit */int) ((unsigned short) arr_3 [10] [i_1 - 1])))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) min((((var_6) != (((/* implicit */int) min((var_9), (var_12)))))), ((!(((/* implicit */_Bool) min((((/* implicit */unsigned char) var_15)), ((unsigned char)255)))))))))));
    var_23 ^= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (unsigned char)24))))));
}
