/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11497
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
    var_11 = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */int) var_7)) : (var_2))) + ((+(((/* implicit */int) var_10)))))), (var_6)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [(signed char)0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) (short)6833))));
        arr_4 [(unsigned short)2] &= ((/* implicit */unsigned short) (((+(((/* implicit */int) var_9)))) << (((((((/* implicit */int) ((signed char) (unsigned short)57785))) + (91))) - (5)))));
    }
    for (short i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_2]))));
            var_13 &= ((/* implicit */short) var_1);
        }
        for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            arr_14 [i_1] [i_3] = var_7;
            arr_15 [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_11 [i_1])))), (((((/* implicit */_Bool) arr_8 [i_1] [(_Bool)1])) ? (((/* implicit */int) (unsigned short)57788)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned char) (signed char)-36))))) ? (((/* implicit */int) (unsigned short)65535)) : (((((/* implicit */int) var_7)) >> (((((/* implicit */int) var_1)) - (60602)))))))));
            var_14 += ((/* implicit */unsigned short) 1142779081U);
            arr_16 [i_3] [i_3] [i_1] = ((/* implicit */unsigned short) (signed char)13);
        }
        for (unsigned short i_4 = 3; i_4 < 20; i_4 += 4) 
        {
            arr_21 [i_1] [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_20 [i_1] [i_4 - 2] [i_4 - 2])) ? (((/* implicit */int) var_3)) : (((((/* implicit */int) var_4)) / (var_6))))), (((/* implicit */int) arr_20 [3] [i_1] [i_4]))));
            var_15 -= ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) ((unsigned short) 4294967295U))) ? (((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */int) arr_19 [i_1] [i_1] [i_1])) : (((/* implicit */int) var_3)))) : (max((1276833751), (((/* implicit */int) (signed char)107)))))));
            arr_22 [i_1] [i_1] [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_8))));
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) max((var_0), (((/* implicit */unsigned short) var_10))))) : (((/* implicit */int) var_5))))) ? (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned short)32896)))), ((~(((/* implicit */int) var_10)))))) : ((~(((/* implicit */int) var_3))))));
        }
        arr_23 [i_1] [i_1] = ((/* implicit */unsigned short) max((max((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), (((((/* implicit */_Bool) (unsigned short)57790)) ? (((/* implicit */int) var_0)) : (127925999))))), (((((arr_17 [i_1] [i_1] [i_1]) > (((/* implicit */int) var_7)))) ? (((/* implicit */int) var_0)) : ((+(((/* implicit */int) var_8))))))));
        var_17 |= var_7;
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) arr_19 [i_1] [i_1] [(unsigned char)16]))));
    }
    for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        arr_28 [i_5] = ((/* implicit */unsigned int) max((arr_25 [i_5] [i_5]), (arr_24 [i_5])));
        var_19 += ((/* implicit */_Bool) arr_26 [i_5] [i_5]);
        var_20 += ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-123))));
        var_21 |= ((/* implicit */int) arr_24 [i_5]);
    }
    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) max((max(((unsigned short)7752), (((/* implicit */unsigned short) (signed char)-10)))), (var_7))))));
    var_23 -= ((/* implicit */signed char) (unsigned short)24733);
}
