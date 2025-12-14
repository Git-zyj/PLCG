/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119565
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) (signed char)43)))), (((/* implicit */int) max(((signed char)-13), ((signed char)74))))))) ? (((((((/* implicit */_Bool) (signed char)-67)) ? (((/* implicit */int) (signed char)45)) : (((/* implicit */int) (signed char)72)))) >> ((((-(((/* implicit */int) (signed char)66)))) + (96))))) : (((/* implicit */int) ((signed char) var_3)))));
    var_16 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_4), (var_4)))) ? (var_13) : ((~(var_10)))))) ? (((unsigned int) min(((signed char)-88), ((signed char)29)))) : (((min((2146959360U), (((/* implicit */unsigned int) var_2)))) % (var_13)))));
    var_17 = ((/* implicit */signed char) var_13);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0]))))) < (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-112))) & (2989088685U)))));
        var_18 &= ((((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) arr_1 [i_0])))))) | (((unsigned int) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (((((((/* implicit */int) (signed char)-51)) + (71))) - (20)))))));
    }
}
