/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133319
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
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 1]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)58025))))));
        var_19 = ((/* implicit */long long int) min((2147483635), (((/* implicit */int) (unsigned short)58005))));
        var_20 = ((/* implicit */signed char) ((unsigned int) ((((arr_1 [i_0]) >= (10ULL))) ? (((/* implicit */int) (unsigned short)58024)) : (((/* implicit */int) min((var_0), (arr_2 [i_0 + 4] [i_0 + 3])))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_21 = ((/* implicit */short) arr_0 [i_1]);
        var_22 = ((/* implicit */_Bool) ((short) (unsigned short)58003));
    }
    for (unsigned short i_2 = 3; i_2 < 15; i_2 += 2) 
    {
        var_23 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) 4998925017501699172ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12)))))) <= ((+(((/* implicit */int) (unsigned short)4))))));
        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_5 [i_2 - 2] [i_2 + 2]))) ? (((/* implicit */int) ((unsigned short) 1059125485U))) : ((+(((/* implicit */int) (_Bool)0))))));
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        var_25 = ((/* implicit */long long int) ((_Bool) 9223372036854775807LL));
        var_26 *= ((/* implicit */short) ((((/* implicit */_Bool) (+((+(arr_13 [i_3] [i_3])))))) ? (max((min((((/* implicit */long long int) var_2)), (arr_13 [i_3 - 1] [i_3 - 1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) 3469346264U)) ? (((/* implicit */int) (short)-25488)) : (((/* implicit */int) arr_2 [i_3] [i_3 - 1]))))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)3)))));
        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) var_13))));
    }
    var_28 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (+(((/* implicit */int) var_16))))) ? (((/* implicit */int) ((unsigned short) var_2))) : (((/* implicit */int) var_15)))), (var_4)));
    var_29 = ((/* implicit */unsigned short) var_8);
    /* LoopSeq 2 */
    for (unsigned int i_4 = 4; i_4 < 8; i_4 += 4) 
    {
        var_30 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_17 [i_4 + 2] [i_4 + 2])))) ? (max((((/* implicit */int) (short)-3282)), (824892676))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) > (((var_0) ? (arr_17 [i_4] [i_4]) : (var_13))))))));
        var_31 = ((/* implicit */unsigned short) max((((203755333U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_16)))))));
        var_32 = ((/* implicit */signed char) min(((short)32750), (var_16)));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_6 = 2; i_6 < 22; i_6 += 2) 
        {
            var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_18 [i_5]) ? (((/* implicit */int) arr_18 [i_5])) : (((/* implicit */int) arr_18 [i_5]))))) ? (((/* implicit */unsigned long long int) (-(2149365669U)))) : (((unsigned long long int) (unsigned short)65531))));
            var_34 = ((/* implicit */_Bool) var_16);
        }
        var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_5])) * (((/* implicit */int) arr_22 [i_5] [i_5]))))) ? (((((/* implicit */int) var_15)) << (((/* implicit */int) arr_18 [i_5])))) : ((~(((/* implicit */int) arr_22 [i_5] [i_5]))))));
        var_36 = ((/* implicit */unsigned short) min((3469346263U), (((/* implicit */unsigned int) (_Bool)1))));
    }
}
