/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148314
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
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) var_5))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */signed char) (((+(((/* implicit */int) arr_0 [i_0])))) < ((~(((/* implicit */int) ((unsigned short) (_Bool)1)))))));
                var_14 = ((((/* implicit */unsigned long long int) 4159475982U)) | (9815892276911939817ULL));
                arr_5 [10ULL] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) max((8630851796797611798ULL), (((/* implicit */unsigned long long int) (unsigned char)171))))) ? (min((((/* implicit */long long int) arr_3 [i_0])), (9LL))) : (((/* implicit */long long int) ((unsigned int) -3LL))))), (((/* implicit */long long int) max(((!(((/* implicit */_Bool) 77124808504052315ULL)))), (var_2))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) max((2199023255551ULL), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (17590038560768ULL))));
    /* LoopSeq 3 */
    for (signed char i_2 = 2; i_2 < 18; i_2 += 2) 
    {
        var_16 = ((/* implicit */int) arr_7 [i_2]);
        var_17 = ((/* implicit */long long int) ((unsigned char) -1LL));
    }
    for (unsigned char i_3 = 4; i_3 < 19; i_3 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -670523983)) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) (short)8))));
        var_19 = ((/* implicit */int) ((unsigned short) max((arr_8 [i_3 - 4]), (arr_8 [i_3 - 4]))));
        var_20 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_9 [i_3 + 1])) ? (((/* implicit */int) arr_9 [i_3 - 3])) : (((/* implicit */int) arr_9 [i_3 + 2])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_3 - 3])))))));
    }
    for (unsigned long long int i_4 = 4; i_4 < 14; i_4 += 1) 
    {
        var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-105)), ((unsigned short)56876)))) ? (((/* implicit */int) (signed char)-105)) : (((/* implicit */int) var_10))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 18; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_22 = ((/* implicit */long long int) ((signed char) var_4));
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_12 [(signed char)11] [(signed char)11])) + (2147483647))) << (((arr_14 [i_4] [i_5] [i_5] [i_6]) - (13427353800172828642ULL)))))) ? (var_3) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44563))) : (var_8))))))) ? ((-(((/* implicit */int) ((unsigned char) var_0))))) : (((/* implicit */int) (signed char)23))));
                    var_24 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((min((-3685668227556174117LL), (((/* implicit */long long int) (_Bool)1)))), (((((/* implicit */_Bool) var_1)) ? (-1239998094312941482LL) : (-3685668227556174107LL))))))));
                }
            } 
        } 
    }
}
