/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135979
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
    var_18 = ((/* implicit */unsigned int) var_3);
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) -2147483647))))), (var_8)))) || (((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_8)) : (365377518)))))))));
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((((((/* implicit */_Bool) -365377518)) || (((/* implicit */_Bool) var_2)))) || (((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((((/* implicit */_Bool) 365377518)) || (((/* implicit */_Bool) (unsigned char)167))))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] [6LL] &= ((/* implicit */long long int) arr_1 [i_0]);
        var_21 = ((/* implicit */_Bool) ((unsigned int) -365377532));
        var_22 = ((/* implicit */int) var_17);
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((-365377517) >= (((/* implicit */int) (_Bool)1)))))));
    }
    for (long long int i_1 = 2; i_1 < 9; i_1 += 3) 
    {
        var_23 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 365377520)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [0U])) && (((/* implicit */_Bool) 365377517)))))));
        var_24 = ((/* implicit */short) var_0);
        var_25 = ((/* implicit */signed char) (~(((arr_5 [i_1 - 2]) ? (((/* implicit */int) arr_5 [i_1 - 2])) : (((/* implicit */int) arr_5 [i_1 - 2]))))));
    }
    for (unsigned short i_2 = 2; i_2 < 18; i_2 += 4) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_13))))), (((var_16) | (((/* implicit */unsigned int) ((/* implicit */int) ((-1) >= (((/* implicit */int) arr_7 [i_2]))))))))));
        arr_9 [7] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3882753977U)) ? (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) (unsigned short)47765)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) 365377513))))))));
    }
}
