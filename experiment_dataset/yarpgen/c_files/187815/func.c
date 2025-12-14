/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187815
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
    var_16 &= ((/* implicit */signed char) var_11);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_18 &= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || (((/* implicit */_Bool) arr_2 [i_1] [i_2]))))), (((((/* implicit */_Bool) arr_2 [i_0] [i_2])) ? (((/* implicit */unsigned long long int) 9223372036854775804LL)) : (11512180156185881324ULL)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 170017158596067503LL))));
                        var_20 = ((/* implicit */short) ((12336622164964518228ULL) != (((/* implicit */unsigned long long int) 1347745221U))));
                    }
                    arr_11 [i_1] = arr_6 [i_0] [i_1];
                    arr_12 [i_0] [i_0] [i_0] [6ULL] &= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [i_0] [i_2] [i_0] [i_1]))) | ((+(arr_10 [i_0] [i_1] [i_2] [i_1])))));
                    var_21 |= ((/* implicit */short) (~(((((/* implicit */_Bool) 1874414870996904818ULL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)98)))))));
                }
            } 
        } 
        arr_13 [i_0] = ((/* implicit */signed char) max((13219417353638207813ULL), (((/* implicit */unsigned long long int) -1510665433020159672LL))));
        arr_14 [i_0] [i_0] |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23294))) >= (((unsigned long long int) 11512180156185881330ULL))));
    }
}
