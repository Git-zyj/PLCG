/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185632
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
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)247))))) <= (((/* implicit */int) var_5))))) ^ (arr_4 [i_0] [i_0] [i_1])));
                var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((int) var_3))) : (max((var_8), (((/* implicit */unsigned long long int) (unsigned short)13866)))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) || (((/* implicit */_Bool) var_7))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_1)))))) ? (max((((/* implicit */int) (short)4092)), (max((((/* implicit */int) (unsigned char)8)), (-1535392347))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) var_8)))) && (((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_4)))))))));
    var_21 = ((/* implicit */unsigned short) (+((~(((/* implicit */int) var_11))))));
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_8)))) ? ((+(var_13))) : (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)39))) : (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_17)) : (var_8))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_15)))))))));
    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_3)) ? (9223372036854775807LL) : (((/* implicit */long long int) var_10)))) : (((long long int) var_14)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_11)))))))))))));
}
