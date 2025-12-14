/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175161
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
    var_19 += ((/* implicit */_Bool) var_8);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            var_20 *= ((/* implicit */_Bool) (-(((/* implicit */int) (short)-21037))));
            var_21 = ((/* implicit */unsigned long long int) max((var_21), (max(((~(max((arr_0 [i_0]), (((/* implicit */unsigned long long int) (short)21037)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) var_16)))))))))));
            var_22 = ((/* implicit */int) min(((short)-21023), (((/* implicit */short) (unsigned char)19))));
        }
        arr_4 [(unsigned short)5] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)247))) >= (-8LL)));
    }
    for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        var_23 *= ((/* implicit */_Bool) (-(max((arr_3 [i_2] [i_2] [i_2]), (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [17U])))))))));
        arr_8 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (short)3209)) || (((/* implicit */_Bool) arr_5 [i_2]))));
        arr_9 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) var_4)), (14515450767944003662ULL))) / (((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned int) var_18)))))))) ? (min((((/* implicit */int) var_11)), (((((/* implicit */int) var_7)) & (((/* implicit */int) var_10)))))) : (min((min((var_17), (((/* implicit */int) arr_1 [i_2])))), (((/* implicit */int) max(((short)8747), ((short)-28963))))))));
    }
    for (unsigned char i_3 = 1; i_3 < 13; i_3 += 4) 
    {
        arr_12 [i_3] = ((/* implicit */long long int) ((((/* implicit */int) var_10)) >> ((~((-(7LL)))))));
        var_24 &= ((/* implicit */signed char) (~(((/* implicit */int) (short)0))));
        arr_13 [i_3] = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) arr_11 [i_3])), (((((/* implicit */long long int) var_8)) - (arr_3 [(unsigned char)2] [i_3 + 1] [0U]))))) + (((/* implicit */long long int) max((((/* implicit */unsigned int) min((2147483647), (((/* implicit */int) arr_2 [i_3] [i_3]))))), (max((((/* implicit */unsigned int) arr_2 [i_3] [i_3])), (var_15))))))));
    }
}
