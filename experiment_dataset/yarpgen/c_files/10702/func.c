/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10702
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
    var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (max((max((((/* implicit */int) (short)-26165)), (-424343150))), (((((/* implicit */int) (short)26165)) + (((/* implicit */int) var_11))))))));
    var_18 = ((int) var_9);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (+(arr_2 [i_0])));
        arr_4 [i_0] = ((/* implicit */int) arr_0 [i_0]);
        var_19 = (-(((/* implicit */int) (short)-15412)));
        var_20 = ((/* implicit */long long int) var_0);
    }
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) 402476489)) ? ((((+(424343149))) << (((((/* implicit */int) (unsigned short)65523)) - (65521))))) : (var_2)));
}
