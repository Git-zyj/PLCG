/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120580
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
    var_15 = ((/* implicit */_Bool) var_8);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) || (((/* implicit */_Bool) var_7))))) : (((((/* implicit */_Bool) ((long long int) 10981366859362787375ULL))) ? (((/* implicit */int) ((short) (unsigned short)16368))) : ((~(((/* implicit */int) (_Bool)1))))))));
                var_17 &= -8978874145562139702LL;
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_3))));
    /* LoopSeq 4 */
    for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    var_19 = var_14;
                    arr_13 [i_2] [i_3] [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */unsigned short) arr_7 [i_4 - 1] [i_3])), (var_0))))));
                }
            } 
        } 
        var_20 = ((/* implicit */short) (((~(-7402569981909670317LL))) - (-11LL)));
        var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned short) 10LL))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))) : ((-(arr_1 [i_2]))))) >= ((+(8186916239763614224ULL)))));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 2) 
    {
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(var_4)))) > (5325731318177168047ULL)));
        var_23 = ((/* implicit */unsigned long long int) arr_14 [i_5 + 1] [i_5]);
        arr_18 [i_5] = (~(((/* implicit */int) arr_14 [i_5 - 1] [i_5 - 1])));
        var_24 ^= (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-14LL));
        arr_19 [i_5 - 1] [5U] = ((/* implicit */unsigned short) ((unsigned char) (_Bool)1));
    }
    /* vectorizable */
    for (unsigned int i_6 = 2; i_6 < 23; i_6 += 2) 
    {
        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_21 [i_6 - 2] [21]))) >> (((((((/* implicit */_Bool) (unsigned short)8866)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_6)))) - (97))))))));
        var_26 ^= ((/* implicit */unsigned short) ((unsigned int) 0ULL));
        var_27 = ((/* implicit */unsigned long long int) ((long long int) (+(18446744073709551606ULL))));
    }
    /* vectorizable */
    for (unsigned int i_7 = 1; i_7 < 15; i_7 += 4) 
    {
        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)62282)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))))) : ((+(arr_21 [i_7] [i_7 - 1])))));
        arr_26 [i_7] [9LL] = ((/* implicit */long long int) (~(((/* implicit */int) arr_20 [i_7 + 1]))));
    }
    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)16630)) < (var_7))))) <= (((5175585639212235082LL) >> (((/* implicit */int) (_Bool)1))))));
}
