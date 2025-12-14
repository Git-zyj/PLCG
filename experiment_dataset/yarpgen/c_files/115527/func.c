/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115527
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
    for (int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 4; i_1 < 13; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) ((unsigned char) ((arr_4 [i_0 + 1] [i_1 - 4] [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) var_12))))));
                    arr_8 [i_1] [i_1] [(unsigned short)8] = ((/* implicit */unsigned short) var_10);
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)92))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))));
        arr_10 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-119))) == (((long long int) arr_5 [i_0 - 2] [i_0 - 1] [i_0]))));
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) (signed char)-93))));
    }
    var_18 = var_1;
    var_19 -= ((/* implicit */unsigned short) max((var_8), (((/* implicit */unsigned int) var_14))));
    /* LoopSeq 3 */
    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_0)))) ? ((~((~(((/* implicit */int) var_6)))))) : (((min((arr_12 [i_3] [14U]), (((/* implicit */int) var_14)))) >> (((((/* implicit */_Bool) arr_11 [i_3] [i_3])) ? (((/* implicit */int) arr_11 [(unsigned short)9] [i_3])) : (((/* implicit */int) var_15))))))));
        var_21 = arr_11 [i_3] [i_3];
        arr_13 [i_3] = (unsigned short)3744;
    }
    for (int i_4 = 1; i_4 < 12; i_4 += 4) 
    {
        arr_16 [i_4] = ((/* implicit */long long int) ((signed char) (!(((/* implicit */_Bool) arr_14 [i_4])))));
        var_22 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_14)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4] [i_4 - 1]))))));
        arr_17 [i_4] = min((((/* implicit */unsigned long long int) ((int) (-(((/* implicit */int) (unsigned short)61791)))))), (var_0));
    }
    for (unsigned char i_5 = 1; i_5 < 7; i_5 += 4) 
    {
        var_23 -= (!(((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_5 - 1])) >> (((((/* implicit */int) arr_18 [i_5 + 2])) - (139)))))));
        var_24 = ((/* implicit */unsigned int) (((~(((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (var_14)))))) <= (((/* implicit */int) arr_5 [i_5 + 2] [i_5 + 2] [i_5]))));
    }
}
