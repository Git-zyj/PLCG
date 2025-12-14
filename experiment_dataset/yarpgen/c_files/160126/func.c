/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160126
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
    var_16 = var_4;
    /* LoopSeq 4 */
    for (unsigned short i_0 = 3; i_0 < 7; i_0 += 1) 
    {
        arr_4 [i_0] = ((unsigned short) ((((/* implicit */_Bool) max((var_10), (arr_2 [i_0])))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((unsigned short) var_15)))));
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) max(((~(((/* implicit */int) ((unsigned short) arr_1 [(unsigned short)2]))))), (((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_0 - 1])))))))));
        arr_5 [i_0] = var_14;
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) (unsigned short)20457))));
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5))));
        var_20 ^= ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4)))))), (min((((/* implicit */int) var_14)), (((((/* implicit */int) (unsigned short)62847)) / (((/* implicit */int) (unsigned short)46678))))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 2; i_2 < 21; i_2 += 4) 
    {
        var_21 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_8)) != (((/* implicit */int) arr_8 [i_2 - 2])))) ? (((/* implicit */int) var_14)) : (((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_6)) - (34180)))))));
        var_22 = var_0;
        var_23 = ((unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_10 [i_2])) : (((/* implicit */int) arr_10 [i_2 + 2]))));
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)16618))))) ? (((/* implicit */int) (unsigned short)63948)) : (((/* implicit */int) (unsigned short)65535))));
        var_25 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_0)) | (((/* implicit */int) var_3)))) < (((/* implicit */int) var_12))));
    }
    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        arr_14 [i_3] [i_3] = max(((unsigned short)63996), (arr_10 [(unsigned short)21]));
        var_26 *= ((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) arr_13 [i_3] [i_3])))), (((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) var_11))))))) > (((((/* implicit */_Bool) (unsigned short)7320)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)7320))))));
        var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
    }
}
