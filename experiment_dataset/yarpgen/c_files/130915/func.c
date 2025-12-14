/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130915
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
    var_17 = ((/* implicit */short) ((unsigned short) min((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */_Bool) var_7)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
    var_18 = ((/* implicit */int) ((unsigned short) ((long long int) min((((/* implicit */unsigned long long int) var_11)), (var_5)))));
    var_19 = ((/* implicit */signed char) (+(var_3)));
    var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned short)12), (((/* implicit */unsigned short) (_Bool)1))))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((min((((/* implicit */long long int) arr_0 [i_0])), (arr_1 [i_0]))) - (((/* implicit */long long int) ((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))))));
        var_21 = ((/* implicit */signed char) min(((~(arr_1 [i_0]))), ((+(min((arr_1 [i_0]), (arr_1 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
    }
    for (int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) arr_4 [i_1]);
        var_22 = ((/* implicit */short) ((unsigned char) (!(((/* implicit */_Bool) (-(arr_1 [i_1])))))));
        var_23 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_5 [i_1] [i_1])) & (((/* implicit */int) arr_5 [i_1] [i_1])))) / (((/* implicit */int) arr_5 [i_1] [i_1]))));
        var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_5 [i_1] [i_1])))))))));
    }
}
