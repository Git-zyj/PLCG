/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185226
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3842195001U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_10)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)35706)))) : (((/* implicit */int) min((var_2), ((unsigned short)35706))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (2436755063U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (21ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)47874)))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) var_5);
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            var_20 = var_17;
            var_21 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)19363))))) : (((((/* implicit */int) (short)26723)) | (((/* implicit */int) (unsigned short)1858))))));
        }
        arr_6 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned short) min((min(((unsigned short)56608), (var_4))), (((/* implicit */unsigned short) var_9)))));
        var_22 = ((/* implicit */unsigned long long int) arr_5 [i_0 + 1] [i_0 + 2]);
        var_23 = ((/* implicit */long long int) (-((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_9 [i_2] [i_2] = ((var_1) ? (((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_2] [i_2]))))) : (var_10))) : (((((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_2]))) : (arr_7 [13ULL]))) / (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)251)), (var_2))))))));
        var_24 = ((((/* implicit */int) arr_8 [i_2] [i_2])) + (((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) arr_8 [i_2] [i_2])) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_8 [i_2] [i_2])) : (((/* implicit */int) arr_8 [7ULL] [i_2])))))));
        var_25 = ((/* implicit */unsigned long long int) var_11);
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_26 = ((/* implicit */int) var_18);
        arr_12 [i_3] = ((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) * (((/* implicit */int) ((14488993215465900052ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2714)))))));
    }
    var_27 = ((/* implicit */short) ((max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * (var_8))), (((/* implicit */unsigned long long int) var_6)))) << (((max((((((/* implicit */int) var_1)) * (((/* implicit */int) var_16)))), (((/* implicit */int) var_4)))) - (320)))));
}
