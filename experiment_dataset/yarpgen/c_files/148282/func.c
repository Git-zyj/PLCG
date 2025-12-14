/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148282
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
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)511)) << (((((((/* implicit */int) (signed char)(-127 - 1))) + (156))) - (6)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0])) >= (((/* implicit */int) (signed char)127)))))) : (((((/* implicit */_Bool) (signed char)121)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)13886))) : (4247883329U)))))) % (min((((/* implicit */long long int) (-(((/* implicit */int) (signed char)-127))))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (arr_5 [i_2]))))))))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)32755)) ? (((/* implicit */int) (short)(-32767 - 1))) : (2147483647)));
                    var_18 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_16)), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_7 [11] [i_1] [i_0 - 1]))))), (min((var_2), (((/* implicit */unsigned long long int) var_8))))))));
                }
            } 
        } 
    } 
    var_19 -= ((/* implicit */unsigned char) var_13);
    var_20 = ((/* implicit */short) max((var_20), (var_3)));
}
