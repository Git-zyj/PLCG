/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175476
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
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) - (((((/* implicit */_Bool) ((10U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-8)) - (((/* implicit */int) (_Bool)1))))) : (var_14))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        var_20 |= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-17))) : (4294967286U)))));
        arr_2 [i_0] [i_0 - 2] = ((/* implicit */long long int) (((+(((/* implicit */int) arr_1 [i_0 - 2])))) + ((+(((((/* implicit */_Bool) (unsigned short)63230)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0 + 1]))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -24)) ? (1125899906842623LL) : (((/* implicit */long long int) 1956951627))));
        var_21 = ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (4294967286U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)51))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2]))) : (-6202351405687328755LL)))) ? ((+(((/* implicit */int) (signed char)38)))) : ((~(((/* implicit */int) arr_10 [i_2])))))))));
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_23 = ((/* implicit */int) ((((2147483630) < (((/* implicit */int) (signed char)8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)18087)) != (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) ((arr_14 [i_3] [i_3] [i_3]) >> (((((/* implicit */int) (signed char)-38)) + (56)))))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) var_15))))))))));
            var_24 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_2]))))) | ((((+(arr_14 [i_2] [i_3] [i_2]))) % (((((/* implicit */_Bool) (unsigned short)10727)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2])))))))));
        }
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            var_25 = ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) arr_15 [i_4] [i_2])));
            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_4] [i_4] [i_4])) ? (arr_14 [i_2] [i_4] [i_4]) : (arr_14 [i_2] [i_2] [i_2])));
            arr_17 [i_2] [(_Bool)1] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-29)))))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            var_27 = ((((/* implicit */_Bool) 4294967288U)) ? (1553502831) : (((/* implicit */int) (unsigned short)54809)));
            var_28 *= ((((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_0 [i_2] [i_5]))))))) * ((((~(arr_14 [i_2] [i_2] [i_2]))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2] [i_5]))))));
        }
        var_29 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_2])) >> (((((/* implicit */int) var_17)) - (125)))))) | (((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */long long int) -743611912)) : (var_5)))));
        arr_20 [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_9 [i_2] [i_2])) : (((/* implicit */int) var_1)))))));
    }
}
