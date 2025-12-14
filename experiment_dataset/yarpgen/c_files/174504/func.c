/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174504
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
    var_11 += ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (3217215220U)))))) ? (min((min((var_4), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)1)) / (((/* implicit */int) (signed char)127))))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
    var_12 = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_1)))) ? ((~(var_0))) : (((/* implicit */int) min(((signed char)113), (var_10)))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((_Bool) arr_1 [1ULL]))), ((((-(arr_0 [i_0]))) >> ((((+(((/* implicit */int) (signed char)-8)))) + (58)))))));
        arr_3 [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) ((unsigned char) (~(var_0))))), ((~(arr_0 [i_0])))));
        arr_4 [6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) var_2))))) ? ((-(((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) ((_Bool) arr_1 [i_0])))))) ? (((/* implicit */int) ((short) min(((signed char)-1), ((signed char)7))))) : (((int) ((((/* implicit */_Bool) 946543489)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)127)))))));
        var_13 = ((/* implicit */unsigned char) (((!((!(((/* implicit */_Bool) var_6)))))) ? (min((min((562949952372736ULL), (((/* implicit */unsigned long long int) arr_0 [(signed char)7])))), (((/* implicit */unsigned long long int) 946543467)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (min((arr_0 [i_0]), (((/* implicit */long long int) var_8)))) : (min((((/* implicit */long long int) var_2)), (arr_0 [i_0]))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((unsigned long long int) arr_1 [i_1])) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
        arr_7 [i_1] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_4)) : (arr_6 [i_1]))));
    }
    for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (max((((/* implicit */unsigned long long int) (~((~(arr_8 [i_2])))))), (((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_10 [i_2] [i_2])))) ? (min((8243720764066968265ULL), (14984443223547074364ULL))) : (((15420494833406203579ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)116)))))))))));
        var_16 = min(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -7916921894633680259LL)) ? (((/* implicit */int) (signed char)-101)) : (((/* implicit */int) (unsigned short)65535))))))), (((((/* implicit */_Bool) var_4)) || (arr_1 [i_2]))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(4398046511103LL)))) ? (((/* implicit */long long int) min((-874983571), (921420058)))) : (max((9126206863888751594LL), (arr_0 [i_2])))))) ? (((arr_1 [i_2]) ? (15420494833406203579ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_2]))))) : (((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (10203023309642583350ULL) : (arr_9 [i_2] [i_2])))));
    }
    var_18 = ((/* implicit */unsigned long long int) var_5);
}
