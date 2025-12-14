/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130976
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
    var_16 = ((/* implicit */unsigned long long int) 1050569924U);
    var_17 -= var_15;
    var_18 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (unsigned char)0))));
        var_20 |= ((/* implicit */_Bool) (signed char)16);
        var_21 = ((/* implicit */unsigned long long int) arr_2 [i_0]);
        var_22 = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((signed char) max((arr_4 [i_1] [i_1]), (((/* implicit */unsigned long long int) (signed char)76))))))));
        var_24 &= ((/* implicit */int) (((+(var_2))) % (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_1]) : (arr_3 [i_1]))), (arr_3 [i_1]))))));
        var_25 = (-(((/* implicit */int) (_Bool)0)));
    }
}
