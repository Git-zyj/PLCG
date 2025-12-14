/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128813
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
    var_19 = ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) % (var_10))))))), (((((/* implicit */int) ((0) == (((/* implicit */int) var_5))))) >> (((/* implicit */int) ((-2822155210455505279LL) != (-795544746124528027LL))))))));
    var_20 = ((/* implicit */int) max((((/* implicit */short) var_17)), (var_11)));
    var_21 = ((/* implicit */unsigned short) var_1);
    var_22 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)1593)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63943))) == ((+(var_10))))))) : (max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_4))), (var_4)))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) var_16);
        arr_3 [i_0] [i_0] = 0LL;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_23 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) var_10)) : (224ULL)));
        arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [(unsigned char)16]))) : (0LL)));
        var_24 = ((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_5 [i_1]) : (4294967295U));
    }
}
