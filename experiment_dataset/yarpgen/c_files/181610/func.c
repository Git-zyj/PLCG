/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181610
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
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */short) var_6);
                var_13 |= ((/* implicit */unsigned long long int) ((min((var_8), (((/* implicit */int) min(((unsigned short)43928), (((/* implicit */unsigned short) arr_2 [10] [i_1] [0LL]))))))) - (((/* implicit */int) arr_0 [(unsigned short)14] [20]))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (+(9223372036854775807LL)))) ? (var_5) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)21607)) ? (((/* implicit */int) (unsigned short)21610)) : (((/* implicit */int) var_2))))))), (((/* implicit */long long int) ((var_0) <= (min((var_0), (((/* implicit */unsigned long long int) (unsigned short)21607)))))))));
}
