/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11081
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
    var_19 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */int) var_11)) : ((+(((var_6) - (((/* implicit */int) var_2))))))));
    var_20 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)202))) : (var_9))) * (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64060))) / (var_4))) : (((((/* implicit */unsigned long long int) 480492370U)) / (2300444627231084634ULL)))))));
    var_21 ^= (+(min(((~(-877937872))), (((/* implicit */int) var_7)))));
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (max((var_10), (((/* implicit */int) var_15)))) : (((/* implicit */int) var_11))))) ? ((~(((((/* implicit */int) var_12)) << (((var_0) + (5581160800133388401LL))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -877937872)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (unsigned short)52919))))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_23 = ((((/* implicit */_Bool) ((min((((/* implicit */long long int) arr_0 [i_0] [i_0])), (arr_2 [i_0]))) / ((-(arr_2 [i_0])))))) ? (min((((/* implicit */long long int) var_5)), (arr_2 [i_0]))) : (((((/* implicit */_Bool) ((short) 4679213914955376655ULL))) ? (((/* implicit */long long int) (-(var_17)))) : (((((/* implicit */_Bool) 120)) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)199))))))));
        var_24 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_0 [i_0] [(unsigned char)11])) ? (6746830659922832598LL) : (arr_2 [i_0]))))), (max((((/* implicit */unsigned long long int) max((var_10), (((/* implicit */int) var_12))))), (7339797743737682510ULL)))));
    }
    for (unsigned short i_1 = 3; i_1 < 9; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) 120)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1 - 2]))) : (arr_0 [i_1] [i_1 - 2]))) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)52919)))), (((/* implicit */int) ((arr_0 [i_1] [i_1]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1])))))))))));
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [i_1] [4LL])) ? (((/* implicit */unsigned long long int) var_0)) : (var_4))), (((((/* implicit */_Bool) -6746830659922832599LL)) ? (8298839350027195773ULL) : (((/* implicit */unsigned long long int) 6746830659922832591LL))))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_18)), (((short) var_11)))))) : (max((((((/* implicit */_Bool) (signed char)107)) ? (arr_1 [i_1] [i_1]) : (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) var_11))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 3; i_2 < 9; i_2 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_3 = 1; i_3 < 9; i_3 += 1) 
        {
            arr_13 [i_3 + 1] [i_3 + 1] [i_2 - 3] = ((/* implicit */unsigned short) arr_2 [i_3 + 1]);
            arr_14 [i_2 - 1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)0))));
        }
        arr_15 [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 172409401)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2]))) : (var_4))))));
        var_26 = ((/* implicit */long long int) -877937873);
        var_27 = ((/* implicit */unsigned long long int) ((((arr_1 [15] [i_2 - 1]) + (9223372036854775807LL))) << (((arr_10 [(short)7] [i_2 - 1] [0LL]) - (6799557723998722334ULL)))));
        arr_16 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_2] [(unsigned short)6] [i_2 - 3])) ? (arr_2 [i_2 - 1]) : (((((/* implicit */_Bool) (unsigned short)28764)) ? (arr_2 [i_2 - 2]) : (arr_1 [i_2] [i_2])))));
    }
}
