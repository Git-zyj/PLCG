/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112667
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
    var_12 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_3)))) ? (((((/* implicit */int) var_0)) & (2147483647))) : (((/* implicit */int) var_6)))));
    var_13 ^= ((((/* implicit */_Bool) max((var_7), (((/* implicit */int) min((var_8), (((/* implicit */unsigned short) (short)32765)))))))) ? (((/* implicit */int) (short)(-32767 - 1))) : (max((((/* implicit */int) var_2)), (((int) (signed char)2)))));
    var_14 |= ((/* implicit */short) var_7);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */signed char) min((((unsigned short) min((((/* implicit */unsigned int) arr_3 [(unsigned char)6])), (arr_0 [i_0] [i_0])))), (arr_2 [i_1] [i_0])));
                var_15 = ((/* implicit */unsigned long long int) arr_2 [i_1] [i_0]);
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) | (18446744073709551613ULL))) > (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)1312)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))), (3ULL)))));
            }
        } 
    } 
}
