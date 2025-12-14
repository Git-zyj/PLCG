/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162069
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
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) var_5))));
    var_20 *= ((/* implicit */int) (!((!(((/* implicit */_Bool) ((((/* implicit */int) var_15)) % (((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) var_18);
        var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-12))));
        var_23 = ((/* implicit */int) min((var_23), ((((!(((/* implicit */_Bool) 1278097991)))) ? (((/* implicit */int) ((unsigned char) arr_1 [6ULL]))) : (arr_1 [(signed char)14])))));
        var_24 = ((/* implicit */signed char) max((((long long int) ((unsigned long long int) (unsigned char)3))), (((/* implicit */long long int) ((1470008608) != (-1786270381))))));
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 1) /* same iter space */
    {
        var_25 -= ((/* implicit */unsigned short) ((unsigned int) (unsigned char)3));
        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)58)) ? (((/* implicit */int) (signed char)58)) : (((/* implicit */int) (signed char)51))))) ? (((/* implicit */int) min((var_17), (((/* implicit */short) (signed char)61))))) : (((((/* implicit */_Bool) -3656809702904915041LL)) ? (((/* implicit */int) (unsigned char)52)) : (((/* implicit */int) (unsigned char)23)))))))));
        var_27 = ((/* implicit */int) max((((((/* implicit */_Bool) (unsigned char)6)) ? (1745194135U) : (((/* implicit */unsigned int) 521989534)))), (((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) (unsigned char)0))))))));
        var_28 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) arr_3 [i_1])))), (min((arr_4 [i_1] [i_1]), (-2006190628))));
        arr_6 [i_1] |= ((/* implicit */int) 488092231U);
    }
    for (int i_2 = 0; i_2 < 19; i_2 += 1) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */int) (unsigned char)252)) : (((int) 2077269596))));
        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(912235905819737727LL)))) ? (((/* implicit */int) var_14)) : ((+(((/* implicit */int) (unsigned char)3))))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_3 = 4; i_3 < 17; i_3 += 4) 
    {
        arr_12 [0U] [0U] = ((/* implicit */unsigned char) ((((arr_11 [i_3 + 1]) <= (((/* implicit */long long int) ((((/* implicit */int) var_14)) % (((/* implicit */int) (unsigned short)44096))))))) ? (((((/* implicit */_Bool) 1974860604)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 1974860590)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3 + 2])) ? (((/* implicit */long long int) -272234338)) : (arr_11 [i_3 + 3])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3 - 3]))) : (min((((/* implicit */long long int) (_Bool)0)), (-3091148007256993667LL)))))));
        var_31 = ((/* implicit */int) ((((int) arr_10 [i_3 + 1])) == (var_3)));
        var_32 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) 3984157829U)) ? (-3091148007256993667LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) : (((/* implicit */long long int) 2147483520)))) != (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) max((281474976710592ULL), (((/* implicit */unsigned long long int) 3984157829U)))))))));
        arr_13 [i_3] = ((/* implicit */unsigned short) ((((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)60))) - (arr_11 [19LL]))) & (((((/* implicit */_Bool) (signed char)-28)) ? (arr_11 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))) % (((((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */long long int) 776155489)) : (-3091148007256993665LL))) % (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3])))))));
    }
}
