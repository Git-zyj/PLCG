/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135618
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
    var_16 -= ((/* implicit */unsigned char) ((min(((-(5634915003071601579LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32358)) ? (1005887849U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-27628)))))))) <= (((/* implicit */long long int) min((min((-1196083809), (((/* implicit */int) (short)31223)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)2628)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((18446744073709551615ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((5535662186835688414ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)63)))))))));
        arr_3 [i_0 + 3] &= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)-9120)), (min((arr_1 [i_0 + 2]), (var_14)))));
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)16)) && (((/* implicit */_Bool) (short)-32240)))))))) ? ((+(4160749568ULL))) : (((/* implicit */unsigned long long int) max((arr_1 [i_0 + 2]), (((/* implicit */long long int) var_11)))))));
    }
    /* LoopSeq 2 */
    for (unsigned int i_1 = 1; i_1 < 11; i_1 += 1) 
    {
        var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)23163)) ? (min((var_14), (((((/* implicit */_Bool) arr_1 [i_1])) ? (9223372036854775807LL) : (var_15))))) : (((((/* implicit */_Bool) (short)-32240)) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)63))))) : ((~((-9223372036854775807LL - 1LL))))))));
        arr_6 [2LL] [i_1 - 1] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) (unsigned char)218))))) ? (min((-8601834721876445487LL), (((/* implicit */long long int) arr_0 [i_1])))) : (var_10)))) | (((unsigned long long int) min((var_15), (((/* implicit */long long int) (signed char)127))))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) arr_1 [i_1]))) > (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned char)253))))), ((unsigned short)1655))))));
        arr_7 [i_1] = ((/* implicit */short) arr_4 [i_1]);
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_3 = 1; i_3 < 16; i_3 += 4) 
        {
            arr_15 [i_2] [14ULL] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)123)) ? (((long long int) arr_8 [13LL] [i_3 - 1])) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3 + 2] [i_3 + 2])))));
            arr_16 [i_3] [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) (short)32239))));
            var_20 += ((/* implicit */unsigned char) ((arr_1 [i_3 + 2]) != (arr_1 [i_3 + 2])));
        }
        arr_17 [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
    }
    var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */short) (_Bool)1)), ((short)-4)));
    var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-12126))));
}
