/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146537
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((arr_0 [i_0]) ^ (((/* implicit */unsigned long long int) var_7)))))) ? (((long long int) 6794553697451041358LL)) : ((~(var_9)))));
        var_18 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((var_7) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))))) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (short)-17383)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) var_15)))) >= (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 15211302017603901015ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_0 [3ULL])))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) | (57344U))) + (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
        var_19 = ((/* implicit */short) arr_1 [2U]);
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */short) ((var_11) - (((/* implicit */long long int) ((/* implicit */int) (short)17383)))));
                        arr_10 [i_0] [i_3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) var_11);
                        arr_11 [i_3] [i_3] [i_3] [i_0] = ((/* implicit */_Bool) ((signed char) (signed char)16));
                        arr_12 [i_0] [i_1] [i_3] = ((/* implicit */short) (-(((/* implicit */int) ((signed char) arr_4 [i_2 + 1] [i_2 - 2])))));
                    }
                } 
            } 
        } 
    }
    var_21 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */int) (short)-6)) ^ (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((signed char) var_1))))));
    var_22 = ((/* implicit */short) var_9);
    var_23 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)(-32767 - 1))) && (((/* implicit */_Bool) var_4)))) ? (((unsigned long long int) ((15211302017603901011ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((((/* implicit */int) (short)-16966)) + (2147483647))) << (((var_3) - (270608394558385783LL))))) == (((/* implicit */int) var_16))))))));
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((short) var_0)))) + (-4319331439565108957LL)));
}
