/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186261
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
    var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) ((signed char) var_8)))));
    var_16 = ((/* implicit */int) var_11);
    var_17 = var_9;
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_18 &= ((/* implicit */_Bool) ((arr_1 [i_0]) ? (max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_0 [i_0]))), (((/* implicit */unsigned int) arr_1 [(unsigned short)5])))) : (((((_Bool) arr_0 [7U])) ? (((var_7) + (var_7))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (short)1)))))))));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((var_5) ? (arr_0 [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))), (arr_0 [i_0])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) : (var_7)))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [(unsigned short)11]) : (arr_0 [i_0]))) : (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-11)))));
    }
    for (unsigned short i_1 = 4; i_1 < 15; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)10))));
        arr_6 [(unsigned short)2] = ((/* implicit */signed char) arr_5 [i_1]);
        var_21 += ((/* implicit */_Bool) min((((/* implicit */int) ((unsigned char) arr_5 [i_1 - 3]))), (((((/* implicit */_Bool) arr_5 [i_1 - 3])) ? (((/* implicit */int) arr_5 [i_1 - 3])) : (((/* implicit */int) arr_5 [i_1 + 4]))))));
        var_22 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((unsigned int) var_2))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (1849116939))))))));
    }
    for (short i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        var_23 = ((/* implicit */signed char) max(((short)-19), (((/* implicit */short) (((!(((/* implicit */_Bool) var_8)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)48741)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)0))))))))));
        arr_10 [(_Bool)1] = ((/* implicit */_Bool) ((signed char) 575661430U));
    }
    var_24 += ((/* implicit */int) max((((/* implicit */unsigned long long int) var_13)), (18446744073709551615ULL)));
}
