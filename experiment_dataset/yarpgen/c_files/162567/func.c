/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162567
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) 33554431U);
        var_14 = ((/* implicit */long long int) (signed char)1);
        var_15 = 2163786916U;
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 18; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            var_16 = ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_1 + 4]))));
            arr_7 [i_1] [2ULL] [i_2] = ((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) (unsigned short)2668)))));
            arr_8 [(_Bool)1] [i_1] [i_2] = ((/* implicit */short) (+(-976647950313752221LL)));
        }
        arr_9 [i_1] = ((/* implicit */signed char) 4251488618U);
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)123)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551608ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(unsigned short)8]))) : (4261412865U)))) : (6449860731058926815ULL)));
    }
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62938))) : (2340305594U)))))) ? (((/* implicit */unsigned long long int) ((unsigned int) (~(((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8309197627504030530LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (-9223372036854775789LL)))) ? (min((16080330907402585145ULL), (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6)))))))));
    var_19 = ((/* implicit */unsigned int) (+(16080330907402585169ULL)));
}
