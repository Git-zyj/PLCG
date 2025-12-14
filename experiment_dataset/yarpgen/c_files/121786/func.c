/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121786
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (arr_0 [i_0 - 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)19363)) ? (((/* implicit */int) (short)930)) : (((/* implicit */int) (signed char)126))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_8)), (var_2))))))) : (((/* implicit */int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned int) (short)19372))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-19367)) : (((/* implicit */int) (signed char)105))))))))));
        var_10 -= (~(((var_2) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 - 1]))))));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 70838989U)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)177))))) ? (((((/* implicit */int) (unsigned char)198)) << (((arr_0 [i_0]) - (2406078443U))))) : (((/* implicit */int) (short)19379)))), ((~((~(((/* implicit */int) var_3))))))));
        var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) arr_2 [i_0]))));
        var_12 = min((((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (max((((/* implicit */unsigned int) arr_3 [i_0])), (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-2048)) && (((/* implicit */_Bool) var_6)))))))), (((((/* implicit */_Bool) max((((/* implicit */short) var_1)), (var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (((((/* implicit */_Bool) (short)-19366)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_0 [i_0]))))));
    }
    for (unsigned char i_1 = 3; i_1 < 10; i_1 += 1) /* same iter space */
    {
        var_13 -= (short)-19359;
        arr_8 [i_1] = ((/* implicit */signed char) var_0);
    }
    var_14 = max((((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_6))))) - (((9U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)91))))))), (min((((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))), ((+(var_5))))));
    var_15 = ((/* implicit */unsigned char) ((unsigned int) max((min((var_2), (((/* implicit */unsigned int) (unsigned char)177)))), (((/* implicit */unsigned int) (signed char)96)))));
}
