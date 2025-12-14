/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121422
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
    var_18 = ((/* implicit */unsigned long long int) var_17);
    var_19 = ((/* implicit */_Bool) 2301554250U);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) (((((~(var_3))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)46835)) : (((/* implicit */int) var_7))))))) ? (((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? (0ULL) : (((arr_0 [i_0]) | (arr_0 [i_0]))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) % (var_13))))))));
        var_21 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_15)), (arr_2 [(_Bool)1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (var_3)))) : (((18446744073709551613ULL) >> (((3320905879U) - (3320905860U))))))) >> (((((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)213)), (var_14)))) & (((18446744073709551614ULL) | (((/* implicit */unsigned long long int) var_10)))))) - (2591148305ULL)))));
        arr_3 [i_0] = ((((/* implicit */_Bool) max((((arr_1 [(unsigned char)10] [(unsigned char)10]) >> (((18446744073709551613ULL) - (18446744073709551603ULL))))), (((/* implicit */unsigned long long int) var_11))))) ? (((((/* implicit */_Bool) min((2643958866U), (((/* implicit */unsigned int) (_Bool)1))))) ? ((~(arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (_Bool)1))))) : (-1975256562)))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) (~(min(((-(arr_0 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned char)224)))))))));
    }
}
