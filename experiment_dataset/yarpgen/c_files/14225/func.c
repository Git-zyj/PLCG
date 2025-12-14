/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14225
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
    var_16 -= ((/* implicit */unsigned char) ((((var_8) && (((/* implicit */_Bool) ((unsigned long long int) var_12))))) ? (((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) 6571629829201827135LL)))))) : (max((min((var_15), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) ((_Bool) var_13)))))));
    var_17 -= ((/* implicit */unsigned char) (-(min((9223372036854775801LL), (((/* implicit */long long int) 2132246945))))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_18 = (+(((((((/* implicit */int) (unsigned short)24337)) < (((/* implicit */int) (unsigned char)64)))) ? (((/* implicit */int) (unsigned short)24337)) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)-4800)), ((unsigned short)24359)))))));
                arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned char) min((((/* implicit */int) (signed char)122)), (arr_2 [i_0 - 2] [i_0 - 2]))));
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) min((((/* implicit */int) max((arr_3 [i_0 - 4] [i_0 - 4] [i_0 - 3]), (arr_3 [i_0 - 4] [i_0 - 1] [i_0 - 4])))), (((((/* implicit */int) arr_3 [i_0 - 4] [i_0 - 4] [i_0 + 1])) - (((/* implicit */int) arr_3 [i_0 - 2] [i_0 - 2] [i_0 - 3])))))))));
            }
        } 
    } 
    var_20 = max((((((/* implicit */_Bool) ((unsigned short) var_15))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)0), (((/* implicit */unsigned char) var_14)))))) : (var_1))), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) var_11)))))))));
}
