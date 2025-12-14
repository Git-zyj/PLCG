/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106813
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
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [(short)3] [(short)3]))));
        var_19 = ((/* implicit */unsigned char) arr_1 [i_0 - 1] [i_0]);
        var_20 = ((/* implicit */short) min((((((/* implicit */_Bool) 141863388262170624ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) (signed char)7))))) : (14054943141386011961ULL))), (((/* implicit */unsigned long long int) (short)16384))));
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)51667)) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)40228)) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [15LL] [10U])))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_3 [12])) : (((/* implicit */int) arr_1 [i_1] [i_1]))))))));
        var_22 = ((/* implicit */unsigned int) arr_2 [i_1]);
    }
    for (short i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        var_23 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)40242))));
        var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) max((arr_6 [i_2]), (arr_6 [i_2]))))));
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            var_25 = var_10;
            var_26 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_9 [i_3]))));
        }
    }
    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_7))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)40226))));
    var_28 = (-(((/* implicit */int) (unsigned short)31669)));
}
