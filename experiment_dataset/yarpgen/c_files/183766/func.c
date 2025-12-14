/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183766
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
    var_17 = (short)8008;
    var_18 = var_5;
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        var_19 = arr_0 [i_0];
        arr_2 [i_0] [i_0 - 1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        arr_3 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0]))));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */int) arr_1 [i_0 + 1])) / (((/* implicit */int) arr_1 [i_0 - 1])))))));
    }
    /* LoopSeq 4 */
    for (short i_1 = 0; i_1 < 18; i_1 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)10926)) | (((/* implicit */int) (short)14191))))) ? (((/* implicit */int) ((((/* implicit */int) (short)24603)) < (((/* implicit */int) (short)13654))))) : (((/* implicit */int) (short)-9402))));
        arr_7 [(short)13] [i_1] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_4 [i_1])))) ? ((~(((/* implicit */int) arr_5 [i_1] [i_1])))) : (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1] [i_1])) > (((/* implicit */int) arr_5 [i_1] [i_1])))))));
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (short)12782)) < (((/* implicit */int) (short)-15090))))) >= (((/* implicit */int) min((arr_4 [i_1]), (var_2))))))) | (((/* implicit */int) ((short) (+(((/* implicit */int) arr_5 [(short)3] [i_1])))))))))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 18; i_2 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */short) max((var_23), (arr_4 [i_2])));
        var_24 = ((/* implicit */short) min((var_24), (((short) arr_8 [i_2] [i_2]))));
        arr_10 [i_2] [i_2] = ((/* implicit */short) (+(((/* implicit */int) (short)32767))));
        var_25 += arr_4 [i_2];
    }
    for (short i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (~(((/* implicit */int) arr_1 [i_3])))))));
        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3]))))))))));
    }
    for (short i_4 = 2; i_4 < 11; i_4 += 4) 
    {
        var_28 &= ((short) arr_6 [i_4 - 1]);
        arr_17 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-9)) ? (((/* implicit */int) (short)511)) : (((/* implicit */int) (short)(-32767 - 1)))));
        var_29 ^= ((short) min((((((/* implicit */_Bool) (short)32512)) ? (((/* implicit */int) (short)-16384)) : (((/* implicit */int) (short)30036)))), (((/* implicit */int) (short)-32580))));
    }
    var_30 = ((/* implicit */short) max((var_30), (var_16)));
}
