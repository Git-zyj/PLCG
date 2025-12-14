/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168758
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_10) << (((1067238293U) - (1067238230U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : ((-(var_0)))));
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 4; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [10] [i_2] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) var_7))));
                    arr_11 [i_0] [i_1 + 1] [i_2] = ((/* implicit */unsigned char) 268402688);
                    var_16 *= ((/* implicit */unsigned long long int) ((short) 2691013622U));
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) arr_8 [i_0]))))))));
                }
            } 
        } 
    }
    for (unsigned short i_3 = 2; i_3 < 23; i_3 += 4) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((arr_12 [5U] [i_3]) | (((/* implicit */long long int) ((var_8) >> (((((/* implicit */int) (short)26588)) - (26585)))))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) ((1067238293U) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)102))))))))));
        arr_14 [i_3 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_9)) | (var_3)))) || (((((/* implicit */_Bool) arr_13 [i_3 + 1])) && (((/* implicit */_Bool) 1603953674U))))))) : (((/* implicit */int) var_1))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */int) ((1343066454U) <= (2691013603U)))) > (((/* implicit */int) arr_13 [i_3]))));
        var_20 += ((/* implicit */_Bool) ((((arr_12 [(signed char)18] [i_3]) + (9223372036854775807LL))) >> (((((min((var_8), (((/* implicit */unsigned int) var_5)))) << (((((((/* implicit */_Bool) -159708906)) ? (((/* implicit */int) (unsigned char)145)) : (2131628153))) - (135))))) - (211907U)))));
    }
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((int) var_2))) || ((!(((/* implicit */_Bool) var_0)))))))) < (((var_14) + (var_14)))));
}
