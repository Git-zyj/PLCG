/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116013
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
    var_13 = ((/* implicit */signed char) min(((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_4))))), (((/* implicit */unsigned int) var_9))));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_4) + (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) - (var_7))))))) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_7))))))));
    var_15 = ((/* implicit */long long int) max((var_5), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */unsigned long long int) 4294967291U)) : (var_0))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)194)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (-7160382718874800207LL)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((_Bool) max((((/* implicit */unsigned char) arr_1 [i_0 - 3] [i_0 - 1])), ((unsigned char)233)))))));
        var_17 = ((/* implicit */long long int) 169684226U);
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((var_12), (((/* implicit */long long int) arr_4 [i_1 - 1] [i_0 - 2]))))), (arr_6 [i_0 - 2] [i_0 - 2] [i_1])));
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7))) : (var_0))) <= (((/* implicit */unsigned long long int) max((var_5), (((/* implicit */unsigned int) arr_3 [i_2] [i_2] [0ULL])))))))) + (((/* implicit */int) ((_Bool) min(((unsigned short)17698), (((/* implicit */unsigned short) arr_2 [i_1] [i_1 + 2])))))))))));
                }
            } 
        } 
    }
}
