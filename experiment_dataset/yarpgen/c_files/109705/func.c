/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109705
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
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (max((min((((/* implicit */unsigned int) var_14)), (var_2))), (((((/* implicit */_Bool) var_5)) ? (var_11) : (var_7))))))))));
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((((/* implicit */unsigned long long int) (~(677503697U)))) > (3552681354090969338ULL))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) 4124647938U)) : (3552681354090969338ULL)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((719367979U) < (4124647955U))))))) : ((+((-(var_7))))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) >= ((+(4124647955U)))))))))));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) arr_0 [i_0]))));
        arr_2 [i_0] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */short) var_3)), (var_14))))))) ? (min((((/* implicit */unsigned long long int) arr_1 [15U])), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) & (var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) var_6))))), (arr_0 [i_0])))))));
    }
    for (unsigned int i_1 = 4; i_1 < 22; i_1 += 2) 
    {
        var_20 = ((/* implicit */long long int) arr_6 [i_1 - 2]);
        var_21 += ((/* implicit */short) (~(((/* implicit */int) arr_3 [i_1 - 1]))));
    }
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            {
                var_22 = ((170319344U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61082))));
                arr_11 [(short)6] = ((/* implicit */unsigned short) (+(739926354U)));
            }
        } 
    } 
}
