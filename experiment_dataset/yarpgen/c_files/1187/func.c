/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1187
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) (unsigned char)137);
        var_18 = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
        var_19 -= ((/* implicit */long long int) (((~(((/* implicit */int) ((short) arr_1 [i_0] [i_0]))))) + (((/* implicit */int) ((_Bool) ((((/* implicit */int) var_8)) + (var_16)))))));
    }
    var_20 = ((/* implicit */long long int) (-((((-(3153228544U))) / (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_8))));
    var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_2))));
    /* LoopSeq 3 */
    for (int i_1 = 0; i_1 < 22; i_1 += 4) /* same iter space */
    {
        var_23 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1] [i_1])) ^ (((((/* implicit */_Bool) 50331648)) ? (50331650) : (((/* implicit */int) (_Bool)1)))))))));
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) arr_3 [i_1]))));
    }
    for (int i_2 = 0; i_2 < 22; i_2 += 4) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_6 [i_2]) : (((/* implicit */unsigned int) -50331649))))) ? (1934414964950300578LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [i_2] [i_2]))))))), (min((-1934414964950300579LL), (((/* implicit */long long int) arr_3 [i_2]))))));
        var_25 = ((/* implicit */short) ((((1877202325) | (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) var_11)))))) & (-50331654)));
        arr_10 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)145)) || (((/* implicit */_Bool) (~(((/* implicit */int) var_2)))))));
        arr_11 [i_2] = ((((arr_5 [i_2]) + (2147483647))) >> (((max((50331665), (-1877202326))) - (50331663))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 22; i_3 += 4) /* same iter space */
    {
        var_26 = ((/* implicit */_Bool) arr_3 [i_3]);
        arr_15 [i_3] |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_12 [i_3])) / (var_15)));
    }
}
