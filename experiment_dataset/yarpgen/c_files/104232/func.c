/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104232
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
    var_10 = ((/* implicit */_Bool) min((((((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */int) (unsigned char)181)) : (((/* implicit */int) (_Bool)1)))) * (((((/* implicit */int) (unsigned char)63)) | (((/* implicit */int) (short)-12246)))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (4U))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned char) 4U);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)177))));
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (+(((/* implicit */int) arr_0 [(_Bool)1] [i_0])))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)12246)) << (((((/* implicit */int) (unsigned char)33)) - (27)))))) ? (((long long int) var_3)) : (((/* implicit */long long int) ((/* implicit */int) ((short) (_Bool)1))))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        arr_10 [(_Bool)1] = ((((/* implicit */_Bool) (~(var_5)))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned short)33457)) ? (((/* implicit */int) (unsigned char)11)) : ((-2147483647 - 1)))), (((/* implicit */int) arr_6 [i_1 + 1] [i_1]))))) : (((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) & (arr_9 [i_1])))));
        var_13 = ((/* implicit */unsigned char) arr_9 [i_1]);
        arr_11 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32067)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)33459))))) ? (min((arr_7 [i_1 + 1]), (((/* implicit */unsigned long long int) var_5)))) : (((arr_7 [i_1 + 1]) - (arr_7 [i_1 + 1])))));
    }
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) (((~(((/* implicit */int) (short)16824)))) > (((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) var_9)) : (var_2)))))) << (((int) var_4))));
}
