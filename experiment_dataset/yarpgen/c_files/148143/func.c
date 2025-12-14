/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148143
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) 1050828135U)) ? (((/* implicit */int) (unsigned short)65519)) : (((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) var_3))));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_2 [(unsigned short)4]), (arr_2 [i_0])))) ? ((~(-4882213599698474469LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))));
        var_20 |= 4882213599698474468LL;
    }
    /* LoopSeq 4 */
    for (unsigned short i_1 = 2; i_1 < 14; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) ((arr_0 [i_1 - 1]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) 3244139160U)))))));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 7154608846207886752LL)))) ? (((var_11) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_1])))) : (((/* implicit */int) arr_1 [i_1 + 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : ((~(max((1748696149704958816LL), (((/* implicit */long long int) var_3))))))));
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)54)) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (1050828135U)))), (arr_4 [i_1 - 1]))) : ((~(-4882213599698474452LL)))));
        var_24 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_1 + 1]))));
    }
    for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        var_25 |= ((/* implicit */unsigned long long int) arr_3 [i_2]);
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            arr_12 [i_2] = ((_Bool) ((arr_11 [i_2] [i_2] [i_3]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)204))) : (1050828135U)));
            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (+((~(4294967295U))))))));
            var_27 = max((((/* implicit */long long int) (+(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned char)204)) : (((/* implicit */int) (unsigned char)18))))))), (max(((-9223372036854775807LL - 1LL)), (arr_9 [i_3] [i_3]))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            var_28 = arr_5 [(unsigned short)11] [i_4];
            var_29 = (-(((((/* implicit */_Bool) (unsigned short)27259)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32747))) : (4882213599698474468LL))));
            arr_17 [i_2] [8] [11LL] = ((/* implicit */short) (~(13247986508540662130ULL)));
        }
    }
    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 2) 
    {
        var_30 = ((/* implicit */unsigned char) (~(max((1202921861), (413261123)))));
        var_31 = ((/* implicit */signed char) 3244139154U);
        var_32 = ((/* implicit */_Bool) (+(min((arr_20 [i_5]), (arr_20 [i_5])))));
        var_33 = ((/* implicit */int) arr_19 [i_5] [i_5]);
    }
    for (long long int i_6 = 3; i_6 < 7; i_6 += 4) 
    {
        arr_23 [i_6 + 1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)(-127 - 1)))));
        var_34 = ((/* implicit */unsigned long long int) var_7);
    }
    var_35 &= ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned char) var_11))));
    var_36 = ((/* implicit */unsigned int) (unsigned char)124);
    var_37 &= ((/* implicit */unsigned short) (short)(-32767 - 1));
}
