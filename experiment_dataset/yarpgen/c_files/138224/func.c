/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138224
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
    var_13 = ((/* implicit */signed char) min((((/* implicit */long long int) (signed char)-11)), (-6041773836129932506LL)));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_14 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_11)) / (var_0)))) ? (7286063305809457473LL) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_2)))))));
        var_15 = max((((/* implicit */long long int) min((arr_0 [i_0] [i_0]), (((/* implicit */signed char) var_8))))), (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) * (var_2))));
        var_16 = ((/* implicit */unsigned int) max((min((((((/* implicit */_Bool) 6041773836129932505LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)117))) : (-6041773836129932491LL))), (max((-713831268233896609LL), (((/* implicit */long long int) arr_1 [i_0])))))), (((/* implicit */long long int) max((((/* implicit */short) ((_Bool) var_0))), (((short) 7286063305809457473LL)))))));
        var_17 = ((/* implicit */_Bool) max((min((((/* implicit */long long int) arr_0 [i_0] [i_0])), (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_2) : (var_2))))), (var_0)));
        var_18 = ((/* implicit */_Bool) (+((+((~(7286063305809457479LL)))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 13; i_1 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) ((arr_1 [i_1 + 1]) ? (((/* implicit */int) arr_1 [i_1 - 1])) : (((/* implicit */int) arr_1 [i_1 - 1]))));
        /* LoopSeq 4 */
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            var_20 ^= ((/* implicit */unsigned char) (~(var_9)));
            var_21 = ((/* implicit */unsigned short) ((var_8) && (((/* implicit */_Bool) arr_6 [i_1 + 2] [i_1 + 1]))));
        }
        for (long long int i_3 = 2; i_3 < 13; i_3 += 4) 
        {
            var_22 = ((/* implicit */long long int) ((((/* implicit */int) var_8)) | (((/* implicit */int) arr_6 [i_3 - 1] [i_1 + 1]))));
            var_23 = ((((/* implicit */_Bool) arr_8 [i_1] [i_3 + 1])) ? (arr_10 [i_3 + 2] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3 + 1] [i_1 - 1]))));
            var_24 = ((/* implicit */unsigned int) arr_8 [i_3] [i_1]);
            var_25 = ((/* implicit */long long int) ((var_11) == ((+(((/* implicit */int) arr_2 [i_3 + 1]))))));
        }
        for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)30987)) ? (6041773836129932504LL) : (-6041773836129932522LL)));
            var_27 = ((/* implicit */signed char) arr_8 [i_1 + 2] [i_1 - 1]);
            var_28 = var_7;
            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_3 [i_1])))) ? (((/* implicit */int) arr_6 [i_1 + 2] [i_1 + 2])) : (((var_1) ? (((/* implicit */int) arr_6 [i_4] [i_1])) : (((/* implicit */int) var_12))))));
        }
        for (long long int i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            var_30 = ((/* implicit */signed char) ((5147184897723625345ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30973)))));
            var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) (((!(var_8))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_13 [i_1] [i_5] [i_5])))))));
            var_32 = ((/* implicit */short) (_Bool)0);
        }
        var_33 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_14 [i_1] [i_1])) ? (((/* implicit */int) arr_9 [i_1] [i_1])) : (((/* implicit */int) (signed char)(-127 - 1)))))));
        var_34 = ((/* implicit */unsigned char) arr_10 [i_1] [i_1]);
    }
    for (unsigned short i_6 = 2; i_6 < 13; i_6 += 2) /* same iter space */
    {
        var_35 = ((((/* implicit */_Bool) (signed char)-11)) ? (-6041773836129932504LL) : (((/* implicit */long long int) var_11)));
        var_36 = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) var_12)), (var_3))) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
        var_37 = ((((/* implicit */_Bool) 6041773836129932521LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) (unsigned short)31375))))))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)4))) / (6041773836129932504LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((unsigned int) -3321408359728383853LL)))));
    }
}
