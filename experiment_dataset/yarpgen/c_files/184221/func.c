/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184221
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
    var_15 = ((/* implicit */int) ((unsigned char) var_5));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((unsigned int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) == (var_2))))))));
        var_17 = ((/* implicit */unsigned char) ((var_7) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_5))))));
        arr_3 [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (var_12)))) ? (((/* implicit */int) var_6)) : ((~(((/* implicit */int) var_14))))))));
        arr_4 [i_0] = ((/* implicit */int) var_6);
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_18 = ((((((/* implicit */int) ((short) ((int) var_5)))) + (2147483647))) >> (((((/* implicit */int) ((signed char) var_8))) >> (((/* implicit */int) (!(var_13)))))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_12)))) ? (min((((/* implicit */unsigned int) var_1)), (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (var_8)))))));
    }
    for (int i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        var_20 += ((/* implicit */unsigned long long int) (-(((int) max((var_7), (((/* implicit */unsigned long long int) var_14)))))));
        arr_11 [i_2] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_5))))) <= ((-(((/* implicit */int) ((signed char) var_14)))))));
        var_21 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_14), (var_14)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) var_6)), (var_1))))));
    }
}
