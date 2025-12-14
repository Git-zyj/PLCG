/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106703
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
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        var_11 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_1 [i_0] [i_0]))))) + (((arr_0 [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))))))) ? (((arr_0 [i_0 + 2]) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) ((short) min((((/* implicit */unsigned char) (_Bool)1)), (arr_3 [i_0]))))), ((-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-77))) >= (var_4))))))));
    }
    for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        arr_7 [i_1] = ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned int) arr_1 [i_1] [i_1]))))) ? (((/* implicit */int) var_3)) : (min((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) (short)-93)))))));
        arr_8 [i_1] = ((/* implicit */long long int) (((_Bool)1) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        var_12 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2])))))) * ((~(min((arr_9 [i_2]), (arr_9 [i_2])))))));
        var_13 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2465377104647615933LL)) ? (((/* implicit */int) (signed char)80)) : (((/* implicit */int) (unsigned char)122))))) ? (((/* implicit */int) (short)104)) : (((/* implicit */int) (unsigned char)8)));
        arr_11 [i_2] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2 + 1]))) : (arr_9 [i_2]))));
    }
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (var_2) : (var_4))) >= (((/* implicit */long long int) ((/* implicit */int) min((var_1), (((/* implicit */short) var_9)))))))))));
    var_15 &= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-69))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
}
