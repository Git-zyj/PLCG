/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151042
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */signed char) (~(max((((/* implicit */unsigned int) -1972588151)), (4294967288U)))));
        var_16 &= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned short)4197)) ? (((/* implicit */int) (unsigned short)4218)) : (((/* implicit */int) (unsigned short)54107)))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)4197)) || (((/* implicit */_Bool) (unsigned short)4229)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61333))) : (7726507074071537292ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_9), (((/* implicit */unsigned short) var_2)))))) : (arr_2 [i_0])))));
        arr_4 [i_0] = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)4220)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4231))) : (0U)))))) ? (max((arr_2 [i_0]), (var_10))) : (((((/* implicit */_Bool) (unsigned short)56106)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_3 [i_0] [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) : (var_0))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            arr_8 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(signed char)8] [i_1] [i_1]))))) & (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_7 [(_Bool)1] [i_1])) : (((/* implicit */int) (_Bool)1))))));
            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_2))));
            var_18 = ((/* implicit */unsigned long long int) (signed char)27);
        }
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            arr_11 [i_0] [(short)17] [i_2] = ((/* implicit */unsigned int) ((max((((/* implicit */int) (unsigned short)4244)), (((((/* implicit */_Bool) (unsigned short)61312)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_0] [i_2] [i_2])))))) + (((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0] [i_2])), (arr_5 [i_0] [i_0] [i_0]))))));
            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (unsigned short)4226))));
        }
        arr_12 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) (unsigned short)4250)), (4294967295U)));
    }
    var_20 = ((/* implicit */signed char) var_4);
}
