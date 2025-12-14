/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187922
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
    var_15 -= ((/* implicit */int) var_8);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_16 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */signed char) var_14)), (var_11))))));
        arr_3 [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) 822148266U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36515))) : (9496545771515557400ULL))), (((/* implicit */unsigned long long int) (unsigned short)29020))));
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) var_10)), (var_13)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-21)) : (((/* implicit */int) (unsigned short)56230))))) : (min((((/* implicit */unsigned int) var_14)), (1928579212U))))))));
        var_18 -= ((/* implicit */int) ((((/* implicit */int) ((max((1928579217U), (((/* implicit */unsigned int) var_14)))) > ((((_Bool)1) ? (2366388104U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))) <= (((/* implicit */int) (unsigned short)29041))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)31744)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))));
            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (+(-6567870961715804512LL))))));
            var_21 = ((/* implicit */short) (+(((/* implicit */int) var_11))));
        }
        for (unsigned short i_3 = 2; i_3 < 13; i_3 += 1) 
        {
            arr_13 [i_3] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */int) (unsigned short)36516)) == (((/* implicit */int) (unsigned char)128))));
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)189)) ? (var_5) : (((/* implicit */int) (signed char)-41))));
            var_23 = ((/* implicit */short) ((var_5) >> (((-933503839599552144LL) + (933503839599552164LL)))));
            arr_14 [i_3] = var_14;
        }
        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) 2845952058U))));
        var_25 = ((/* implicit */unsigned long long int) var_1);
    }
    var_26 = ((/* implicit */unsigned int) ((var_2) <= (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
}
