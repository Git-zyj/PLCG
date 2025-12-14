/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174087
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) var_9)) / (arr_0 [i_0])))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 8; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)61138))));
                    var_20 *= ((/* implicit */unsigned long long int) ((long long int) (short)-16));
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) arr_8 [i_0] [i_1 + 2] [i_1] [2ULL]))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 16; i_3 += 4) 
    {
        arr_13 [i_3] = ((/* implicit */unsigned int) ((arr_10 [i_3 + 1]) ? (((/* implicit */unsigned long long int) arr_12 [i_3 + 2])) : (arr_11 [i_3 + 1])));
        var_22 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4408))) > (9855801758452134822ULL)));
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned short) ((var_12) & (((/* implicit */long long int) (~(var_14))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) 1692598372)) >= (arr_17 [i_4]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) max(((_Bool)0), ((_Bool)1)))) != (((/* implicit */int) arr_16 [i_4])))))) : (arr_1 [(unsigned char)2])));
        arr_19 [i_4] [i_4] = ((/* implicit */int) arr_12 [i_4]);
        arr_20 [(short)6] = ((/* implicit */unsigned short) 685616748639904156LL);
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_3 [i_4] [i_4]), (((/* implicit */unsigned long long int) arr_12 [i_4]))))) ? (((/* implicit */long long int) (~(4085218379U)))) : (((((/* implicit */_Bool) 1848030926)) ? (arr_8 [i_4] [i_4] [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))) ? (3535958555533144737ULL) : (((((unsigned long long int) 2147483647)) >> (((/* implicit */int) min((arr_15 [i_4]), (((/* implicit */short) arr_10 [i_4]))))))))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned long long int) ((int) var_4));
        arr_23 [i_5] [5ULL] = max((max((10575542668117234023ULL), (((/* implicit */unsigned long long int) arr_10 [i_5])))), (arr_3 [i_5] [i_5]));
        var_25 = (~(max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((-1848030927) + (1848030958)))))), (arr_5 [i_5] [i_5]))));
    }
    var_26 = ((/* implicit */_Bool) var_12);
    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) 10652023562659641306ULL)) ? (18446744073709551609ULL) : (8425051743436575616ULL)));
    var_28 = ((/* implicit */int) var_15);
}
