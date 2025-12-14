/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138712
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
    var_17 = max((var_14), (((/* implicit */long long int) var_0)));
    var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)51367))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = (~(((((/* implicit */_Bool) var_15)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) arr_2 [i_1]);
                    arr_8 [i_0] [i_2] = ((/* implicit */signed char) arr_1 [i_2]);
                    var_20 = ((unsigned short) (unsigned short)0);
                    var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
                    var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)1))));
                }
            } 
        } 
        var_23 = ((/* implicit */long long int) ((unsigned short) arr_0 [i_0]));
        arr_9 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((((/* implicit */long long int) var_7)) | (var_14))) + (9223372036854775807LL))) << (((arr_4 [i_0]) - (2403053685263826314LL)))));
    }
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            {
                arr_16 [i_3] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3] [i_3])) ? (((/* implicit */int) arr_12 [i_3] [i_4])) : (((/* implicit */int) arr_12 [i_3] [i_4]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3] [i_4]))) : (((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) var_12)), (var_2)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [(signed char)6]))) : (arr_15 [i_4] [i_3] [i_4]))))));
                arr_17 [i_4] = ((/* implicit */unsigned short) var_15);
            }
        } 
    } 
    var_24 = ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_16)))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) - (max(((-(var_13))), (((/* implicit */long long int) min((var_8), (var_12)))))));
}
