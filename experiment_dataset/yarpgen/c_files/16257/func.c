/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16257
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_20 |= ((/* implicit */unsigned char) ((((((min((((/* implicit */long long int) arr_2 [10LL] [10LL])), (var_1))) + (9223372036854775807LL))) >> (((((((/* implicit */int) var_17)) << (((((/* implicit */int) arr_2 [2LL] [i_0])) - (3613))))) - (767557592))))) != (((/* implicit */long long int) ((/* implicit */int) ((short) min((var_12), (arr_0 [(unsigned char)6]))))))));
        var_21 = ((/* implicit */int) min((var_21), (((((/* implicit */int) ((unsigned char) 1488628559792481012LL))) - (((/* implicit */int) ((_Bool) arr_0 [6LL])))))));
        arr_3 [i_0] = (-(((/* implicit */int) arr_1 [i_0] [i_0])));
        arr_4 [i_0] = var_19;
        arr_5 [i_0] = ((/* implicit */_Bool) max(((~(((int) arr_1 [8] [i_0])))), (((/* implicit */int) arr_2 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        var_22 = (!(((/* implicit */_Bool) -160943297)));
        /* LoopSeq 2 */
        for (unsigned char i_2 = 1; i_2 < 10; i_2 += 3) 
        {
            arr_13 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_2 + 3] [i_2 + 2])) ? (arr_9 [i_2 + 2] [i_2 + 2]) : (arr_9 [i_2 + 4] [i_2 + 4])));
            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_14))) ? (((((/* implicit */long long int) arr_10 [i_1])) & (arr_12 [i_1] [i_1]))) : (((/* implicit */long long int) (-(((/* implicit */int) var_4))))))))));
            var_24 = ((/* implicit */unsigned short) ((arr_9 [i_2] [i_2 + 3]) >= (arr_12 [i_1] [i_2 + 4])));
            var_25 = ((/* implicit */long long int) min((var_25), ((-(((arr_8 [i_1]) + (var_12)))))));
            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (((~(arr_6 [i_1]))) | (((/* implicit */int) var_4)))))));
        }
        for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            var_27 = ((/* implicit */_Bool) min((var_27), (var_10)));
            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) 160943296)) ? (((/* implicit */int) (unsigned char)186)) : (((/* implicit */int) (unsigned short)22664)))))));
            var_29 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(((/* implicit */int) var_11))))) | (arr_8 [i_3])));
        }
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 3) 
    {
        var_30 = ((/* implicit */unsigned int) ((unsigned char) (-(((/* implicit */int) arr_17 [i_4])))));
        var_31 = ((/* implicit */unsigned int) (+(arr_18 [i_4] [i_4])));
    }
    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        var_32 = ((/* implicit */short) arr_21 [i_5]);
        arr_22 [i_5] [i_5] = ((/* implicit */int) var_16);
    }
    var_33 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (short)16128)))))) && (((/* implicit */_Bool) ((unsigned int) (unsigned char)70))))))));
    var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (((5910407002137183053LL) & (((/* implicit */long long int) ((/* implicit */int) (short)-15127))))) : (((/* implicit */long long int) var_5))));
    var_35 = ((/* implicit */long long int) (+(((/* implicit */int) ((short) (~(((/* implicit */int) var_7))))))));
}
