/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151105
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
    for (int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_18))));
        var_21 = ((/* implicit */int) var_13);
        var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-4))));
    }
    for (short i_1 = 3; i_1 < 23; i_1 += 3) 
    {
        var_23 = ((/* implicit */unsigned char) (-((-((~(((/* implicit */int) arr_4 [i_1]))))))));
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) var_1))));
        var_25 = ((unsigned short) var_1);
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_10)) ? (arr_5 [18ULL] [i_1]) : (((/* implicit */unsigned long long int) var_0))))))) && ((!(((/* implicit */_Bool) arr_5 [i_1] [i_1]))))));
        var_27 = ((/* implicit */signed char) (+(((((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_6))))) | (((((/* implicit */int) var_17)) & (((/* implicit */int) var_13))))))));
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        var_28 |= ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_18)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 2; i_3 < 21; i_3 += 1) 
        {
            arr_14 [i_3] [i_3] = ((((max((arr_3 [i_2 + 1]), (((/* implicit */long long int) arr_4 [i_2])))) | (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2 + 1]))))) != (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_17))))))));
            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(var_7))) ? (max((0LL), (arr_3 [i_2]))) : (((/* implicit */long long int) var_18))))) && (max((((((/* implicit */_Bool) (short)32767)) && (((/* implicit */_Bool) arr_5 [i_3 + 1] [i_2 + 1])))), (((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_5 [i_3 + 3] [i_3]))))))));
            var_30 ^= ((/* implicit */unsigned short) (((((+(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (var_0))))) + (9223372036854775807LL))) << ((+(((0LL) >> (3LL)))))));
            arr_15 [i_3] [i_2] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) / (((/* implicit */int) arr_13 [i_2 + 1] [i_3])))))));
        }
        var_31 = ((/* implicit */unsigned char) (_Bool)1);
        var_32 += ((/* implicit */unsigned int) (~(((/* implicit */int) (((~(((/* implicit */int) arr_4 [i_2])))) != (((/* implicit */int) var_19)))))));
    }
    /* LoopSeq 2 */
    for (unsigned int i_4 = 3; i_4 < 14; i_4 += 2) 
    {
        var_33 = ((/* implicit */signed char) (~(((long long int) (signed char)(-127 - 1)))));
        arr_20 [i_4 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_4 + 3] [i_4 + 3])) - (((((/* implicit */int) (signed char)-124)) & (((/* implicit */int) var_3))))))) ? (((((/* implicit */int) (signed char)23)) >> (((max((((/* implicit */long long int) var_12)), (var_11))) - (2083716951LL))))) : ((~(((/* implicit */int) arr_1 [i_4 - 2]))))));
        var_34 -= ((/* implicit */_Bool) (((((+(var_12))) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_4 - 3])))))))) >> (((((/* implicit */int) var_17)) + (23533)))));
        var_35 = ((/* implicit */signed char) var_17);
    }
    for (short i_5 = 0; i_5 < 12; i_5 += 2) 
    {
        var_36 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
        var_37 ^= ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */int) var_14)) / (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_6)) : (arr_17 [i_5] [i_5]))) : (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) var_10))));
        var_38 = ((/* implicit */int) min((var_38), (((((/* implicit */_Bool) (~(((((/* implicit */long long int) ((/* implicit */int) var_4))) / (var_0)))))) ? ((+(((((/* implicit */int) arr_10 [i_5])) >> (((((/* implicit */int) var_1)) - (35368))))))) : ((-(((/* implicit */int) (!(var_2))))))))));
    }
    var_39 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_14)))));
    var_40 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_19))))))))));
}
