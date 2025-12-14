/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165045
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
    var_10 = var_7;
    var_11 = ((/* implicit */unsigned short) max((((/* implicit */int) var_6)), ((+(((/* implicit */int) var_6))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (unsigned short)60414)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [(unsigned short)2])))) ^ (((/* implicit */int) max((arr_0 [i_0]), (arr_1 [i_0])))))) <= (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)9432)) || (((/* implicit */_Bool) arr_0 [i_0]))))), (((unsigned short) (unsigned short)24300)))))));
        var_13 = ((unsigned short) min((((unsigned short) var_7)), (max(((unsigned short)45911), ((unsigned short)32767)))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)30273)) < (((/* implicit */int) (unsigned short)35263))))) : (((/* implicit */int) (unsigned short)8237))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_1])) + (((/* implicit */int) arr_4 [i_1] [i_1]))));
        arr_7 [i_1] [(unsigned short)12] = ((unsigned short) var_9);
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (unsigned short)45933)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_5 [i_1])))) : ((~(((/* implicit */int) arr_0 [(unsigned short)9]))))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 1; i_2 < 14; i_2 += 1) 
        {
            arr_10 [(unsigned short)1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) arr_3 [i_1])) != (((/* implicit */int) (unsigned short)22287)))))));
            var_15 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_5)) * (((/* implicit */int) var_3)))) / (((/* implicit */int) (unsigned short)65535))));
            arr_11 [(unsigned short)7] [i_2 - 1] [i_2 - 1] = ((unsigned short) (!(((/* implicit */_Bool) var_4))));
        }
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) arr_8 [i_3] [(unsigned short)16] [i_3])))));
        arr_14 [i_3] = ((/* implicit */unsigned short) (+(((((/* implicit */int) (unsigned short)19630)) - (((/* implicit */int) (unsigned short)5121))))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_3]))) ? (((/* implicit */int) arr_3 [i_3])) : (((((/* implicit */int) var_7)) + (((/* implicit */int) arr_3 [i_3]))))));
    }
    var_18 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_1)) * (((/* implicit */int) ((unsigned short) var_4))))) / ((+(((/* implicit */int) (unsigned short)45932))))));
}
