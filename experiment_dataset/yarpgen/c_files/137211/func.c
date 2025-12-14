/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137211
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((var_8) < (9032698083077766465ULL))) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [(unsigned char)0])))))) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) ((_Bool) var_8)))));
        var_11 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) % (((arr_1 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))));
    }
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_12 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((4294967295U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [0]))))))))));
        arr_5 [i_1] = ((/* implicit */signed char) ((var_4) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1] [i_1])))))));
    }
    for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) var_10)))))) >= (var_7))))) % ((~(((((/* implicit */unsigned int) ((/* implicit */int) var_9))) + (var_7))))))))));
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (arr_3 [i_2])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_8))))))) : ((~(((/* implicit */int) (_Bool)1))))));
        var_14 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (arr_7 [i_2] [1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) % (var_8)))));
        arr_9 [i_2] [i_2] = min((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_0 [i_2] [i_2])))), (((/* implicit */int) ((short) arr_6 [(unsigned short)12] [i_2]))));
    }
    var_15 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_1) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) != ((~(var_8))))))));
}
