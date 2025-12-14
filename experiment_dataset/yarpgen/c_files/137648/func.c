/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137648
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)1)) ? (((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)30456))) > (var_2))) ? (max((var_4), (((/* implicit */unsigned long long int) var_15)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_15))))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((2147483647) == (((/* implicit */int) var_15))))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            var_17 = ((/* implicit */short) var_1);
            var_18 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-28342)) && (((/* implicit */_Bool) 2147483647))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            var_19 *= ((((/* implicit */long long int) ((/* implicit */int) ((2147483647) == (max(((-2147483647 - 1)), ((-2147483647 - 1)))))))) / (((9223372036854775807LL) & (((/* implicit */long long int) 2147483647)))));
            var_20 = ((/* implicit */unsigned short) (~((-(min((var_5), (((/* implicit */unsigned long long int) var_14))))))));
        }
        var_21 = ((/* implicit */short) (((-(((((/* implicit */long long int) arr_0 [i_0])) / (-9223372036854775807LL))))) >> (((((/* implicit */int) var_8)) - (6581)))));
    }
    var_22 = ((/* implicit */unsigned short) min((min((min((((/* implicit */unsigned long long int) var_12)), (var_4))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_11)), ((-9223372036854775807LL - 1LL))))))), (((/* implicit */unsigned long long int) var_9))));
    var_23 *= ((/* implicit */unsigned short) 958666900);
    var_24 ^= ((/* implicit */unsigned long long int) (~(1988062591)));
}
