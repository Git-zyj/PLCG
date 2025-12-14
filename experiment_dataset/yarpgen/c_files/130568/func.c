/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130568
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_14 = 4294967295U;
        var_15 += ((/* implicit */signed char) ((short) 5642757616800635017ULL));
        var_16 *= ((/* implicit */unsigned char) (((~(arr_0 [i_0] [i_0]))) * (max((arr_0 [8] [i_0]), (arr_0 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (~(((unsigned int) (short)-21)))))));
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)53)), ((unsigned short)0)))) ? (((arr_4 [i_1] [i_1] [2ULL]) ? (8589934591ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)203)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1] [i_1] [i_1])) >> (((-6611289265319331793LL) + (6611289265319331813LL)))))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)42))) : (18014397435740160LL))))))));
                }
            } 
        } 
    }
    var_19 = ((/* implicit */short) (unsigned short)7);
    var_20 = ((/* implicit */int) var_6);
}
