/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139938
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
    var_14 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))));
    var_15 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_8) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41070))))))))), (min((min((var_6), (var_10))), (((/* implicit */long long int) (~(((/* implicit */int) var_2)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_8 [i_0] [i_1] [5LL])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)22523)))), (max((((/* implicit */int) (unsigned short)21277)), (arr_9 [i_0] [(signed char)16])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (2915050964U) : (((/* implicit */unsigned int) arr_7 [i_2 + 1] [i_1 + 1]))))) : (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (signed char)41)) ? (-2235196458799136941LL) : (arr_5 [i_1]))) : (arr_5 [i_1])))));
                    arr_10 [i_0] [i_0] [(unsigned short)9] [i_1] = ((/* implicit */short) min((((/* implicit */long long int) 195253421U)), (max((((/* implicit */long long int) (unsigned short)64732)), (min((((/* implicit */long long int) arr_9 [i_0] [i_2 + 1])), (0LL)))))));
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((11U), (((/* implicit */unsigned int) arr_7 [i_2 - 1] [i_1 - 1]))))) ? (((min((((/* implicit */long long int) arr_1 [i_2])), (var_10))) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2 - 1]))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44258))) < (var_8)))), (var_12))))))))));
                    var_18 = (-((~(1480212644))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) max((max((var_11), (((/* implicit */int) (unsigned short)127)))), (min((((/* implicit */int) var_12)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)82)) : (((/* implicit */int) (unsigned short)12288)))))))))));
}
