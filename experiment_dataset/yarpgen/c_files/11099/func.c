/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11099
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
    var_11 ^= ((/* implicit */signed char) (+(((/* implicit */int) var_9))));
    var_12 = var_7;
    var_13 = ((/* implicit */unsigned char) var_0);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((((/* implicit */int) (unsigned short)14503)) * (((/* implicit */int) (_Bool)1)))) / (min((((/* implicit */int) (_Bool)1)), (-1))))) : ((((_Bool)1) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)-10403)))));
        var_14 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_9)) << (((((/* implicit */int) arr_1 [i_0])) - (32717)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (309005887427583130LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) var_3))))))));
        var_15 = ((/* implicit */unsigned short) ((unsigned long long int) (unsigned short)14503));
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? ((~(max((arr_2 [i_0 - 2] [i_0 - 2]), (((/* implicit */unsigned int) var_3)))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))));
        var_16 = (-(((((/* implicit */int) (unsigned short)23692)) / (((/* implicit */int) (short)6166)))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) var_3);
        var_18 = ((/* implicit */_Bool) ((int) (~(var_1))));
        arr_8 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) >> (((2359490471162278742LL) - (2359490471162278721LL)))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 2) 
        {
            var_19 -= ((/* implicit */unsigned short) arr_7 [i_1]);
            var_20 = ((/* implicit */int) ((long long int) var_0));
        }
        for (short i_3 = 1; i_3 < 23; i_3 += 1) 
        {
            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))))))));
            arr_13 [i_1] [i_3] [i_3] = ((/* implicit */long long int) (+(var_1)));
        }
    }
}
