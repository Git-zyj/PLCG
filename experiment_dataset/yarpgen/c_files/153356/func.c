/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153356
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
    var_16 += ((/* implicit */unsigned char) var_10);
    var_17 = ((/* implicit */int) min((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (5591254052128084444ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10)))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */long long int) 1841118212)) : (2220817651171256056LL)));
        var_18 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (12855490021581467172ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(var_15)))) - ((~((-9223372036854775807LL - 1LL)))))))));
    }
    for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967285U)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_12))))) + (((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1]))) : (2506429725U))))) & (((/* implicit */unsigned int) ((int) (+(arr_5 [(unsigned char)7])))))));
        var_19 = ((/* implicit */unsigned short) (~((+(((((/* implicit */int) (signed char)110)) * (((/* implicit */int) arr_3 [i_1] [9LL]))))))));
        arr_8 [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) ((arr_6 [i_1] [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1])))))) ? (max((4137742036616412325ULL), (((/* implicit */unsigned long long int) 6029800272846997181LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-3))))) == (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) * (min((-3838827086195104977LL), (((/* implicit */long long int) var_0)))))))));
        var_20 = ((/* implicit */signed char) arr_5 [i_1]);
    }
    for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 3) 
    {
        var_21 = ((/* implicit */int) arr_4 [i_2]);
        var_22 = ((/* implicit */int) arr_10 [i_2]);
    }
    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        arr_14 [i_3] |= ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
        var_23 = ((/* implicit */unsigned int) arr_13 [i_3] [i_3]);
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_13 [i_3] [(unsigned short)18]), (arr_13 [i_3] [i_3])))) || (((/* implicit */_Bool) min((arr_12 [i_3] [i_3]), (arr_12 [i_3] [3U]))))));
        arr_15 [i_3] |= ((/* implicit */unsigned short) arr_13 [i_3] [i_3]);
    }
    var_25 ^= ((/* implicit */unsigned short) var_11);
}
