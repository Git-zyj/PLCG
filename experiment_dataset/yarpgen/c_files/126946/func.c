/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126946
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)30))))) ? ((-(((/* implicit */int) var_2)))) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [14])) > (((/* implicit */int) (signed char)-81)))))));
            var_18 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (short)-32745)) : (-1150484238)))) ? (arr_1 [i_0] [i_1]) : (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0] [6LL]))))));
            var_19 = ((((/* implicit */_Bool) -1544638904354781043LL)) ? ((-(var_15))) : (((/* implicit */unsigned int) ((var_3) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_12))))));
        }
        var_20 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0])) + (((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)64))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (short)30)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7064945615659772547LL)) ? (7064945615659772555LL) : (((/* implicit */long long int) ((/* implicit */int) var_16)))))) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60785))))));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 16; i_2 += 3) /* same iter space */
    {
        var_21 -= ((((/* implicit */_Bool) (short)-9315)) ? (((/* implicit */int) arr_4 [i_2])) : ((~(943481987))));
        arr_9 [i_2] [i_2] = ((/* implicit */long long int) ((short) arr_0 [i_2]));
    }
    var_22 = var_3;
    var_23 = var_6;
}
