/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18928
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) (~(-7922115041291994496LL)));
        arr_5 [i_0] = ((/* implicit */short) min((((((/* implicit */int) (short)9451)) ^ (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (var_5)))));
        arr_6 [(unsigned short)19] = ((/* implicit */short) (-(((/* implicit */int) var_16))));
        var_17 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) (signed char)(-127 - 1)))) ? (max((((/* implicit */long long int) arr_1 [i_0] [i_0])), (var_15))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        arr_9 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_1])) - (((/* implicit */int) (unsigned short)55346))));
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) 4482329141667136629LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)127)))))));
    }
    for (int i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) (((+(((/* implicit */int) (short)-11946)))) - (((/* implicit */int) ((short) arr_8 [i_2])))));
        arr_14 [i_2] [i_2] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))) ? ((-(((/* implicit */int) (unsigned short)6470)))) : (((((/* implicit */_Bool) 12404276084698699239ULL)) ? (arr_12 [i_2]) : (-1034280424))))));
        var_20 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */int) ((short) (_Bool)1))) <= (((/* implicit */int) ((_Bool) var_14)))))), (((4482329141667136629LL) & (((var_15) ^ (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2])))))))));
    }
    /* vectorizable */
    for (short i_3 = 1; i_3 < 24; i_3 += 2) 
    {
        var_21 |= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_15 [i_3 + 1])) ? (4771067271082115123ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19385)))))));
        var_22 = ((/* implicit */long long int) var_16);
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 13; i_4 += 2) 
    {
        for (int i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            {
                var_23 = ((/* implicit */unsigned long long int) var_10);
                arr_22 [i_4] [2ULL] = ((/* implicit */long long int) ((int) ((long long int) (_Bool)1)));
            }
        } 
    } 
}
